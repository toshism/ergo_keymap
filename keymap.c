#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  RGB_SLD,

};

// template

// left hand
/* KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT, */
/*   KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT, */
/*   KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT, */
/*   KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT, */
/*   KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, */
/*                                                              KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, */
/*                                                              KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, */


// right hand
/* KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
/* KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
/*                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
/* KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
/* KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */

/* KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
/* KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
                       KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       LT(2, KC_ESCAPE),  KC_Q,           KC_W,           KC_E,              KC_R,           KC_T,           KC_MS_RIGHT,
                       LCTL_T(KC_BSPACE), KC_A,           KC_S,           KC_D,              KC_F,           KC_G,
                       KC_LSHIFT,         KC_Z,           KC_X,           KC_C,              KC_V,           KC_B,           KC_MS_LEFT,
                       KC_TRANSPARENT,    KC_TRANSPARENT, KC_TRANSPARENT, LALT_T(KC_DELETE), LALT_T(KC_ENTER),

                                                                              KC_TRANSPARENT,  KC_MS_DOWN,       KC_TRANSPARENT,
		                                                              LT(1,KC_SPACE),  LT(2, KC_ESCAPE), KC_TRANSPARENT,

                       KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
                                        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
                       KC_TRANSPARENT,  KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                                        KC_TAB,         KC_BSPACE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                       KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_PGUP,       LT(1, KC_ENTER),         LT(2, KC_SPACE)
        ),

  [1] = LAYOUT_ergodox(
                       KC_ESCAPE,       KC_F1,         KC_F2,         KC_F3,         KC_F4,           KC_F5,         KC_TRANSPARENT,
                       KC_GRAVE,        KC_EXLM,       KC_AT,         KC_LCBR,       KC_RCBR,         KC_PIPE,       KC_PGUP,
                       KC_DLR,          KC_EQUAL,      KC_MINUS,      KC_LPRN,       KC_RPRN,         KC_KP_ASTERISK,
                       KC_CIRC,         KC_PERC,       KC_UNDS,       KC_LBRACKET,   KC_RBRACKET,     KC_AMPR,       KC_PGDOWN,
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_PLUS,
                                                                               KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                                                                               KC_BSPACE,     KC_LSHIFT,     KC_F13,

                       KC_TRANSPARENT,  KC_F6,         KC_F7,         KC_F8,         KC_F9,           KC_F10,        KC_F11,
                       KC_TRANSPARENT,  KC_MINUS,      KC_7,          KC_8,          KC_9,            KC_ASTR,       KC_F12,
                                        KC_DOT,        KC_4,          KC_5,          KC_6,            KC_KP_MINUS,   KC_F11,
                       KC_TRANSPARENT,  KC_0,          KC_1,          KC_2,          KC_3,            KC_KP_PLUS,    KC_F10,
                                                       KC_KP_0,       KC_0,          KC_DOT,          KC_EQUAL,      KC_TRANSPARENT,

                       KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_F14,KC_TRANSPARENT,KC_ENTER
        ),

  [2] = LAYOUT_ergodox(
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                                                                               KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                                                                               KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,

                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  LALT(LSFT(KC_H)),LALT(LSFT(KC_J)),LALT(LSFT(KC_K)),LALT(LSFT(KC_L)),KC_TRANSPARENT,KC_TRANSPARENT,
                                        KC_LEFT,         KC_DOWN,         KC_UP,           KC_RIGHT,        KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,

                       KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE
         ),

  [3] = LAYOUT_ergodox(
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,
                       KC_TRANSPARENT,  LALT(LSFT(KC_1)),LALT(LSFT(KC_2)),LALT(LSFT(KC_3)),LALT(LSFT(KC_4)), LALT(LSFT(KC_5)),KC_TRANSPARENT,
                       KC_TRANSPARENT,  LALT(KC_1),      LALT(KC_2),      LALT(KC_3),      LALT(KC_4),       LALT(KC_5),
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  LALT(KC_SPACE),   KC_TRANSPARENT,  KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,
                                                                                KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                                                                                KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,

                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,
                                        KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT,  KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,

                       KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT
         ),

  [4] = LAYOUT_ergodox(
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                KC_TRANSPARENT, KC_TRANSPARENT,KC_TRANSPARENT,
                                                                                KC_MS_BTN1,     KC_MS_BTN2,    KC_TRANSPARENT,

                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
         ),

};

bool suspended = false;
const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;

};

LEADER_EXTERNS();
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();
    SEQ_TWO_KEYS(KC_T, KC_SCOLON) {
      SEND_STRING(SS_LCTRL("t")";");
    }
  }
}
