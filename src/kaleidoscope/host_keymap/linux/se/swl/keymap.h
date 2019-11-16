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

// layout: se
// variant: swl

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('\'', Key_NonUsPound) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_Minus) /* U+002b, XKB_KEY_plus, PLUS SIGN */ \
   OP(',', Key_Comma) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_Slash) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP('.', Key_Period) /* U+002e, XKB_KEY_period, FULL STOP */ \
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
   OP(':', LSHIFT(Key_Period)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(';', LSHIFT(Key_Comma)) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP('<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('?', LSHIFT(Key_Minus)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP('\\', RALT(Key_Minus)) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP('_', LSHIFT(Key_Slash)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP('|', RALT(Key_NonUsBackslashAndPipe)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'\'', Key_NonUsPound) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_Minus) /* U+002b, XKB_KEY_plus, PLUS SIGN */ \
   OP(L',', Key_Comma) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_Slash) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP(L'.', Key_Period) /* U+002e, XKB_KEY_period, FULL STOP */ \
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
   OP(L':', LSHIFT(Key_Period)) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(L';', LSHIFT(Key_Comma)) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP(L'<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'?', LSHIFT(Key_Minus)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP(L'\\', RALT(Key_Minus)) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(L'_', LSHIFT(Key_Slash)) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP(L'|', RALT(Key_NonUsBackslashAndPipe)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L' ', RALT(LSHIFT(Key_Spacebar))) /* U+00a0, XKB_KEY_nobreakspace, NO-BREAK SPACE */ \
   OP(L'¦', RALT(LSHIFT(Key_NonUsBackslashAndPipe))) /* U+00a6, XKB_KEY_brokenbar, BROKEN BAR */ \
   OP(L'§', Key_Backtick) /* U+00a7, XKB_KEY_section, SECTION SIGN */ \
   OP(L'¬', RALT(LSHIFT(Key_Equals))) /* U+00ac, XKB_KEY_notsign, NOT SIGN */ \
   OP(L'±', RALT(Key_Equals)) /* U+00b1, XKB_KEY_plusminus, PLUS-MINUS SIGN */ \
   OP(L'´', RALT(Key_NonUsPound)) /* U+00b4, XKB_KEY_acute, ACUTE ACCENT */ \
   OP(L'¶', RALT(Key_Backtick)) /* U+00b6, XKB_KEY_paragraph, PILCROW SIGN */ \
   OP(L'·', RALT(Key_Period)) /* U+00b7, XKB_KEY_periodcentered, MIDDLE DOT */ \
   OP(L'½', LSHIFT(Key_Backtick)) /* U+00bd, XKB_KEY_onehalf, VULGAR FRACTION ONE HALF */ \
   OP(L'¾', RALT(LSHIFT(Key_Backtick))) /* U+00be, XKB_KEY_threequarters, VULGAR FRACTION THREE QUARTERS */ \
   OP(L'¿', RALT(LSHIFT(Key_Minus))) /* U+00bf, XKB_KEY_questiondown, INVERTED QUESTION MARK */ \
   OP(L'×', RALT(LSHIFT(Key_NonUsPound))) /* U+00d7, XKB_KEY_multiply, MULTIPLICATION SIGN */ \
   OP(L'􌤀', RALT(Key_Q)) \
   OP(L'􌤂', RALT(Key_LeftBracket)) \
   OP(L'􌤃', RALT(Key_W)) \
   OP(L'􌤄', RALT(Key_Quote)) \
   OP(L'􌤅', RALT(Key_Semicolon)) \
   OP(L'􌤆', RALT(Key_O)) \
   OP(L'􌤇', RALT(Key_M)) \
   OP(L'􌤈', RALT(Key_B)) \
   OP(L'􌤉', LSHIFT(Key_0)) \
   OP(L'􌤊', LSHIFT(Key_9)) \
   OP(L'􌤋', LSHIFT(Key_8)) \
   OP(L'􌤌', RALT(Key_E)) \
   OP(L'􌤎', Key_O) \
   OP(L'􌤑', RALT(Key_T)) \
   OP(L'􌤒', RALT(Key_Y)) \
   OP(L'􌤓', RALT(Key_J)) \
   OP(L'􌤔', RALT(Key_K)) \
   OP(L'􌤕', RALT(Key_H)) \
   OP(L'􌤖', RALT(Key_D)) \
   OP(L'􌤗', RALT(Key_F)) \
   OP(L'􌤘', RALT(Key_G)) \
   OP(L'􌤙', RALT(Key_L)) \
   OP(L'􌤚', RALT(Key_S)) \
   OP(L'􌤛', RALT(Key_R)) \
   OP(L'􌤜', RALT(Key_P)) \
   OP(L'􌤞', RALT(Key_I)) \
   OP(L'􌤟', Key_P) \
   OP(L'􌤠', RALT(Key_X)) \
   OP(L'􌤡', RALT(Key_C)) \
   OP(L'􌤢', LSHIFT(Key_J)) \
   OP(L'􌤣', Key_V) \
   OP(L'􌤤', LSHIFT(Key_A)) \
   OP(L'􌤥', Key_Z) \
   OP(L'􌤦', LSHIFT(Key_G)) \
   OP(L'􌤧', LSHIFT(Key_B)) \
   OP(L'􌤨', Key_L) \
   OP(L'􌤩', LSHIFT(Key_D)) \
   OP(L'􌤪', LSHIFT(Key_Q)) \
   OP(L'􌤫', LSHIFT(Key_Semicolon)) \
   OP(L'􌤬', LSHIFT(Key_R)) \
   OP(L'􌤭', LSHIFT(Key_V)) \
   OP(L'􌤮', Key_Quote) \
   OP(L'􌤯', LSHIFT(Key_LeftBracket)) \
   OP(L'􌤰', LSHIFT(Key_W)) \
   OP(L'􌤱', LSHIFT(Key_I)) \
   OP(L'􌤲', LSHIFT(Key_H)) \
   OP(L'􌤳', LSHIFT(Key_X)) \
   OP(L'􌤴', Key_3) \
   OP(L'􌤵', Key_5) \
   OP(L'􌤶', LSHIFT(Key_1)) \
   OP(L'􌤷', LSHIFT(Key_3)) \
   OP(L'􌤸', LSHIFT(Key_5)) \
   OP(L'􌤹', Key_T) \
   OP(L'􌤺', Key_N) \
   OP(L'􌤻', Key_B) \
   OP(L'􌤼', RALT(Key_A)) \
   OP(L'􌤽', Key_LeftBracket) \
   OP(L'􌤾', RALT(Key_N)) \
   OP(L'􌤿', LSHIFT(Key_M)) \
   OP(L'􌥀', RALT(Key_Z)) \
   OP(L'􌥂', Key_J) \
   OP(L'􌥃', LSHIFT(Key_Y)) \
   OP(L'􌥄', LSHIFT(Key_Quote)) \
   OP(L'􌥅', LSHIFT(Key_S)) \
   OP(L'􌥆', LSHIFT(Key_O)) \
   OP(L'􌥇', LSHIFT(Key_E)) \
   OP(L'􌥈', LSHIFT(Key_L)) \
   OP(L'􌥉', Key_C) \
   OP(L'􌥊', LSHIFT(Key_T)) \
   OP(L'􌥋', LSHIFT(Key_C)) \
   OP(L'􌥌', LSHIFT(Key_N)) \
   OP(L'􌥎', LSHIFT(Key_K)) \
   OP(L'􌥑', Key_I) \
   OP(L'􌥒', Key_Y) \
   OP(L'􌥓', Key_1) \
   OP(L'􌥔', Key_2) \
   OP(L'􌥕', Key_4) \
   OP(L'􌥖', Key_6) \
   OP(L'􌥗', LSHIFT(Key_2)) \
   OP(L'􌥘', LSHIFT(Key_4)) \
   OP(L'􌥙', LSHIFT(Key_6)) \
   OP(L'􌥚', Key_G) \
   OP(L'􌥛', Key_M) \
   OP(L'􌥜', RALT(Key_V)) \
   OP(L'􌥞', RALT(Key_U)) \
   OP(L'􌥟', LSHIFT(Key_Z)) \
   OP(L'􌥠', Key_7) \
   OP(L'􌥡', LSHIFT(Key_P)) \
   OP(L'􌥢', RALT(LSHIFT(Key_1))) \
   OP(L'􌥣', RALT(LSHIFT(Key_2))) \
   OP(L'􌥤', RALT(LSHIFT(Key_8))) \
   OP(L'􌥥', RALT(LSHIFT(Key_9))) \
   OP(L'􌥦', RALT(LSHIFT(Key_5))) \
   OP(L'􌥧', RALT(LSHIFT(Key_6))) \
   OP(L'􌥨', RALT(LSHIFT(Key_0))) \
   OP(L'􌥩', LSHIFT(Key_7)) \
   OP(L'􌥪', RALT(LSHIFT(Key_7))) \
   OP(L'􌥫', Key_X) \
   OP(L'􌥬', Key_Q) \
   OP(L'􌥭', RALT(LSHIFT(Key_E))) \
   OP(L'􌥮', RALT(LSHIFT(Key_V))) \
   OP(L'􌥯', Key_H) \
   OP(L'􌥰', Key_Semicolon) \
   OP(L'􌥱', Key_W) \
   OP(L'􌥲', Key_S) \
   OP(L'􌥳', Key_A) \
   OP(L'􌥴', Key_0) \
   OP(L'􌥵', LSHIFT(Key_F)) \
   OP(L'􌥶', Key_F) \
   OP(L'􌥷', LSHIFT(Key_U)) \
   OP(L'􌥸', Key_U) \
   OP(L'􌥹', Key_D) \
   OP(L'􌥺', RALT(LSHIFT(Key_K))) \
   OP(L'􌥻', Key_9) \
   OP(L'􌥼', Key_8) \
   OP(L'􌥽', RALT(Key_2)) \
   OP(L'􌥾', RALT(Key_3)) \
   OP(L'􌥿', RALT(Key_5)) \
   OP(L'􌦀', RALT(Key_6)) \
   OP(L'􌦂', RALT(Key_7)) \
   OP(L'􌦃', RALT(LSHIFT(Key_3))) \
   OP(L'􌦄', RALT(LSHIFT(Key_4))) \
   OP(L'􌦅', Key_K) \
   OP(L'􌦆', Key_R) \
   OP(L'􌦇', Key_E) \
   OP(L'􌦈', RALT(Key_1)) \
   OP(L'􌦉', RALT(Key_8)) \
   OP(L'􌦊', RALT(Key_4)) \
   OP(L'􌦋', RALT(Key_9)) \
   OP(L'􌦌', RALT(Key_0)) \
   OP(L'􌦎', RALT(LSHIFT(Key_X))) \
   OP(L'􌦑', RALT(LSHIFT(Key_Semicolon))) \
   OP(L'􌦒', RALT(LSHIFT(Key_M))) \
   OP(L'􌦓', RALT(LSHIFT(Key_R))) \
   OP(L'􌦔', RALT(LSHIFT(Key_F))) \
   OP(L'􌦕', RALT(LSHIFT(Key_T))) \
   OP(L'􌦖', RALT(LSHIFT(Key_G))) \
   OP(L'􌦗', RALT(LSHIFT(Key_I))) \
   OP(L'􌦘', RALT(LSHIFT(Key_H))) \
   OP(L'􌦙', RALT(LSHIFT(Key_D))) \
   OP(L'􌦚', RALT(LSHIFT(Key_Z))) \
   OP(L'􌦛', RALT(LSHIFT(Key_Y))) \
   OP(L'􌦜', RALT(LSHIFT(Key_S))) \
   OP(L'􌦞', RALT(LSHIFT(Key_W))) \
   OP(L'􌦟', RALT(LSHIFT(Key_C))) \
   OP(L'􌦠', RALT(LSHIFT(Key_O))) \
   OP(L'􌦡', RALT(LSHIFT(Key_Q))) \
   OP(L'􌦢', RALT(LSHIFT(Key_J))) \
   OP(L'􌦣', RALT(LSHIFT(Key_U))) \
   OP(L'􌦤', RALT(LSHIFT(Key_A))) \
   OP(L'􌦥', RALT(LSHIFT(Key_L))) \
   OP(L'􌦦', RALT(LSHIFT(Key_B))) \
   OP(L'􌦧', RALT(LSHIFT(Key_N))) \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_End, Key_End) /* XKB_KEY_End, EOL  */ \
   OP(XKB_KEY_Escape, Key_Escape) /* XKB_KEY_Escape */ \
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
   OP(XKB_KEY_ISO_Level3_Shift, Key_RightAlt) /* XKB_KEY_ISO_Level3_Shift */ \
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
   OP(XKB_KEY_KP_Separator, LSHIFT(Key_KeypadDot)) /* XKB_KEY_KP_Separator, Separator, often comma  */ \
   OP(XKB_KEY_KP_Subtract, Key_KeypadSubtract) /* XKB_KEY_KP_Subtract */ \
   OP(XKB_KEY_KP_Up, Key_Keypad8) /* XKB_KEY_KP_Up */ \
   OP(XKB_KEY_Left, Key_LeftArrow) /* XKB_KEY_Left, Move left, left arrow  */ \
   OP(XKB_KEY_Menu, Key_PcApplication) /* XKB_KEY_Menu */ \
   OP(XKB_KEY_Meta_L, LSHIFT(Key_LeftAlt)) /* XKB_KEY_Meta_L, Left meta  */ \
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
   OP(XKB_KEY_Sys_Req, LALT(Key_PrintScreen)) /* XKB_KEY_Sys_Req */ \
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
   OP(XKB_KEY_acute, RALT(Key_NonUsPound)) \
   OP(XKB_KEY_apostrophe, Key_NonUsPound) /* XKB_KEY_quoteright, deprecated  */ \
   OP(XKB_KEY_asterisk, LSHIFT(Key_NonUsPound)) \
   OP(XKB_KEY_backslash, RALT(Key_Minus)) \
   OP(XKB_KEY_bar, RALT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_brokenbar, RALT(LSHIFT(Key_NonUsBackslashAndPipe))) \
   OP(XKB_KEY_colon, LSHIFT(Key_Period)) \
   OP(XKB_KEY_comma, Key_Comma) \
   OP(XKB_KEY_dead_abovedot, RALT(LSHIFT(Key_Period))) /* XKB_KEY_dead_abovedot */ \
   OP(XKB_KEY_dead_acute, Key_Equals) /* XKB_KEY_dead_acute */ \
   OP(XKB_KEY_dead_belowdot, RALT(Key_Slash)) /* XKB_KEY_dead_belowdot */ \
   OP(XKB_KEY_dead_caron, RALT(LSHIFT(Key_RightBracket))) /* XKB_KEY_dead_caron */ \
   OP(XKB_KEY_dead_cedilla, RALT(Key_Comma)) /* XKB_KEY_dead_cedilla */ \
   OP(XKB_KEY_dead_circumflex, LSHIFT(Key_RightBracket)) /* XKB_KEY_dead_circumflex */ \
   OP(XKB_KEY_dead_diaeresis, Key_RightBracket) /* XKB_KEY_dead_diaeresis */ \
   OP(XKB_KEY_dead_grave, LSHIFT(Key_Equals)) /* XKB_KEY_dead_grave */ \
   OP(XKB_KEY_dead_ogonek, RALT(LSHIFT(Key_Comma))) /* XKB_KEY_dead_ogonek */ \
   OP(XKB_KEY_dead_tilde, RALT(Key_RightBracket)) /* XKB_KEY_dead_tilde */ \
   OP(XKB_KEY_greater, LSHIFT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_less, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_minus, Key_Slash) \
   OP(XKB_KEY_multiply, RALT(LSHIFT(Key_NonUsPound))) \
   OP(XKB_KEY_nobreakspace, RALT(LSHIFT(Key_Spacebar))) \
   OP(XKB_KEY_notsign, RALT(LSHIFT(Key_Equals))) \
   OP(XKB_KEY_onehalf, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_paragraph, RALT(Key_Backtick)) \
   OP(XKB_KEY_period, Key_Period) \
   OP(XKB_KEY_periodcentered, RALT(Key_Period)) \
   OP(XKB_KEY_plus, Key_Minus) \
   OP(XKB_KEY_plusminus, RALT(Key_Equals)) \
   OP(XKB_KEY_question, LSHIFT(Key_Minus)) \
   OP(XKB_KEY_questiondown, RALT(LSHIFT(Key_Minus))) \
   OP(XKB_KEY_section, Key_Backtick) \
   OP(XKB_KEY_semicolon, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_space, Key_Spacebar) \
   OP(XKB_KEY_threequarters, RALT(LSHIFT(Key_Backtick))) \
   OP(XKB_KEY_underscore, LSHIFT(Key_Slash)) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace se {
namespace swl {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace swl
} // namespace se
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE

