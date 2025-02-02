// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _SYM 1
#define _FUNC 2
#define _ADJUST 3
enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYM,
  FUNC,
  ADJUST,
};

// QWERTY layer homerow mods
// Left-hand home row mods
#define GUI_A MT(MOD_LGUI,KC_A)
#define ALT_S MT(MOD_LALT,KC_S)
#define CTL_D MT(MOD_LCTL,KC_D)
#define SFT_F MT(MOD_LSFT,KC_F)
#define L1_ENT LT(1,KC_ENT)

// Right-hand home row mods
#define SFT_J MT(MOD_RSFT,KC_J)
#define CTL_K MT(MOD_RCTL,KC_K)
#define ALT_L MT(MOD_RALT,KC_L)
#define GUI_SCLN MT(MOD_RGUI,KC_SCLN)
#define L2_SPC LT(2,KC_SPC)

// SYM layer homerow mods
// Left-hand home row mods
#define GUI_EXLM MT(MOD_LGUI,KC_F24)
#define ALT_AT MT(MOD_LALT,KC_F24)
#define CTL_HASH MT(MOD_LCTL,KC_F24)
#define SFT_DLR MT(MOD_LSFT,KC_F24)

// Right-hand home row mods
#define SFT_AMPR MT(MOD_RSFT,KC_F24)
#define CTL_ASTR MT(MOD_RCTL,KC_F24)
#define ALT_LPRN MT(MOD_RALT,KC_F24)
#define GUI_RPRN MT(MOD_RGUI,KC_F24)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,                               KC_H,    SFT_J,   CTL_K,   ALT_L,   GUI_SCLN,KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, KC_BSPC, L1_ENT,                    L2_SPC,  KC_DEL,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  KC_1,     KC_2,   KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TILD, GUI_EXLM,ALT_AT,  CTL_HASH,SFT_DLR, KC_PERC,                            KC_CIRC, SFT_AMPR,CTL_ASTR,ALT_LPRN,GUI_RPRN, KC_UNDS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_PPLS, KC_LCBR, KC_LBRC, _______,          _______, KC_RBRC, KC_RCBR, KC_EQL,  _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_END,  KC_PGDN, KC_PGUP, KC_HOME,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, KC_PSCR, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_VOLD, KC_VOLU, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_MUTE, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, _SYM, _FUNC, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case SYM:
      if (record->event.pressed) {
        layer_on(_SYM);
        update_tri_layer(_SYM, _FUNC, _ADJUST);
      } else {
        layer_off(_SYM);
        update_tri_layer(_SYM, _FUNC, _ADJUST);
      }
      return false;
      break;
    case FUNC:
      if (record->event.pressed) {
        layer_on(_FUNC);
        update_tri_layer(_SYM, _FUNC, _ADJUST);
      } else {
        layer_off(_FUNC);
        update_tri_layer(_SYM, _FUNC, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;

      // Logic to allow mod-tap on symbols
    case GUI_EXLM:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_EXLM);
          return false;
      }
      break;
    case ALT_AT:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_AT);
          return false;
      }
      break;
    case CTL_HASH:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_HASH);
          return false;
      }
      break;
    case SFT_DLR:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_DLR);
          return false;
      }
      break;
    case SFT_AMPR:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_ASTR);
          return false;
      }
      break;
    case CTL_ASTR:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_ASTR);
          return false;
      }
      break;
      case ALT_LPRN:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_LPRN);
          return false;
      }
      break;
      case GUI_RPRN:
      if (record->event.pressed && record->tap.count) {
          tap_code16(KC_RPRN);
          return false;
      }
      break;
  }
  return true;
}
