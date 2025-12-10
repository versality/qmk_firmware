#include QMK_KEYBOARD_H

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  RSFT_T(KC_ENT)
#define M_NEXT   KC_MEDIA_NEXT_TRACK
#define M_PREV   KC_MEDIA_PREV_TRACK
#define M_PLAY   KC_MEDIA_PLAY_PAUSE

#define PERMISSIVE_HOLD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    KC_GRV,     KC_Q,    KC_W,    KC_F,     KC_P,   KC_B,         KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_SLSH,
    KC_ESC,     KC_A,    KC_R,    KC_S,     KC_T,   KC_G,         KC_M,    KC_N,    KC_E,    KC_I,    KC_O,     KC_EXLM,
    KC_LALT,    KC_Z,    KC_X,    KC_C,     KC_D,   KC_V,         KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_QUOT,  KC_BSLS,
                KC_LBRC, KC_RBRC, KC_LSFT,  CTL_BSPC,                      ALT_SPC, SFT_ENT, KC_MINS, KC_EQL,
                         OSL(3),  KC_TAB,   MO(1),                         OSL(3),  KC_DEL,  KC_LGUI
    ),
    [1] = LAYOUT(
    _______,   QK_BOOT, _______, _______, _______, _______,      KC_HOME, KC_PAGE_DOWN, KC_PAGE_UP, KC_END,  KC_CAPS, _______,
    _______,   _______, M_PREV,  M_PLAY,  M_NEXT,  _______,      KC_LEFT, KC_DOWN,      KC_UP,      KC_RGHT, _______, _______,
    _______,   _______, _______, _______, _______, _______,      _______, _______,      _______,    KC_QUES, KC_PIPE, _______,
               _______, _______, _______, _______,                        _______,      _______,    _______, _______,
                        _______, _______, _______,                        _______,      _______,    TO(2)
    ),
    [2] = LAYOUT(
    _______,    KC_Q,    KC_W,    KC_E,     KC_R,   KC_T,         KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,     _______,
    _______,    KC_A,    KC_S,    KC_D,     KC_F,   KC_G,         KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,  _______,
    _______,    KC_Z,    KC_X,    KC_C,     KC_V,   KC_B,         KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_QUOT,  _______,
                KC_LBRC, KC_RBRC, KC_LSFT,  CTL_BSPC,                      ALT_SPC, SFT_ENT,  KC_MINS, KC_EQL,
                         MO(1),   KC_TAB,   OSL(3),                        KC_DEL,  KC_LGUI,  OSL(3)

    ),
    [3] = LAYOUT(
     _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
     _______,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
     _______,  _______, KC_AT,   KC_HASH, KC_DLR,    KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
               KC_F11,  KC_F12,  _______, _______,                _______, _______, _______, _______,
                       _______,  _______, _______,                _______, _______, _______
    )
};
