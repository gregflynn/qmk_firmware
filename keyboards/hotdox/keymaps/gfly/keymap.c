#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
// #define MDIA 2 // media keys

#define _______ KC_TRNS

enum custom_keycodes {
  VRSN = SAFE_RANGE,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  Esc   |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |  bksp  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  | VolUp|           | HOME |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  FN    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;:  |   '"   |
 * |--------+------+------+------+------+------| VolDn|           |  END |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |  ,<  |  .>  |  /?  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | Ctrl | super| alt  | Prev | Next |                                       |  -_  |  =+  |  [{  |  ]}  | Ctrl |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Play |  alt |       |  FN  | super|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |  F11 |       |  F12 |        |      |
 *                                 | Space| super|------|       |------| Enter  | Space|
 *                                 |      |      | ctrl |       |  alt |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_ESC,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   TG(SYMB),
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_VOLU,
        MO(SYMB),       KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSPO,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC_VOLD,
        KC_LCTL,        KC_LGUI,      KC_LALT,KC_MPRV,KC_MNXT,
                                                      KC_MPLY,KC_LALT,
                                                              KC_F11,
                                               KC_SPC,KC_LGUI,KC_LCTL,
        // right hand
             _______,     KC_6,   KC_7,  KC_8,   KC_9,   KC_0,   KC_BSPC,
             KC_HOME,     KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,   KC_BSLS,
                          KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN,KC_QUOT,
             KC_END,      KC_N,   KC_M,  KC_COMM,KC_DOT, KC_SLSH,KC_RSPC,
                               KC_MINS,  KC_EQL, KC_LBRC,KC_RBRC,KC_RCTL,
             MO(SYMB),KC_RGUI,
             KC_F12,
             KC_RALT, KC_ENT, KC_SPC
    ),
/* Keymap 1: Symbol Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * | `       |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |  del   |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * | ~       | PgUp |  Up  | PgDn |      |      |      |           |      |      |      |      |      |      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         | Left | Down | Right|      |      |------|           |------|      |      |      |      |      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |      |      |      |      |      |      |           |      |      |      |      |      |  Up  |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |      |      |      |                                       |      |      | Left | Down |Right |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_ergodox(
       // left hand
       KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  _______,
       KC_TILD,KC_PGUP,KC_UP,  KC_PGDN,_______,_______,_______,
       _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
       _______,_______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,
                                       _______,_______,
                                               _______,
                               _______,_______,_______,
       // right hand
       _______,  KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_DEL,
       _______, _______, _______,_______, _______, _______, _______,
                _______, _______,_______, _______, _______, _______,
       _______, _______, _______,_______, _______,   KC_UP, _______,
                         _______,_______, KC_LEFT, KC_DOWN, KC_RGHT,
       _______, _______,
       _______,
       _______, _______, _______
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};
