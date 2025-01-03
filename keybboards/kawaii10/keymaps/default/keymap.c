/* Copyright 2021 yohewi
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
    _2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_DEFAULT] = LAYOUT(
      KC_7,    KC_8,    KC_9,    KC_BSPC,   _______, \
      KC_4,    KC_5,    KC_6,    KC_PAST,   _______, \
      KC_1,    KC_2,    KC_3,    KC_MINS,   _______, \
      KC_DOT,  KC_0,    KC_ENT,  KC_PPLS,   _______ ),

    [2] = LAYOUT(
      _______, _______, _______,  _______,  _______, \
      _______, _______, _______,  _______,  _______, \
      _______, _______, _______,  _______,  _______, \
      _______, _______, _______,  _______,  _______ ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_LBRC);
        } else {
            tap_code(KC_RBRC);
        }
    }
    return true;
};
