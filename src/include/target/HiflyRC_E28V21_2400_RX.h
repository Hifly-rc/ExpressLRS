#ifndef DEVICE_NAME
#define DEVICE_NAME "Hifly SE28RX"
#endif

// GPIO pin definitions
#define GPIO_PIN_RST PA15
#define GPIO_PIN_BUSY PA12
#define GPIO_PIN_DIO1 PA11
#define GPIO_PIN_NSS PA4
#define GPIO_PIN_MOSI PA7
#define GPIO_PIN_MISO PA6
#define GPIO_PIN_SCK PA5
#define GPIO_PIN_RX_ENABLE PB0
#define GPIO_PIN_TX_ENABLE PB1

#ifdef USE_DIVERSITY
#undef DEVICE_NAME
#define DEVICE_NAME "Hifly DE28RX"
#define GPIO_PIN_RST_2 PB3
#define GPIO_PIN_BUSY_2 PA12
#define GPIO_PIN_DIO1_2 PA11
#define GPIO_PIN_NSS_2 PB12
#define GPIO_PIN_MOSI_2 PB15
#define GPIO_PIN_MISO_2 PB14
#define GPIO_PIN_SCK_2 PB13
#define GPIO_PIN_RX_ENABLE_2 PB4
#define GPIO_PIN_TX_ENABLE_2 PB5
#endif

#define GPIO_PIN_LED_RED PC14   // Red LED
#define GPIO_PIN_LED_GREEN PC15 // Green LED

/* S.Port output signal */
#define GPIO_PIN_RCSIGNAL_RX PA3 /* USART3 */
#define GPIO_PIN_RCSIGNAL_TX PA2 /* USART3 */
/* Backpack logger connection */
#define BACKPACK_LOGGING_BAUD 57600
#define GPIO_PIN_DEBUG_RX PA10
#define GPIO_PIN_DEBUG_TX PA9

// Output Power
#define MinPower PWR_10mW
#define MaxPower PWR_500mW
#define DefaultPower PWR_50mW
#define POWER_OUTPUT_VALUES      \
    {                            \
        -18, -15, -11, -8, -4, 3 \
    }
