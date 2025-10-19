#pragma once

#define MATRIX_ROWS 5
#define MATRIX_COLS 14

// Additional settings
#define COMBO_MUST_PRESS_IN_ORDER_PER_COMBO

// Main settings
#define DEBOUNCE 5
#define USB_POLLING_INTERVAL_MS 1 // 1kHz polling rate
#define TAPPING_TERM 200 // How long a key press becomes a hold
#define TAPPING_TOGGLE 2 // Number of taps to toggle a hold

//RGB Matrix settings
#define RGB_MATRIX_LED_COUNT 63
#define WS2812_DI_PIN GP28
#define RGB_MATRIX_CENTER { 112, 32 }  
#define WS2812_PIO_PIO0
//#define WS2812_T1H 670
//#define WS2812_T0H 320
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB

// RGB Matrix effects
#define RGB_MATRIX_STARTUP_VAL 64
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100 
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
