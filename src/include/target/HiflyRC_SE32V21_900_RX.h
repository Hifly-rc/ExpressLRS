

// GPIO pin definitions
#define DEVICE_NAME "Hifly SE32RX2.1"
#define GPIO_PIN_RST PB3
#define GPIO_PIN_BUSY PA12
#define GPIO_PIN_DIO1 PA11
#define GPIO_PIN_NSS PB12
#define GPIO_PIN_MOSI PB15
#define GPIO_PIN_MISO PB14
#define GPIO_PIN_SCK PB13
#define GPIO_PIN_RX_ENABLE PB4
#define GPIO_PIN_TX_ENABLE PB5


#define GPIO_PIN_LED_RED PC14   // Red LED
#define GPIO_PIN_LED_GREEN PC15 // Green LED

/* S.Port output signal */
#define GPIO_PIN_RCSIGNAL_RX PA3 /* USART3 */
#define GPIO_PIN_RCSIGNAL_TX PA2 /* USART3 */
#define GPIO_PIN_RCSIGNAL_TX_SBUS   PB10
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
