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
                       KC_PGUP,
		       LT(1, KC_ENTER),         LT(2, KC_SPACE)
        ),

  [1] = LAYOUT_ergodox(
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_HASH,        KC_DOLLAR,      KC_LPRN,        KC_RPRN,        KC_GRAVE,
                       KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILDE,       KC_TRANSPARENT,
                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                               KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                                                                               KC_SCOLON,     KC_EQUAL,      KC_TRANSPARENT,

                       KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                        KC_KP_PLUS,     KC_KP_MINUS,    KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_PERCENT,  KC_QUOTE,
                       KC_TRANSPARENT,  KC_AMPERSAND,   KC_EQUAL,       KC_COMMA,       KC_KP_DOT,      KC_KP_SLASH,    KC_MINUS,
                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

                       KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,
		       KC_EQUAL, KC_SCOLON
        ),

  [2] = LAYOUT_ergodox(
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_1,          KC_2,          KC_3,          KC_4,            KC_5,          KC_F6,
                       KC_TRANSPARENT,  KC_F1,         KC_F2,         KC_F3,         KC_F4,           KC_F5,
                       KC_TRANSPARENT,  KC_F7,         KC_F8,         KC_F9,         KC_F10,          KC_F11,        KC_F12,
                       KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                                                                               KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                                                                               KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,

                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_6,            KC_7,            KC_8,            KC_9,            KC_0          ,KC_TRANSPARENT,
                                        KC_LEFT,         KC_DOWN,         KC_UP,           KC_RIGHT,        KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_MS_LEFT,      KC_MS_DOWN,      KC_MS_UP,        KC_MS_RIGHT,     KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,  KC_TRANSPARENT,

                       KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
                       KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE
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
