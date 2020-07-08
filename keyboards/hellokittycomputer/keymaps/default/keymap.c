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
#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

#define KC_AA SE_AA
#define KC_AE SE_AE
#define KC_OE SE_OSLH

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    //_FN
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 *  kON, k01, k02, k03, k04, k05, k06, k07, k08, k09, k00, kOF, \
    kSP, k_q, k_w, k_e, k_r, k_t, k_y, k_u, k_i, k_o, k_p, kEN, \
    kSF, k_a, k_s, k_d, k_f, k_g, k_h, k_j, k_k, k_l, kao, \
    kHJ, k_z, k_x, k_c, k_v, k_b, k_n, k_m, kae, koe, kBS, \
    kMU,      kRE,           kMS,                kSV, kNI, \
    kSW, kLE, kRI, kUP, kDW, kSU \
 * */
    
    
    
    [_BASE] = LAYOUT(
    _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
    _______,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_ENT,
    KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_AA,
    _______,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_AE,   KC_OE, KC_BSPC, 
    _______, _______,  KC_SPC, _______, _______, 
    _______, KC_LEFT, KC_RGHT,   KC_UP, KC_DOWN, _______

  ),
};
/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
*/

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
