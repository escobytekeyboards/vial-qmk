/*
Copyright 2024 Escobyte Keyboards

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Numbers, left half Alphas */
        KC_1,   KC_2,   KC_3,    KC_4,    KC_5,    KC_6,    KC_DEL,   KC_BSPC,  KC_MUTE,
        KC_TAB, KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,              KC_UP,
        KC_ESC, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_LEFT,  KC_DOWN, KC_RIGHT,
        KC_LSFT,KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,              KC_ENT,
        TT(3),  KC_LCTL,KC_LGUI, KC_LALT, KC_SPC,  MO(1),             TT(2)
    ),
    [1] = LAYOUT( /* Second set of numbers, right half Alphas */
        KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  _______,  _______, _______,
        _______,KC_P,   KC_O,    KC_I,    KC_U,    KC_Y,              _______,
        _______,KC_QUOT,KC_L,    KC_K,    KC_J,    KC_H,    _______,  _______, _______,
        _______,KC_SLSH,KC_DOT,  KC_COMM, KC_M,    KC_N,              _______,
        _______,_______,_______, _______, _______, _______,           _______
    ),
    [2] = LAYOUT( /* F-key Row */
        KC_F1,  KC_F2,  KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_WH_D,  KC_WH_U, _______,
        KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,  KC_F12,            KC_MS_U,
        KC_1,   KC_2,   KC_3,    KC_4,    KC_5,    KC_6,    KC_MS_L,  KC_MS_D, KC_MS_R,
        KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,            KC_BTN1,
        _______,_______,KC_ACL0, KC_ACL1, KC_ACL2, KC_BTN2,           _______
    ),
    [3] = LAYOUT( /* Numpad, Media Controls, Capslock, PrintScreen */
        KC_NUM, _______,KC_ESC,  KC_PSLS, KC_PAST, KC_PMNS, KC_BSPC,  KC_CAPS, QK_BOOT,
        _______,_______,KC_P7,   KC_P8,   KC_P9,   KC_PMNS,           _______,
        KC_MPLY,KC_MSTP,KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,  _______, _______,
        KC_MPRV,KC_MNXT,KC_P1,   KC_P2,   KC_P3,   KC_PPLS,           KC_PSCR,
        _______,_______,_______, KC_P0,   KC_PDOT, KC_PENT,           _______
    ),
};



#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
#endif