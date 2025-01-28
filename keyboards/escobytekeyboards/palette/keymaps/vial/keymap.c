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
    [0] = LAYOUT( /* Main Layer */
        KC_Q,   KC_W,   KC_E,    KC_LEFT,KC_UP,  QK_BOOT,
        KC_A,   KC_S,   KC_D,    KC_DOWN,KC_RGHT,TG(1)
    ),
    [1] = LAYOUT( /* Layer 1 */
        KC_1,   KC_2,   KC_3,    KC_4,   KC_5,   _______,
        KC_7,   KC_8,   KC_9,    KC_0,   KC_6,   _______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
      [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
      [1] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_DOWN, KC_UP) },
};
#endif