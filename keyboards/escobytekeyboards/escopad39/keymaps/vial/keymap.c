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
        KC_ESC,    KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_BSPC,   KC_DEL,  KC_MUTE,
        KC_TAB,    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,               KC_UP,
        MO(1),     KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_LEFT,   KC_DOWN, KC_RIGHT,
        KC_LSFT,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,               KC_ENT,
        TT(3),     KC_LCTL,KC_LGUI, KC_LALT, MO(1),   KC_SPC,             TT(2)
    ),
    [1] = LAYOUT( /* Second set of numbers, mirrored right half Alphas, PrintScreen and Capslock */
        KC_GRV,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,    KC_PSCR, KC_CAPS,
        S(KC_MINS),KC_P,   KC_O,    KC_I,    KC_U,    KC_Y,               KC_LBRC,
        _______,   KC_QUOT,KC_L,    KC_K,    KC_J,    KC_H,    S(KC_LBRC),KC_RBRC, S(KC_RBRC),
        _______,   KC_SLSH,KC_DOT,  KC_COMM, KC_M,    KC_N,               KC_BSLS,
        _______,   _______,_______, _______, _______, _______,            _______
    ),
    [2] = LAYOUT( /* F-keys, Numbers, Mouse Keys */
        _______,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,    KC_F12,  KC_ACL0,
        _______,   KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,             KC_MS_U,
        _______,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_MS_L,   KC_MS_D, KC_MS_R,
        _______,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,               KC_BTN2,
        _______,_______,   _______, KC_WH_D, KC_WH_U, KC_BTN1,            KC_BTN3
    ),
    [3] = LAYOUT( /* Numpad, Media Controls, Reboot on Encoder button*/
        _______,   KC_DEL, KC_ESC,  KC_PSLS, KC_PAST, KC_PMNS, KC_MPLY,   KC_MSTP, QK_BOOT,
        _______,   KC_BSPC,KC_P7,   KC_P8,   KC_P9,   KC_PMNS,            _______,
        KC_HOME,   KC_MPLY,KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,   _______, _______,
        KC_END,    KC_PGDN,KC_P1,   KC_P2,   KC_P3,   KC_PPLS,            _______,
        _______,   _______,_______, KC_P0,   KC_PDOT, KC_PENT,            KC_NUM
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


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
    [2] =   { ENCODER_CCW_CW(KC_ACL1, KC_ACL2) },
    [3] =   { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif