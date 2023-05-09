/* Copyright 2023 yohewi
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
    _Default,
    _LOWER,
    _RAISE,
    _ADV
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    Default,
    LOWER,
    RAISE,
    ADV,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_Default] = LAYOUT( /* Base */
//,-----------------------------------------------------------------------------------------------------------.
   KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    JP_MINS, JP_CIRC, JP_YEN, KC_DEL, KC_ROPT,\
   KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    JP_AT,   JP_LBRC, KC_BSPC, \
   KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN, JP_COLN, JP_RBRC, KC_ENT, \
   KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    JP_COMM, JP_DOT,  JP_SLSH, JP_UNDS, KC_RSFT, KC_UP, \
   KC_LGUI,          KC_LALT, LT(LOWER,KC_SPC), KC_BSPC, LT(RAISE,KC_SPC),  KC_ENT, JP_ZKHK,          KC_LEFT, KC_DOWN, KC_RGHT
 ),
    [_LOWER] = LAYOUT( /* extra */
//,---------------------------------------------------------------------------------------------------------------------------.
   KC_PWR,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_INS, _______, _______, \
   _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______,  _______, _______, _______, \
   KC_CAPS, KC_VOLD, KC_VOLU, KC_MUTE, KC_PWR,  _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_PENT,  _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, KC_PPLS, _______, KC_PMNS, KC_END,  KC_PGDN,  KC_PPLS, KC_PMNS, KC_END, \
   _______,          _______, _______, _______, _______, _______, _______,           _______, _______, _______
  ),
    [_RAISE] = LAYOUT( /* extra */
//,---------------------------------------------------------------------------------------------------------------------------.
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______,          _______, _______, _______, _______, _______, _______,         _______, _______, _______
  ),
    [_ADV] = LAYOUT( /* extra */
//,---------------------------------------------------------------------------------------------------------------------------.
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______,          _______, _______, _______, _______, _______, _______,         _______, _______, _______
   )
    
};
