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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, \
    K400,       K402, K403, K404, K405, K406, K407,       K409, K410, K411 \
) \
{ \
    { K000,  K002,  K004,  K006,  K008,  K010,  K012,  K014 }, \
    { K001,  K003,  K005,  K007,  K009,  K011,  K013,  K015 }, \
    { K100,  K102,  K104,  K106,  K108,  K110,  K112,  KC_NO }, \
    { K101,  K103,  K105,  K107,  K109,  K111,  K113,  KC_NO }, \
    { K200,  K202,  K204,  K206,  K208,  K210,  K212,  KC_NO }, \
    { K201,  K203,  K205,  K207,  K209,  K211,  K213,  KC_NO }, \
    { K300,  K302,  K304,  K306,  K308,  K310,  K312,  K411 }, \
    { K301,  K303,  K305,  K307,  K309,  K311,  K313,  K410 }, \
    { K400,  K402,  K403,  K404,  K405,  K406,  K407,  K409 } \
}
