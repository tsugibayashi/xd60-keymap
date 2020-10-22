#include QMK_KEYBOARD_H

#define _BL 0
#define _AL 1
#define _FL 2
#define _SL 3
#define _FSL 4
// Row 1
#define JP_GRV  S(KC_LBRC) // ` (USキーボードの Shift+[)
#define JP_MINS KC_MINS    // - (USキーボードの -)
#define JP_EQL  S(KC_MINS) // = (USキーボードの Shift+-)
// Row 2
#define JP_LBRC KC_RBRC    // [ (USキーボードの ])
#define JP_RBRC KC_BSLS    // ] (USキーボードの \)
#define JP_BSLS KC_INT3    // \ (KC_INT3. USキーボードには無いキー)
// Row 3
#define JP_SCLN KC_SCLN    // ; (USキーボードの ;)
#define JP_QUOT S(KC_7)    // ' (USキーボードの Shift+7)
// Row 4
#define JP_COMM KC_COMM    // , (USキーボードの ,)
#define JP_DOT  KC_DOT     // . (USキーボードの .)
#define JP_SLSH KC_SLSH    // / (USキーボードの /)
// Row 1 (FN)
#define JP_ZKHK KC_GRV     // 半角/全角 (USキーボードの `)
// Row 1 (Shift)
#define JP_TILD S(KC_EQL)  // ~ (USキーボードの Shift+0)
#define JP_EXLM S(KC_1)    // ! (USキーボードの Shift+1)
#define JP_AT   KC_LBRC    // @ (USキーボードの [)
#define JP_HASH S(KC_3)    // # (USキーボードの Shift+3)
#define JP_DLR  S(KC_4)    // $ (USキーボードの Shift+4)
#define JP_PERC S(KC_5)    // % (USキーボードの Shift+5)
#define JP_CIRC KC_EQL     // ^ (USキーボードの =)
#define JP_AMPR S(KC_6)    // & (USキーボードの Shift+6)
#define JP_ASTR S(KC_QUOT) // * (USキーボードの Shift+')
#define JP_LPRN S(KC_8)    // ( (USキーボードの Shift+8)
#define JP_RPRN S(KC_9)    // ) (USキーボードの Shift+9)
#define JP_UNDS S(KC_INT1) // _ (KC_INT1. USキーボードには無いキー)
#define JP_PLUS S(KC_SCLN) // + (USキーボードの Shift+;)
// Row 2 (Shift)
#define JP_LCBR S(KC_RBRC) // { (USキーボードの Shift+])
#define JP_RCBR S(KC_BSLS) // } (USキーボードの Shift+\)
#define JP_PIPE S(KC_INT3) // | (S(KC_INT3). USキーボードには無いキー)
// Row 3 (Shift)
#define JP_COLN KC_QUOT    // : (USキーボードの ')
#define JP_DQUO S(KC_2)    // " (USキーボードの Shift+2)
// Row 4 (Shift)
#define JP_LABK S(KC_COMM) // < (USキーボードの Shift+,)
#define JP_RABK S(KC_DOT)  // > (USキーボードの Shift+.)
#define JP_QUES S(KC_SLSH) // ? (USキーボードの Shift+/)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Keymap _BL: Base Layer
  [_BL] = LAYOUT_all(
       KC_ESC,    KC_1,   KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,      KC_9,    KC_0, JP_MINS,   JP_EQL, KC_BSPC,   KC_NO,   \
       KC_TAB,    KC_Q,   KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,      KC_O,    KC_P, JP_LBRC,  JP_RBRC,          JP_BSLS,   \
      KC_LCTL,    KC_A,   KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,      KC_L, JP_SCLN, JP_QUOT,    KC_NO,           KC_ENT,   \
      MO(_SL),   KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   JP_COMM,  JP_DOT, JP_SLSH,  MO(_SL), KC_HOME, KC_PGUP,   \
      KC_LCTL, MO(_FL), LM(_AL,MOD_LALT),                          KC_SPC,          LM(_AL,MOD_RALT), MO(_FL),  KC_RCTL,  KC_END, KC_PGDN
  ),

  // Keymap _AL: Alt Layer
  [_AL] = LAYOUT_all(
      JP_ZKHK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,    \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,    \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    \
      _______, _______, _______,                         _______,                               _______, _______, _______, _______, _______
  ),

  // Keymap _FL: Function Layer
  [_FL] = LAYOUT_all(
      JP_ZKHK,   KC_F2,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,  KC_F10,     KC_F11,  KC_F12,  KC_DEL,     KC_NO,    \
    A(KC_TAB), _______, C(KC_S), _______, _______, _______, C(KC_C),    _______, _______, _______, C(KC_V), A(KC_PSCR), _______,            _______,    \
        KC_NO, RGB_TOG, RGB_HUD, RGB_HUI, _______, _______, KC_LEFT,    KC_DOWN,   KC_UP, KC_RGHT, _______,    _______,   KC_NO,          A(KC_ENT),    \
      KC_LSFT,   KC_NO, _______,  KC_DEL,  BL_DEC, BL_TOGG,  BL_INC, LWIN(KC_L), KC_MUTE, KC_VOLD, KC_VOLU,    _______, KC_RSFT,   KC_UP,   _______,    \
      _______, _______, _______,                         KC_LGUI,                                  _______,    _______, KC_LEFT, KC_DOWN,   KC_RGHT
  ),

  // Keymap _SL: Shift Layer
  [_SL] = LAYOUT_all(
        JP_TILD,   JP_EXLM,   JP_AT, JP_HASH,  JP_DLR, JP_PERC, JP_CIRC, JP_AMPR, JP_ASTR, JP_LPRN, JP_RPRN, JP_UNDS, JP_PLUS, KC_BSPC,      KC_NO,   \
      S(KC_TAB),   S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), JP_LCBR, JP_RCBR,             JP_PIPE,   \
        _______,   S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K), S(KC_L), JP_COLN, JP_DQUO,   KC_NO,              KC_ENT,   \
        _______,     KC_NO, S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M), JP_LABK, JP_RABK, JP_QUES, _______, _______, S(KC_PGUP),   \
        _______,  MO(_FSL), _______,                         KC_LGUI,                               _______, _______, _______, _______, S(KC_PGDN)
  ),

  // Keymap _FSL: Function + Shift Layer
  [_FSL] = LAYOUT_all(
      _______, _______, _______, _______, _______, _______,    _______,    _______,  _______,    _______, _______, _______,    _______,    _______,      KC_NO,    \
      _______, _______, _______, _______, _______, _______,    _______,    _______,  _______,    _______, _______, _______,    _______,                _______,    \
        KC_NO, _______, _______, _______, _______, _______, S(KC_LEFT), S(KC_DOWN), S(KC_UP), S(KC_RGHT), _______, _______,      KC_NO,                _______,    \
      _______, _______, _______, _______, _______, _______,    _______,    _______,  _______,    _______, _______, _______,    _______,   S(KC_UP),    _______,    \
      _______, _______, _______,                         _______,                                         _______, _______, S(KC_LEFT), S(KC_DOWN), S(KC_RGHT)
  ),
};

// Loop
void matrix_scan_user(void) {
  // Empty
};

