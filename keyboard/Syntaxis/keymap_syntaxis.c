#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  KEYMAP(ESC, QUOT, COMM, DOT, P, Y, F, G, C, R, L, MINS, \
	 FN4, A, O, E, U, I, D, H, T, N, S, ENT, \
	 BSLS, Q, J, K, X, B, M, W, V, Z, SLSH, SCLN,		    \
	 GRV, LBRC, RBRC, LGUI, LCTRL, LALT, LEFT, DOWN, UP, RIGHT, \
	 FN6, FN3, BSPC, FN0),
 
  /* Numbers, mouse, etc */
  KEYMAP(1, 2, 3, 4, 5, 6, 7, 8, 9, 0, EQL, PAUSE, \
	 F1, 2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, \
	 FN1, NO, NO, _MUTE, HOME, END, PGUP, BTN1, WH_D, WH_U, BTN2, RSHIFT, \
	 MPRV, MNXT, MPLY, NO, LCTRL, PGDN, MS_L, MS_D, MS_U, MS_R, \
	 TRNS, TRNS, DELETE, TRNS),
  
  /* Gaming mode */
  KEYMAP(ESC, 4, 1, TAB, Q, W, E, R, T, Y, U, I,	\
  	 FN2, 5, 2, CAPS, A, S, D, F, G, H, J, K, \
  	 TRNS, 6, 3, LSFT, Z, X, C, V, B, N, M, ENT, \
  	 BSPC, DELETE, LCTRL, LALT, SPC, SPC, LEFT, UP, DOWN, RIGHT, \
  	 NO, SPC, SPC, SPC), \

  /* Gaming Fn mode */
    KEYMAP(TRNS, F4, F1, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,	\
  	 TRNS, F5, F2, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
  	 TRNS, F6, F3, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
  	 TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
  	 TRNS, TRNS, TRNS, TRNS), \
};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_TOGGLE(2),
  [2] = ACTION_LAYER_MOMENTARY(3),
  [3] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),
  [4] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_TAB),
  [5] = ACTION_MODS_ONESHOT(MOD_LSFT),
  [6] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_FN5)
};
