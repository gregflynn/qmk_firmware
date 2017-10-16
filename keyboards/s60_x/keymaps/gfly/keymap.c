#include "s60_x.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

// denotes keys without switches
#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = KEYMAP(
  KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,     KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  ______,  KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
  MO(_FL), KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L,   KC_SCLN, KC_QUOT, ______,  KC_ENT,  \
  KC_LSPO, ______,  KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT, KC_SLSH, ______,  KC_RSPC, ______, \
  KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                              KC_RALT, KC_LGUI, MO(_FL), KC_RCTL),

[_FL] = KEYMAP(
  KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12, ______,  KC_DEL,  \
  S(KC_GRV), KC_PGUP, KC_UP,   KC_PGDN, KC_TRNS, RGB_SAI, RGB_SAD, RGB_HUI,  RGB_HUD, RGB_VAI, RGB_VAD, KC_HOME,  KC_END, RGB_TOG, \
  KC_TRNS,   KC_LEFT, KC_DOWN, KC_LEFT, KC_MYCM, KC_TRNS, KC_TRNS, KC_VOLD,  KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,  ______, KC_TRNS, \
  KC_TRNS,   ______,  KC_CAPS, KC_APP,  KC_CALC, KC_TRNS, KC_TRNS, RGB_MOD, KC_MUTE,  KC_MPRV, KC_MNXT, KC_MPLY,  ______, KC_TRNS, ______, \
  KC_TRNS,   KC_TRNS, KC_TRNS,                            KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
