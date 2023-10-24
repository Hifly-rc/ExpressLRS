#ifndef DEVICE_NAME
#define DEVICE_NAME "Hifly SE28TX1.2"
#endif

//#define USE_TX_BACKPACK
#define USE_OLED_I2C
#define OPT_USE_OLED_I2C        1
#define OLED_REVERSED
#define HAS_FIVE_WAY_BUTTON

// GPIO pin definitions
#define GPIO_PIN_RST            PA8
#define GPIO_PIN_BUSY           PA12
#define GPIO_PIN_DIO1           PA11
#define GPIO_PIN_NSS            PA4
#define GPIO_PIN_MOSI           PA7
#define GPIO_PIN_MISO           PA6
#define GPIO_PIN_SCK            PA5
#define GPIO_PIN_RX_ENABLE      PA0
#define GPIO_PIN_TX_ENABLE      PA1

#define GPIO_PIN_OLED_SDA       PB7
#define GPIO_PIN_OLED_SCK       PB6
#define GPIO_PIN_OLED_RST       -1
#define GPIO_PIN_LED_RED        PC14 // Red LED
#define GPIO_PIN_LED_GREEN      PC15 // Green LED

#define GPIO_PIN_JOYSTICK       PB0
/* Joystick values              {UP, DOWN, LEFT, RIGHT, ENTER, IDLE}*/
#define JOY_ADC_VALUES          {460, 723, 607, 680, 0, 1024}    

/* S.Port input signal */
#define GPIO_PIN_RCSIGNAL_RX    PA3/* USART3 */
#define GPIO_PIN_RCSIGNAL_TX    PA2 /* USART3 */
#define GPIO_PIN_FAN_EN         PC13
#define GPIO_PIN_BUZZER         PB1
/* Backpack logger connection */
#define BACKPACK_LOGGING_BAUD   57600
#define GPIO_PIN_DEBUG_RX       PA10
#define GPIO_PIN_DEBUG_TX       PA9

// Output Power
#define MinPower PWR_10mW
#define MaxPower PWR_500mW
#define DefaultPower PWR_50mW
#define POWER_OUTPUT_VALUES {-18,-15,-11,-8,-4,3}
