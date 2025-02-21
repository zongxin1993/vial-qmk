// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC, KC_1,    KC_2,  KC_3,    KC_4,   KC_5,    KC_6,    XXXXXXX,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  XXXXXXX,
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
        {6, 5, 4, 3, 2, 1, 0, NO_LED},
        {7, 8,9,10,11,12,13,NO_LED},
        {18,17,16,15,14,NO_LED,NO_LED,NO_LED},
        {19,20,21,22,23,24,NO_LED,NO_LED},
        {29,28,27,26,25,NO_LED,NO_LED,NO_LED},
        // Right
        {36,35,34,33,32,31,30,NO_LED},
        {37,38,39,40,41,42,43,NO_LED},
        {50,49,48,47,46,45,44,NO_LED},
        {51,52,53,54,55,56,57,58},
        {63,62,61,60,59,NO_LED,NO_LED,NO_LED}
    },
    // LED Index to Physical Position
    // x = 0 15 30 45 60 75 90 105   120 135 150 165 180 195 210 224
    // y =
    // 13
    // 26
    // 39
    // 52
    // 64
    {
        {90,13},{75,13},{60,13},{45,13},{30,13},{15,13},{0,13},
        {0,26},{15,26},{30,26},{45,26},{60,26},{75,26},{90,26},
                        {60,39},{45,39},{30,39},{15,39},{0,39},
        {0,52},{15,52},{30,52},{45,52},{60,52},{75,52},
        {60,64},{45,64},{30,64},{15,64},{0,64},

        {210,13},{195,13},{180,13},{165,13},{150,13},{135,13},{120,13},
        {120,26},{135,26},{150,26},{165,26},{180,26},{195,26},{210,26},
        {210,39},{195,39},{180,39},{165,39},{150,39},{135,39},{120,39},
        {120,52},{153,52},{150,52},{165,52},{180,52},{195,52},{210,52},{224,52},
        {120,64},{135,64},{150,64},{165,64},{180,64},
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
