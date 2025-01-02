/* Copyright 2021 otahinosame
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

// new layout macro matched to physical layout
#define LAYOUT_EX( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K18, \
    K10, K11, K12, K13, K14, K15, K16, K17, K28, \
    K20, K21, K22, K23, K24, K25, K26, K27, K38, \
    K30, K31, K32, K33, K34, K35, K36, K37 \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38 } \
}

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _DEFAULT,
    _RAISE,
    _LOWER,
    _NUMBER
};

// Base layer mod tap
#define KC_MHAL LALT_T(KC_MHEN)
#define KC_HNCT RCTL_T(KC_HENK)
#define KC_ZSFT LSFT_T(KC_Z)
#define KC_DOSF RSFT_T(KC_DOT)
#define KC_ESCT LCTL_T(KC_ESC)
#define KC_ENAL RALT_T(KC_ENT)

// Raise layer mod tap
#define KC_F9SF LSFT_T(KC_F9)

// Layer tap
#define KC_RA MO(_RAISE)
#define KC_SPLO LT(_LOWER, KC_SPC)
#define KC_NM MO(_NUMBER)

// WWW BACK/FORWARD short alias
#define KC_BCK KC_WWW_BACK
#define KC_FWD KC_WWW_FORWARD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_DEFAULT] = LAYOUT_EX(
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, \
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   \
      KC_ZSFT, KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOSF, \
      KC_ESCT, KC_LGUI, KC_MHAL, KC_SPLO,          KC_RA,   KC_HNCT, KC_BSPC, KC_ENAL ),
    [_RAISE] = LAYOUT_EX(
      KC_DEL,  KC_F2,   KC_F3,   KC_F4,   KC_PSCR, KC_MENU, KC_HOME, KC_UP,   KC_END,  KC_BSPC, \
      KC_F5,   KC_F6,   KC_F7,   KC_F8, A(KC_ENT),A(KC_UP), KC_LEFT, KC_RGHT, KC_ENT, \
      KC_F9SF, KC_F10,  KC_F11,  KC_F12,  KC_FWD,  KC_BCK,  KC_DOWN, KC_PGUP, KC_PGDN, \
      _______, _______, _______, KC_TAB,           _______, _______, _______, _______ ),
    [_LOWER] = LAYOUT_EX(
      S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), KC_BSPC, \
      KC_LSFT, KC_NM  , JP_PLUS, JP_ASTR, JP_AT,   KC_RO,   JP_MINS, JP_SCLN, JP_COLN, \
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, JP_YEN,  JP_CIRC, KC_SLSH, JP_LBRC, JP_RBRC, \
      _______, _______, _______, _______,          KC_TAB,  _______, _______, _______ ),
    [_NUMBER] = LAYOUT_EX(
      KC_1   , KC_2   , KC_3   , KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_BSPC, \
      KC_LCTL, XXXXXXX, JP_PLUS, JP_ASTR, JP_MINS, JP_UNDS, KC_4,    KC_5,    KC_6, \
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH, KC_1,    KC_2,    KC_3, \
      _______, _______, _______, _______,          KC_0,    KC_0,    KC_DOT,  _______ ),
    [4] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ ),
    [5] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ ),
    [6] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ ),
    [7] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ ),
    [8] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ ),
    [9] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ ),
    [10] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ ),
    [11] = LAYOUT_EX(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______,          _______, _______, _______, _______ )
};