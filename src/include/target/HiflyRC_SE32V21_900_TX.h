#ifndef DEVICE_NAME
#define DEVICE_NAME "Hifly DIY SE32TX2.1"
#endif

//#define USE_TX_BACKPACK
#define USE_OLED_I2C
#define OPT_USE_OLED_I2C        1
#define OLED_REVERSED
#define HAS_FIVE_WAY_BUTTON

// GPIO pin definitions
#define GPIO_PIN_RST            PB3
#define GPIO_PIN_DIO0           PB9
#define GPIO_PIN_NSS            PB12
#define GPIO_PIN_MOSI           PB15
#define GPIO_PIN_MISO           PB14
#define GPIO_PIN_SCK            PB13
#define GPIO_PIN_RX_ENABLE      PB4
#define GPIO_PIN_TX_ENABLE      PB5

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
#define GPIO_PIN_DEBUG_RX       PA10
#define GPIO_PIN_DEBUG_TX       PA9


// Output Power
#define MinPower PWR_50mW
#define MaxPower PWR_1000mW
#define DefaultPower PWR_50mW
#define POWER_OUTPUT_VALUES {2,5,8,12,15}
