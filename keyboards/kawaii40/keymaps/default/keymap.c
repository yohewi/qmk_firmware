/* Copyright 2022 yohewi
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
#include "keymap_jp.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _DEFAULT,
    _RAISE,
    _LOWER,
    _NUMBER
};

enum custom_keycodes {
  IMEON,
  IMEOFF,
};

// Base layer mod tap
#define KC_MHAL LALT_T(KC_MHEN)
#define KC_HNCT RCTL_T(KC_HENK)
#define KC_ZSFT LSFT_T(KC_Z)
#define KC_DOSF RSFT_T(KC_DOT)
#define KC_ESCT LCTL_T(KC_ESC)
#define KC_ENAL RALT_T(KC_ENT)
#define KC_ACT  LCTL_T(KC_A)

// Raise layer mod tap
#define KC_F9SF LSFT_T(KC_F9)

// Layer tap
#define KC_RA MO(_RAISE)
#define KC_SPLO LT(_LOWER, KC_SPC)
#define KC_RAEN LT(_RAISE, KC_ENT)
#define KC_NM MO(_NUMBER)

// WWW BACK/FORWARD short alias
#define KC_BCK KC_WWW_BACK
#define KC_FWD KC_WWW_FORWARD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_DEFAULT] = LAYOUT(
      KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC, \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT, \
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOSF, KC_RSFT, \
               KC_LGUI, KC_MHAL, KC_SPLO,                   KC_BSPC, KC_RAEN, KC_HNCT )
    /*
    [_RAISE] = LAYOUT(
      KC_DEL,  KC_F1,  KC_F2,  KC_F3,    KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, \
     _______, _______, _______, _______, _______,  KC_PLUS, KC_MINS, _______, _______,  KC_UP,   KC_SLSH, \
     _______, _______, _______, _______, _______, _______, _______, _______,  KC_LEFT, KC_DOWN,  KC_RGHT, \
               _______, _______, _______,                   _______, _______, _______ ) */

    [_LOWER] = LAYOUT(
     _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC, \
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
              _______, _______, _______,                   _______, _______, _______  ) */
};
