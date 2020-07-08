/* Copyright 2020 FasterHarderCoder
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
 * NOTE: this one can have spaces where keys are missing
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 * NOTE: this one should have KC_NO where key is missing
 */
#define LAYOUT( \
    kON, k01, k02, k03, k04, k05, k06, k07, k08, k09, k00, kOF, \
    kSP, k_q, k_w, k_e, k_r, k_t, k_y, k_u, k_i, k_o, k_p, kEN, \
    kSF, k_a, k_s, k_d, k_f, k_g, k_h, k_j, k_k, k_l, kao, \
    kHJ, k_z, k_x, k_c, k_v, k_b, k_n, k_m, kae, koe, kBS, \
    kMU,      kRE,           kMS,                kSV, kNI, \
    kSW, kLE, kRI, kUP, kDW, kSU \
) \
{ \
    { kON, }, \
    { k01,  k02,   k03,   k04,   k05,   k06,   k07,   k08,   k09,   k00,   kOF}, \
    { kSP,  k_q,   k_w,   k_e,   k_r,   k_t,   k_y,   k_u,   k_i,   k_o,   k_p}, \
    { kSF,  k_a,   k_s,   k_d,   k_f,   k_g,   k_h,   k_j,   k_k,   k_l,   kEN}, \
    { kHJ,  k_z,   k_x,   k_c,   k_v,   k_b,   k_n,   k_m,   kae,   koe,   kBS}, \
    { kMU,  kRE,   kMS,   kSV,   kNI,   kLE,   kRI,   kUP,   kDW,   kao, KC_NO}, \
    { kSW,  kSU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO} \
}
//left right up down
