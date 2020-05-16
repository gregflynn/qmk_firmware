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
 * |  Esc   |   1  |   2  |   3  |   4  |   5  | F11  |           |  F12 |   6  |   7  |   8  |   9  |   0  |  bksp  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  FN    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;:  |   '"   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |  ,<  |  .>  |  /?  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | Ctrl |      |      |      |      |                                       |  -_  |  =+  |  [{  |  ]}  | Ctrl |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Play | VolUp|       | Home | End  |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | VolDn|       |      |        |      |
 *                                 | Space| super|------|       |------| Enter  | Space|
 *                                 |      |      |  fn  |       |  alt |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_ESC,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_F11,
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   _______,
        MO(SYMB),       KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSPO,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   _______,
        KC_LCTL,        _______,      _______,_______,_______,
                                                      KC_MPLY,KC_VOLU,
                                                              KC_VOLD,
                                               KC_SPC,KC_LGUI,MO(SYMB),
        // right hand
              KC_F12,     KC_6,   KC_7,  KC_8,   KC_9,   KC_0,   KC_BSPC,
             _______,     KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,   KC_BSLS,
                          KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN,KC_QUOT,
             _______,     KC_N,   KC_M,  KC_COMM,KC_DOT, KC_SLSH,KC_RSPC,
                               KC_MINS,  KC_EQL,KC_LBRC,KC_RBRC,KC_RCTL,
             KC_HOME, KC_END,
             _______,
             KC_RALT, KC_ENT, KC_SPC
    ),
/* Keymap 1: Symbol Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * | `       |  F1  |  F2  |  F3  |  F4  |  F5  | F11  |           | F12  |  F6  |  F7  |  F8  |  F9  |  F10 |  del   |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * | ~       | PgUp |  Up  | PgDn |      |      |      |           |      |      |      |      |      |      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         | Left | Down | Right|      |      |------|           |------|      |      |      |      |      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |      | Caps |  App |      |      |      |           |      |      |      |      |      |  Up  |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |      |      |      |                                       |      |      | Left | Down |Right |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Next |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_ergodox(
       // left hand
       KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F11,
       KC_TILD,KC_PGUP,KC_UP,  KC_PGDN,_______,_______,_______,
       _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
       _______,_______,KC_CAPS,KC_APP, _______,_______,_______,
       _______,_______,_______,_______,_______,
                                       KC_MNXT,_______,
                                               _______,
                               _______,_______,_______,
       // right hand
       KC_F12,  KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_DEL,
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
