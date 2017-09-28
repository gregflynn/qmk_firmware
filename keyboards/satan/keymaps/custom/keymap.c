#include "satan.h"

// Used for SHIFT_ESC
#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |FN     |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Gui |FN  |Alt |Ctrl |
   * `-----------------------------------------------------------'
   */
[_BL] = KEYMAP_ANSI(
  KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,     KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
  MO(_FL), KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT,  \
  KC_LSPO, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT, KC_SLSH,                   KC_RSPC, \
  KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                              KC_RALT, KC_LGUI, MO(_FL), KC_RCTL),

/* Keymap _FL: Function Layer
   * ,-----------------------------------------------------------.
   * | ~ | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|  DEL  |
   * |-----------------------------------------------------------|
   * |     |Mt|Vdn|Vup|  |  |   |   |Ins|  |PrSc|Home| End|      |
   * |-----------------------------------------------------------|
   * |      |Prv| PL| Nxt| Cmp|  |  |  |   |   |Vdn| Vup|        |
   * |-----------------------------------------------------------|
   * |        |   |App|Cal|  |   |  |   |    |    |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |Home|PgUp|PgDn|End |
   * `-----------------------------------------------------------'
   */
[_FL] = KEYMAP_ANSI(
  KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  \
  S(KC_GRV), KC_PGUP, KC_UP, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END,  KC_TRNS, \
  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_MYCM, KC_TRNS, KC_TRNS, KC_VOLD,  KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_APP,  KC_CALC, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE,  KC_MPRV, KC_MNXT, KC_MPLY,                   KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
