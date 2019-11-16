/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2019  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "kaleidoscope/host_keymap/linux.h"

// This file was autogenerated by host_keymap.
// Its content is based on information provided by the XKB X11 system
// collected with the extraordinary libxkbcommon.

// layout: jp
// variant: kana

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP('-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP('.', LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP('/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP('0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP('1', LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP('2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP('3', LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP('4', LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP('5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP('6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP('7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP('8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP('9', LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP('<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L'-', Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(L'.', LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP(L'/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(L'0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(L'1', LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP(L'2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(L'3', LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP(L'4', LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP(L'5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(L'6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(L'7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(L'8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(L'9', LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP(L'<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L'、', LSHIFT(Key_Comma)) /* U+3001, XKB_KEY_kana_comma, IDEOGRAPHIC COMMA */ \
   OP(L'。', LSHIFT(Key_Period)) /* U+3002, XKB_KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */ \
   OP(L'「', LSHIFT(Key_RightBracket)) /* U+300c, XKB_KEY_kana_openingbracket, LEFT CORNER BRACKET */ \
   OP(L'」', LSHIFT(Key_NonUsPound)) /* U+300d, XKB_KEY_kana_closingbracket, RIGHT CORNER BRACKET */ \
   OP(L'゛', Key_LeftBracket) /* U+309b, XKB_KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */ \
   OP(L'゜', Key_RightBracket) /* U+309c, XKB_KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */ \
   OP(L'ァ', LSHIFT(Key_3)) /* U+30a1, XKB_KEY_kana_a, KATAKANA LETTER SMALL A */ \
   OP(L'ア', Key_3) /* U+30a2, XKB_KEY_kana_A, KATAKANA LETTER A */ \
   OP(L'ィ', LSHIFT(Key_E)) /* U+30a3, XKB_KEY_kana_i, KATAKANA LETTER SMALL I */ \
   OP(L'イ', Key_E) /* U+30a4, XKB_KEY_kana_I, KATAKANA LETTER I */ \
   OP(L'ゥ', LSHIFT(Key_4)) /* U+30a5, XKB_KEY_kana_u, KATAKANA LETTER SMALL U */ \
   OP(L'ウ', Key_4) /* U+30a6, XKB_KEY_kana_U, KATAKANA LETTER U */ \
   OP(L'ェ', LSHIFT(Key_5)) /* U+30a7, XKB_KEY_kana_e, KATAKANA LETTER SMALL E */ \
   OP(L'エ', Key_5) /* U+30a8, XKB_KEY_kana_E, KATAKANA LETTER E */ \
   OP(L'ォ', LSHIFT(Key_6)) /* U+30a9, XKB_KEY_kana_o, KATAKANA LETTER SMALL O */ \
   OP(L'オ', Key_6) /* U+30aa, XKB_KEY_kana_O, KATAKANA LETTER O */ \
   OP(L'カ', Key_T) /* U+30ab, XKB_KEY_kana_KA, KATAKANA LETTER KA */ \
   OP(L'キ', Key_G) /* U+30ad, XKB_KEY_kana_KI, KATAKANA LETTER KI */ \
   OP(L'ク', Key_H) /* U+30af, XKB_KEY_kana_KU, KATAKANA LETTER KU */ \
   OP(L'ケ', Key_Quote) /* U+30b1, XKB_KEY_kana_KE, KATAKANA LETTER KE */ \
   OP(L'コ', Key_B) /* U+30b3, XKB_KEY_kana_KO, KATAKANA LETTER KO */ \
   OP(L'サ', Key_X) /* U+30b5, XKB_KEY_kana_SA, KATAKANA LETTER SA */ \
   OP(L'シ', Key_D) /* U+30b7, XKB_KEY_kana_SHI, KATAKANA LETTER SI */ \
   OP(L'ス', Key_R) /* U+30b9, XKB_KEY_kana_SU, KATAKANA LETTER SU */ \
   OP(L'セ', Key_P) /* U+30bb, XKB_KEY_kana_SE, KATAKANA LETTER SE */ \
   OP(L'ソ', Key_C) /* U+30bd, XKB_KEY_kana_SO, KATAKANA LETTER SO */ \
   OP(L'タ', Key_Q) /* U+30bf, XKB_KEY_kana_TA, KATAKANA LETTER TA */ \
   OP(L'チ', Key_A) /* U+30c1, XKB_KEY_kana_CHI, KATAKANA LETTER TI */ \
   OP(L'ッ', LSHIFT(Key_Z)) /* U+30c3, XKB_KEY_kana_tsu, KATAKANA LETTER SMALL TU */ \
   OP(L'ツ', Key_Z) /* U+30c4, XKB_KEY_kana_TSU, KATAKANA LETTER TU */ \
   OP(L'テ', Key_W) /* U+30c6, XKB_KEY_kana_TE, KATAKANA LETTER TE */ \
   OP(L'ト', Key_S) /* U+30c8, XKB_KEY_kana_TO, KATAKANA LETTER TO */ \
   OP(L'ナ', Key_U) /* U+30ca, XKB_KEY_kana_NA, KATAKANA LETTER NA */ \
   OP(L'ニ', Key_I) /* U+30cb, XKB_KEY_kana_NI, KATAKANA LETTER NI */ \
   OP(L'ヌ', Key_1) /* U+30cc, XKB_KEY_kana_NU, KATAKANA LETTER NU */ \
   OP(L'ネ', Key_Comma) /* U+30cd, XKB_KEY_kana_NE, KATAKANA LETTER NE */ \
   OP(L'ノ', Key_K) /* U+30ce, XKB_KEY_kana_NO, KATAKANA LETTER NO */ \
   OP(L'ハ', Key_F) /* U+30cf, XKB_KEY_kana_HA, KATAKANA LETTER HA */ \
   OP(L'ヒ', Key_V) /* U+30d2, XKB_KEY_kana_HI, KATAKANA LETTER HI */ \
   OP(L'フ', Key_2) /* U+30d5, XKB_KEY_kana_FU, KATAKANA LETTER HU */ \
   OP(L'ヘ', Key_Equals) /* U+30d8, XKB_KEY_kana_HE, KATAKANA LETTER HE */ \
   OP(L'ホ', Key_Minus) /* U+30db, XKB_KEY_kana_HO, KATAKANA LETTER HO */ \
   OP(L'マ', Key_J) /* U+30de, XKB_KEY_kana_MA, KATAKANA LETTER MA */ \
   OP(L'ミ', Key_N) /* U+30df, XKB_KEY_kana_MI, KATAKANA LETTER MI */ \
   OP(L'ム', Key_NonUsPound) /* U+30e0, XKB_KEY_kana_MU, KATAKANA LETTER MU */ \
   OP(L'メ', Key_Slash) /* U+30e1, XKB_KEY_kana_ME, KATAKANA LETTER ME */ \
   OP(L'モ', Key_M) /* U+30e2, XKB_KEY_kana_MO, KATAKANA LETTER MO */ \
   OP(L'ャ', LSHIFT(Key_7)) /* U+30e3, XKB_KEY_kana_ya, KATAKANA LETTER SMALL YA */ \
   OP(L'ヤ', Key_7) /* U+30e4, XKB_KEY_kana_YA, KATAKANA LETTER YA */ \
   OP(L'ュ', LSHIFT(Key_8)) /* U+30e5, XKB_KEY_kana_yu, KATAKANA LETTER SMALL YU */ \
   OP(L'ユ', Key_8) /* U+30e6, XKB_KEY_kana_YU, KATAKANA LETTER YU */ \
   OP(L'ョ', LSHIFT(Key_9)) /* U+30e7, XKB_KEY_kana_yo, KATAKANA LETTER SMALL YO */ \
   OP(L'ヨ', Key_9) /* U+30e8, XKB_KEY_kana_YO, KATAKANA LETTER YO */ \
   OP(L'ラ', Key_O) /* U+30e9, XKB_KEY_kana_RA, KATAKANA LETTER RA */ \
   OP(L'リ', Key_L) /* U+30ea, XKB_KEY_kana_RI, KATAKANA LETTER RI */ \
   OP(L'ル', Key_Period) /* U+30eb, XKB_KEY_kana_RU, KATAKANA LETTER RU */ \
   OP(L'レ', Key_Semicolon) /* U+30ec, XKB_KEY_kana_RE, KATAKANA LETTER RE */ \
   OP(L'ワ', Key_0) /* U+30ef, XKB_KEY_kana_WA, KATAKANA LETTER WA */ \
   OP(L'ヲ', LSHIFT(Key_0)) /* U+30f2, XKB_KEY_kana_WO, KATAKANA LETTER WO */ \
   OP(L'ン', Key_Y) /* U+30f3, XKB_KEY_kana_N, KATAKANA LETTER N */ \
   OP(L'・', LSHIFT(Key_Slash)) /* U+30fb, XKB_KEY_kana_conjunctive, KATAKANA MIDDLE DOT */ \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_Alt_R, Key_RightAlt) /* XKB_KEY_Alt_R, Right alt  */ \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Caps_Lock, LSHIFT(Key_CapsLock)) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_Eisu_toggle, Key_CapsLock) /* XKB_KEY_Eisu_toggle, Alphanumeric toggle  */ \
   OP(XKB_KEY_End, Key_End) /* XKB_KEY_End, EOL  */ \
   OP(XKB_KEY_Escape, Key_Escape) /* XKB_KEY_Escape */ \
   OP(XKB_KEY_Execute, LALT(Key_PrintScreen)) /* XKB_KEY_Execute, Execute, run, do  */ \
   OP(XKB_KEY_F1, Key_F1) /* XKB_KEY_F1 */ \
   OP(XKB_KEY_F10, Key_F10) /* XKB_KEY_F10 */ \
   OP(XKB_KEY_F11, Key_F11) /* XKB_KEY_F11 */ \
   OP(XKB_KEY_F12, Key_F12) /* XKB_KEY_F12 */ \
   OP(XKB_KEY_F2, Key_F2) /* XKB_KEY_F2 */ \
   OP(XKB_KEY_F3, Key_F3) /* XKB_KEY_F3 */ \
   OP(XKB_KEY_F4, Key_F4) /* XKB_KEY_F4 */ \
   OP(XKB_KEY_F5, Key_F5) /* XKB_KEY_F5 */ \
   OP(XKB_KEY_F6, Key_F6) /* XKB_KEY_F6 */ \
   OP(XKB_KEY_F7, Key_F7) /* XKB_KEY_F7 */ \
   OP(XKB_KEY_F8, Key_F8) /* XKB_KEY_F8 */ \
   OP(XKB_KEY_F9, Key_F9) /* XKB_KEY_F9 */ \
   OP(XKB_KEY_Home, Key_Home) /* XKB_KEY_Home */ \
   OP(XKB_KEY_ISO_Left_Tab, LSHIFT(Key_Tab)) /* XKB_KEY_ISO_Left_Tab */ \
   OP(XKB_KEY_Insert, Key_Insert) /* XKB_KEY_Insert, Insert, insert here  */ \
   OP(XKB_KEY_KP_0, LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(XKB_KEY_KP_1, LSHIFT(Key_Keypad1)) /* XKB_KEY_KP_1 */ \
   OP(XKB_KEY_KP_2, LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(XKB_KEY_KP_3, LSHIFT(Key_Keypad3)) /* XKB_KEY_KP_3 */ \
   OP(XKB_KEY_KP_4, LSHIFT(Key_Keypad4)) /* XKB_KEY_KP_4 */ \
   OP(XKB_KEY_KP_5, LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(XKB_KEY_KP_6, LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(XKB_KEY_KP_7, LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(XKB_KEY_KP_8, LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(XKB_KEY_KP_9, LSHIFT(Key_Keypad9)) /* XKB_KEY_KP_9 */ \
   OP(XKB_KEY_KP_Add, Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(XKB_KEY_KP_Begin, Key_Keypad5) /* XKB_KEY_KP_Begin */ \
   OP(XKB_KEY_KP_Decimal, LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Decimal */ \
   OP(XKB_KEY_KP_Delete, Key_KeypadDot) /* XKB_KEY_KP_Delete */ \
   OP(XKB_KEY_KP_Divide, Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(XKB_KEY_KP_Down, Key_Keypad2) /* XKB_KEY_KP_Down */ \
   OP(XKB_KEY_KP_End, Key_Keypad1) /* XKB_KEY_KP_End */ \
   OP(XKB_KEY_KP_Enter, Key_KeypadEnter) /* XKB_KEY_KP_Enter, Enter  */ \
   OP(XKB_KEY_KP_Home, Key_Keypad7) /* XKB_KEY_KP_Home */ \
   OP(XKB_KEY_KP_Insert, Key_Keypad0) /* XKB_KEY_KP_Insert */ \
   OP(XKB_KEY_KP_Left, Key_Keypad4) /* XKB_KEY_KP_Left */ \
   OP(XKB_KEY_KP_Multiply, Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(XKB_KEY_KP_Next, Key_Keypad3) /* XKB_KEY_KP_Next */ \
   OP(XKB_KEY_KP_Prior, Key_Keypad9) /* XKB_KEY_KP_Prior */ \
   OP(XKB_KEY_KP_Right, Key_Keypad6) /* XKB_KEY_KP_Right */ \
   OP(XKB_KEY_KP_Subtract, Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(XKB_KEY_KP_Up, Key_Keypad8) /* XKB_KEY_KP_Up */ \
   OP(XKB_KEY_Kanji, LALT(Key_Backtick)) /* XKB_KEY_Kanji, Kanji, Kanji convert  */ \
   OP(XKB_KEY_Left, Key_LeftArrow) /* XKB_KEY_Left, Move left, left arrow  */ \
   OP(XKB_KEY_Menu, Key_PcApplication) /* XKB_KEY_Menu */ \
   OP(XKB_KEY_Meta_L, LSHIFT(Key_LeftAlt)) /* XKB_KEY_Meta_L, Left meta  */ \
   OP(XKB_KEY_Meta_R, LSHIFT(Key_RightAlt)) /* XKB_KEY_Meta_R, Right meta  */ \
   OP(XKB_KEY_Next, Key_PageDown) /* XKB_KEY_Next, Next  */ \
   OP(XKB_KEY_Num_Lock, Key_KeypadNumLock) /* XKB_KEY_Num_Lock */ \
   OP(XKB_KEY_Pause, Key_Pause) /* XKB_KEY_Pause, Pause, hold  */ \
   OP(XKB_KEY_Print, Key_PrintScreen) /* XKB_KEY_Print */ \
   OP(XKB_KEY_Prior, Key_PageUp) /* XKB_KEY_Prior, Prior, previous  */ \
   OP(XKB_KEY_Return, Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(XKB_KEY_Right, Key_RightArrow) /* XKB_KEY_Right, Move right, right arrow  */ \
   OP(XKB_KEY_Scroll_Lock, Key_ScrollLock) /* XKB_KEY_Scroll_Lock */ \
   OP(XKB_KEY_Shift_L, Key_LeftShift) /* XKB_KEY_Shift_L, Left shift  */ \
   OP(XKB_KEY_Shift_R, Key_RightShift) /* XKB_KEY_Shift_R, Right shift  */ \
   OP(XKB_KEY_Super_L, Key_LeftGui) /* XKB_KEY_Super_L, Left super  */ \
   OP(XKB_KEY_Super_R, Key_RightGui) /* XKB_KEY_Super_R, Right super  */ \
   OP(XKB_KEY_Tab, Key_Tab) /* XKB_KEY_Tab */ \
   OP(XKB_KEY_Up, Key_UpArrow) /* XKB_KEY_Up, Move up, up arrow  */ \
   OP(XKB_KEY_XF86ClearGrab, LCTRL(LALT(Key_KeypadMultiply))) /* XKB_KEY_XF86ClearGrab, kill application with grab  */ \
   OP(XKB_KEY_XF86Next_VMode, LCTRL(LALT(Key_KeypadAdd))) /* XKB_KEY_XF86Next_VMode, next video mode available   */ \
   OP(XKB_KEY_XF86Prev_VMode, LCTRL(LALT(Key_KeypadSubtract))) /* XKB_KEY_XF86Prev_VMode, prev. video mode available  */ \
   OP(XKB_KEY_XF86Switch_VT_1, LCTRL(LALT(Key_F1))) /* XKB_KEY_XF86Switch_VT_1 */ \
   OP(XKB_KEY_XF86Switch_VT_10, LCTRL(LALT(Key_F10))) /* XKB_KEY_XF86Switch_VT_10 */ \
   OP(XKB_KEY_XF86Switch_VT_11, LCTRL(LALT(Key_F11))) /* XKB_KEY_XF86Switch_VT_11 */ \
   OP(XKB_KEY_XF86Switch_VT_12, LCTRL(LALT(Key_F12))) /* XKB_KEY_XF86Switch_VT_12 */ \
   OP(XKB_KEY_XF86Switch_VT_2, LCTRL(LALT(Key_F2))) /* XKB_KEY_XF86Switch_VT_2 */ \
   OP(XKB_KEY_XF86Switch_VT_3, LCTRL(LALT(Key_F3))) /* XKB_KEY_XF86Switch_VT_3 */ \
   OP(XKB_KEY_XF86Switch_VT_4, LCTRL(LALT(Key_F4))) /* XKB_KEY_XF86Switch_VT_4 */ \
   OP(XKB_KEY_XF86Switch_VT_5, LCTRL(LALT(Key_F5))) /* XKB_KEY_XF86Switch_VT_5 */ \
   OP(XKB_KEY_XF86Switch_VT_6, LCTRL(LALT(Key_F6))) /* XKB_KEY_XF86Switch_VT_6 */ \
   OP(XKB_KEY_XF86Switch_VT_7, LCTRL(LALT(Key_F7))) /* XKB_KEY_XF86Switch_VT_7 */ \
   OP(XKB_KEY_XF86Switch_VT_8, LCTRL(LALT(Key_F8))) /* XKB_KEY_XF86Switch_VT_8 */ \
   OP(XKB_KEY_XF86Switch_VT_9, LCTRL(LALT(Key_F9))) /* XKB_KEY_XF86Switch_VT_9 */ \
   OP(XKB_KEY_XF86Ungrab, LCTRL(LALT(Key_KeypadDivide))) /* XKB_KEY_XF86Ungrab, force ungrab                */ \
   OP(XKB_KEY_Zenkaku_Hankaku, Key_Backtick) /* XKB_KEY_Zenkaku_Hankaku, Zenkaku/Hankaku toggle  */ \
   OP(XKB_KEY_greater, LSHIFT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_kana_A, Key_3) \
   OP(XKB_KEY_kana_CHI, Key_A) /* XKB_KEY_kana_TI, deprecated  */ \
   OP(XKB_KEY_kana_E, Key_5) \
   OP(XKB_KEY_kana_FU, Key_2) /* XKB_KEY_kana_HU, deprecated  */ \
   OP(XKB_KEY_kana_HA, Key_F) \
   OP(XKB_KEY_kana_HE, Key_Equals) \
   OP(XKB_KEY_kana_HI, Key_V) \
   OP(XKB_KEY_kana_HO, Key_Minus) \
   OP(XKB_KEY_kana_I, Key_E) \
   OP(XKB_KEY_kana_KA, Key_T) \
   OP(XKB_KEY_kana_KE, Key_Quote) \
   OP(XKB_KEY_kana_KI, Key_G) \
   OP(XKB_KEY_kana_KO, Key_B) \
   OP(XKB_KEY_kana_KU, Key_H) \
   OP(XKB_KEY_kana_MA, Key_J) \
   OP(XKB_KEY_kana_ME, Key_Slash) \
   OP(XKB_KEY_kana_MI, Key_N) \
   OP(XKB_KEY_kana_MO, Key_M) \
   OP(XKB_KEY_kana_MU, Key_NonUsPound) \
   OP(XKB_KEY_kana_N, Key_Y) \
   OP(XKB_KEY_kana_NA, Key_U) \
   OP(XKB_KEY_kana_NE, Key_Comma) \
   OP(XKB_KEY_kana_NI, Key_I) \
   OP(XKB_KEY_kana_NO, Key_K) \
   OP(XKB_KEY_kana_NU, Key_1) \
   OP(XKB_KEY_kana_O, Key_6) \
   OP(XKB_KEY_kana_RA, Key_O) \
   OP(XKB_KEY_kana_RE, Key_Semicolon) \
   OP(XKB_KEY_kana_RI, Key_L) \
   OP(XKB_KEY_kana_RU, Key_Period) \
   OP(XKB_KEY_kana_SA, Key_X) \
   OP(XKB_KEY_kana_SE, Key_P) \
   OP(XKB_KEY_kana_SHI, Key_D) \
   OP(XKB_KEY_kana_SO, Key_C) \
   OP(XKB_KEY_kana_SU, Key_R) \
   OP(XKB_KEY_kana_TA, Key_Q) \
   OP(XKB_KEY_kana_TE, Key_W) \
   OP(XKB_KEY_kana_TO, Key_S) \
   OP(XKB_KEY_kana_TSU, Key_Z) /* XKB_KEY_kana_TU, deprecated  */ \
   OP(XKB_KEY_kana_U, Key_4) \
   OP(XKB_KEY_kana_WA, Key_0) \
   OP(XKB_KEY_kana_WO, LSHIFT(Key_0)) \
   OP(XKB_KEY_kana_YA, Key_7) \
   OP(XKB_KEY_kana_YO, Key_9) \
   OP(XKB_KEY_kana_YU, Key_8) \
   OP(XKB_KEY_kana_a, LSHIFT(Key_3)) \
   OP(XKB_KEY_kana_closingbracket, LSHIFT(Key_NonUsPound)) \
   OP(XKB_KEY_kana_comma, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_kana_conjunctive, LSHIFT(Key_Slash)) /* XKB_KEY_kana_middledot, deprecated  */ \
   OP(XKB_KEY_kana_e, LSHIFT(Key_5)) \
   OP(XKB_KEY_kana_fullstop, LSHIFT(Key_Period)) \
   OP(XKB_KEY_kana_i, LSHIFT(Key_E)) \
   OP(XKB_KEY_kana_o, LSHIFT(Key_6)) \
   OP(XKB_KEY_kana_openingbracket, LSHIFT(Key_RightBracket)) \
   OP(XKB_KEY_kana_tsu, LSHIFT(Key_Z)) /* XKB_KEY_kana_tu, deprecated  */ \
   OP(XKB_KEY_kana_u, LSHIFT(Key_4)) \
   OP(XKB_KEY_kana_ya, LSHIFT(Key_7)) \
   OP(XKB_KEY_kana_yo, LSHIFT(Key_9)) \
   OP(XKB_KEY_kana_yu, LSHIFT(Key_8)) \
   OP(XKB_KEY_less, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_semivoicedsound, Key_RightBracket) \
   OP(XKB_KEY_space, Key_Spacebar) \
   OP(XKB_KEY_voicedsound, Key_LeftBracket) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace jp {
namespace kana {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace kana
} // namespace jp
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE

