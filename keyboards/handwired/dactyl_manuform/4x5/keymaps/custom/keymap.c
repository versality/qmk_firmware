#include QMK_KEYBOARD_H

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)
#define M_NEXT   KC_MEDIA_NEXT_TRACK
#define M_PREV   KC_MEDIA_PREV_TRACK

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,         KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        KC_A,    KC_R,    KC_S,    KC_T,    KC_G,         KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,         KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_QUOT,
                 KC_LBRC, KC_RBRC,                                          KC_MINS, KC_EQL,

                          SFT_ESC, CTL_BSPC,                       ALT_SPC, SFT_ENT,
                                   KC_TAB,  KC_HOME,      KC_END,  KC_DEL,
                                   MO(1),   LSA(KC_NO),   KC_LGUI, OSL(2)
    ),
    [1] = LAYOUT(
        _______, M_PREV,  KC_MU,   M_NEXT,  _______,      _______, _______, KC_CAPS, _______, _______,
        _______, KC_ML,   KC_MD,   KC_MR,   _______,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, _______, _______, _______, _______,      KC_GRV,  KC_SLSH, KC_BSLS, KC_QUES, KC_PIPE,
                 _______, _______,                                          KC_MB1,  KC_MB2,
                          _______, _______,                        _______, _______,
                                   _______, _______,      _______, _______,
                                   _______, _______,      _______, TO(3)
    ),
    [2] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
                 KC_F11,  KC_F12,                                           _______, _______,
                          _______, _______,                        _______, _______,
                                   _______, _______,      QK_BOOT, _______,
                                   _______, _______,      _______, _______
    ),
    [3] = LAYOUT(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,      _______, _______, _______, _______, _______,
        _______, KC_A,    KC_S,    KC_D,    KC_F,         _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______,
                 _______, _______,                                           _______, _______,
                          _______, _______,                        _______, _______,
                                   _______, _______,      _______, _______,
                                   _______, _______,      _______, TO(0)
    )
};
