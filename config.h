#pragma once

#define MATRIX_ROWS 5
#define MATRIX_COLS 14

// Main settings
#define DEBOUNCE 5
#define BOOTMAGIC_ROW 4
#define BOOTMAGIC_COLUMN 9
#define USB_POLLING_INTERVAL_MS 1 // 1kHz polling rate
#define TAPPING_TERM 200 // How long a key press becomes a hold
#define TAPPING_TOGGLE 2 // Number of taps to toggle a hold

#define RGB_MATRIX_LED_COUNT 63
#define WS2812_DI_PIN GP28
#define RGB_MATRIX_CENTER { 112, 32 }  
#define WS2812_PIO_PIO1
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB

// RGB Matrix effects
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_MATRIX_STARTUP_VAL 150
#define RGB_DISABLE_TIMEOUT 0