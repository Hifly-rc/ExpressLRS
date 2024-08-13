#include "targets.h"
#include "common.h"

#include <functional>

#if defined(USE_I2C)
#include <Wire.h>
#endif

static const int maxDeferredFunctions = 3;

struct deferred_t {
    unsigned long started;
    unsigned long timeout;
    std::function<void()> function;
};

static deferred_t deferred[maxDeferredFunctions] = {
    {0, 0, nullptr},
    {0, 0, nullptr},
    {0, 0, nullptr},
};

static void setupWire()
{
#if defined(USE_I2C)
<<<<<<< HEAD
    if(GPIO_PIN_SDA != UNDEF_PIN && GPIO_PIN_SCL != UNDEF_PIN)
=======
    int gpio_scl = GPIO_PIN_SCL;
    int gpio_sda = GPIO_PIN_SDA;

#if defined(TARGET_RX) && defined(GPIO_PIN_PWM_OUTPUTS)
    for (int ch = 0 ; ch < GPIO_PIN_PWM_OUTPUTS_COUNT ; ++ch)
>>>>>>> master
    {
#if defined(PLATFORM_STM32)
        // Wire::begin() passing ints is ambiguously overloaded, use the set functions
        // which themselves might get the PinName overloads
        Wire.setSCL(GPIO_PIN_SCL);
        Wire.setSDA(GPIO_PIN_SDA);
        Wire.begin();
#else
        // ESP hopes to get Wire::begin(int, int)
        // ESP32 hopes to get Wire::begin(int = -1, int = -1, uint32 = 0)
        Wire.begin((int)GPIO_PIN_SDA, (int)GPIO_PIN_SCL);
#endif
    }
#endif
}

void setupTargetCommon()
{
    setupWire();
}

void deferExecutionMicros(unsigned long us, std::function<void()> f)
{
    for (int i=0 ; i<maxDeferredFunctions ; i++)
    {
        if (deferred[i].function == nullptr)
        {
            deferred[i].started = micros();
            deferred[i].timeout = us;
            deferred[i].function = f;
            return;
        }
    }

    // Bail out, there are no slots available!
    DBGLN("No more deferred function slots available!");
}

void executeDeferredFunction(unsigned long now)
{
    // execute deferred function if its time has elapsed
    for (int i=0 ; i<maxDeferredFunctions ; i++)
    {
        if (deferred[i].function != nullptr && (now - deferred[i].started) > deferred[i].timeout)
        {
            deferred[i].function();
            deferred[i].function = nullptr;
        }
    }
}
