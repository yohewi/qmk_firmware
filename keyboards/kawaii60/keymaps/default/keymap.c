/* Copyright 2021 yohe
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layer_number {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
    LOWER = SAFE_RANGE,
    RAISE,
    KANJI,
};

#define KC_AJST  MO(_ADJUST)

// Base layer mod tap
#define KC_Q_AL  LALT_T(KC_Q)
#define KC_A_CT  LCTL_T(KC_A)
#define KC_Z_SF  LSFT_T(KC_Z)

#define KC_L_CT  RCTL_T(KC_L)
#define KC_DTSF  RSFT_T(KC_DOT)

// Lower layer mod tap
#define KC_F1AL  LALT_T(KC_F1)
#define KC_F6CT  LCTL_T(KC_F6)
#define KC_11SF  LSFT_T(KC_F11)

#define KC_QUSF  RCTL_T(KC_QUOT)
#define KC_ROSF  RSFT_T(KC_RO)

// Layer tap
#define KC_BSLO  LT(_LOWER, KC_BSPC)
#define KC_SPRA  LT(_RAISE, KC_SPC)
#define KC_BSRA  LT(_RAISE, KC_BSPC)
#define KC_SPLO  LT(_LOWER, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------.
    KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------.
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
  //|--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------+--------|
    KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
  //|--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------+--------|
    KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  MO(LOWER),
  //|--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------+--------|
    _______, _______, KC_TAB,  KC_LALT, KC_BSPC, KC_SPC,  KC_ENT,  KC_LALT, KC_LGUI, _______, _______, _______ ),
  //`-----------------------------------------------------------------------------------------------------------'

  [_LOWER] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------.
    KC_PWR,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_INS,
  //|--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------+--------|
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,  _______, _______,
  //|--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------+--------|
    _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_PWR, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_PENT,
  //|--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------+--------|
    _______, _______, _______, _______, _______, _______, KC_PPLS, _______, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, _______,
  //|--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------+--------|
    _______, _______, _______, _______, _______, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, _______, _______, _______ )
  //`-----------------------------------------------------------------------------------------+--------+--------'

};

/*
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_SPRA:
      return TAPPING_LAYER_TERM;
    default:
      return TAPPING_TERM;
  }
}
*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  bool result = false;
  switch (keycode) {
    case KANJI:
      if (record->event.pressed) {
          register_code16(keymap_config.swap_lalt_lgui ? A(KC_GRV) : KC_LANG2);
      } else {
          unregister_code16(keymap_config.swap_lalt_lgui ? A(KC_GRV) : KC_LANG2);
      }
    break;
    default:
      result = true;
      break;
  }

  return result;
}
