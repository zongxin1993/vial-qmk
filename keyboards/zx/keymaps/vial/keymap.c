// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,  KC_3,    KC_4,   KC_5,    KC_6,    XXXXXXX,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,  KC_E,    KC_R,   KC_T,    KC_Y,    XXXXXXX,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  XXXXXXX,
        KC_A,    KC_S,    KC_D,  KC_F,    KC_G,   XXXXXXX, XXXXXXX, XXXXXXX,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENTER, XXXXXXX,
        KC_LSFT, KC_Z,    KC_X,  KC_C,    KC_V,   KC_B,    XXXXXXX, XXXXXXX,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_NO, KC_UP,      KC_NO,
        KC_LCTL, KC_LGUI, MO(1), KC_LALT, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX,   KC_APP, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,  XXXXXXX
    ),
    [1] = LAYOUT(
        KC_TILD, KC_F1,   KC_F2, KC_F3,   KC_F4,  KC_F5,   KC_F6,   XXXXXXX,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  XXXXXXX,
        KC_TAB,  KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,   XXXXXXX,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX,
        KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,  XXXXXXX, XXXXXXX, XXXXXXX,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_BRID, KC_BRIU, KC_NO,   XXXXXXX,
        KC_LSFT, KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,   XXXXXXX, XXXXXXX,   KC_NO,  KC_NO,   KC_MPRV, KC_MNXT, KC_MPLY, KC_NO, KC_PGUP, KC_NO,
        KC_LCTL, KC_LGUI, MO(1), KC_LALT, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX,   KC_APP, KC_RALT, KC_HOME, KC_PGDN, KC_END,  XXXXXXX, XXXXXXX, XXXXXXX
    )
};

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    // Key Matrix to LED Index
    {
        // Left
        {1, 2, 3, 4, 5, 6, 7, NO_LED},
        {8, 9,10,11,12,13,14,NO_LED},
        {15,16,17,18,19,NO_LED,NO_LED,NO_LED},
        {20,21,22,23,24,25,NO_LED,NO_LED},
        {26,27,28,29,30,NO_LED,NO_LED,NO_LED},
        // Right
        {31,32,33,34,35,36,37,NO_LED},
        {38,39,40,41,42,43,44,NO_LED},
        {45,46,47,48,49,50,51,NO_LED},
        {52,53,54,55,56,57,58,59},
        {60,61,62,63,64,NO_LED,NO_LED,NO_LED}
    },
    // LED Index to Physical Position
    {
        {224,0}, {196,0}, {168,0}, {140,0}, {112,0}, {84,0}, {56,0},
        {224,16},{196,16},{168,16},{140,16},{112,16},{84,16},{56,16},
                 {196,32},{168,32},{140,32},{112,32},{84,32},
        {224,48},{196,48},{168,48},{140,48},{112,48},{84,48},
        {224,64},{196,64},{168,64},{140,64},         {84,64},

            {224,0}, {196,0}, {168,0}, {140,0}, {112,0}, {84,0}, {56,0},
            {224,16},{196,16},{168,16},{140,16},{112,16},{84,16},{56,16},
        {56,32},{224,32},{196,32},{168,32},{140,32},{112,32},{  56,32},
        {56,48},{224,48},{196,48},{168,48},{140,48},{112,48},{84,48},{56,48},
            {56,64},{224,64},                       {112,64},{84,64},{56,64}
    },
    // LED Index to Flag
    {
        4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,
        4,4,4,4,4,
        4,4,4,4,4,4,
        4,4,4,4,4,

        4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,
        4,4,4,4,4,4,4,4,
        4,4,4,4,4
    }
};

#endif
