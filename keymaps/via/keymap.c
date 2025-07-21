#include QMK_KEYBOARD_H

// Layers for the VIA enabled rp60 firmware. 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,   KC_EQL,  KC_BSPC,
        KC_TAB,      KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,   KC_RBRC,
        KC_CAPS,     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,   KC_BSLS, KC_ENT,
        KC_LSFT,     KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT,         KC_RSFT,   KC_UP,   KC_SLSH,
        KC_LCTL,     KC_LWIN,KC_LALT,                KC_SPC,                         KC_NO,  KC_RCMD,KC_LEFT,   KC_DOWN, KC_RGHT 
    )
};

// Configurations for RGB Matrix animations
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13 },
  {   26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14,    },
  {   27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 },
  {   53, 52, 51, 50, 49, 48, 47, 46, 45, 44,     43, 42, 41 },
  {   54, 55, 56,         57,             58, 59, 60, 61, 62 }
}, {
  // LED Index to Physical Position
    { 0, 0 }, { 19, 0 }, { 37, 0 }, { 56, 0 }, { 75, 0 }, { 93, 0 },
    { 112, 0 }, { 131, 0 }, { 149, 0 }, { 168, 0 }, { 187, 0 }, { 205, 0 },
    { 224, 0 }, { 243, 0 }, { 224, 16 }, { 205, 16 }, { 187, 16 }, { 168, 16 },
    { 149, 16 }, { 131, 16 }, { 112, 16 }, { 93, 16 }, { 75, 16 }, { 56, 16 },
    { 37, 16 }, { 19, 16 }, { 0, 16 }, { 0, 32 }, { 19, 32 }, { 37, 32 },
    { 56, 32 }, { 75, 32 }, { 93, 32 }, { 112, 32 }, { 131, 32 }, { 149, 32 },
    { 168, 32 }, { 187, 32 }, { 205, 32 }, { 224, 32 }, { 243, 32 }, { 224, 48 },
    { 205, 48 }, { 187, 48 }, { 168, 48 }, { 149, 48 }, { 131, 48 }, { 112, 48 },
    { 93, 48 }, { 75, 48 }, { 56, 48 }, { 37, 48 }, { 19, 48 }, { 0, 48 },
    { 0, 64 }, { 19, 64 }, { 37, 64 }, { 93, 64 }, { 149, 64 }, { 168, 64 },
    { 187, 64 }, { 205, 64 }, { 224, 64 }
}, {
  // LED Index to Flag
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1
} };