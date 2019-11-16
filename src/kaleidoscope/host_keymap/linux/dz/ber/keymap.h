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

// layout: dz
// variant: ber

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('!', Key_Slash) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP('"', Key_3) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP('#', RALT(Key_3)) /* U+0023, XKB_KEY_numbersign, NUMBER SIGN */ \
   OP('$', Key_RightBracket) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP('%', LSHIFT(Key_Quote)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP('&', Key_1) /* U+0026, XKB_KEY_ampersand, AMPERSAND */ \
   OP('\'', Key_4) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP('(', Key_5) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(')', Key_Minus) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP('*', Key_NonUsPound) /* U+002a, XKB_KEY_asterisk, ASTERISK */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(',', Key_M) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_6) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP('.', LSHIFT(Key_Comma)) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP('/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP('0', LSHIFT(Key_0)) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP('1', LSHIFT(Key_1)) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP('2', LSHIFT(Key_2)) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP('3', LSHIFT(Key_3)) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP('4', LSHIFT(Key_4)) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP('5', LSHIFT(Key_5)) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP('6', LSHIFT(Key_6)) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP('7', LSHIFT(Key_7)) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP('8', LSHIFT(Key_8)) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP('9', LSHIFT(Key_9)) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(':', Key_Period) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(';', Key_Comma) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP('<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('=', Key_Equals) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP('>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('?', LSHIFT(Key_M)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP('@', RALT(Key_0)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP('[', RALT(Key_5)) /* U+005b, XKB_KEY_bracketleft, LEFT SQUARE BRACKET */ \
   OP('\\', RALT(Key_8)) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(']', RALT(Key_Minus)) /* U+005d, XKB_KEY_bracketright, RIGHT SQUARE BRACKET */ \
   OP('^', RALT(Key_9)) /* U+005e, XKB_KEY_asciicircum, CIRCUMFLEX ACCENT */ \
   OP('_', Key_8) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP('`', RALT(Key_7)) /* U+0060, XKB_KEY_grave, GRAVE ACCENT */ \
   OP('{', RALT(Key_4)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP('|', RALT(Key_6)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP('}', RALT(Key_Equals)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP('~', RALT(Key_2)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'!', Key_Slash) /* U+0021, XKB_KEY_exclam, EXCLAMATION MARK */ \
   OP(L'"', Key_3) /* U+0022, XKB_KEY_quotedbl, QUOTATION MARK */ \
   OP(L'#', RALT(Key_3)) /* U+0023, XKB_KEY_numbersign, NUMBER SIGN */ \
   OP(L'$', Key_RightBracket) /* U+0024, XKB_KEY_dollar, DOLLAR SIGN */ \
   OP(L'%', LSHIFT(Key_Quote)) /* U+0025, XKB_KEY_percent, PERCENT SIGN */ \
   OP(L'&', Key_1) /* U+0026, XKB_KEY_ampersand, AMPERSAND */ \
   OP(L'\'', Key_4) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP(L'(', Key_5) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(L')', Key_Minus) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP(L'*', Key_NonUsPound) /* U+002a, XKB_KEY_asterisk, ASTERISK */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L',', Key_M) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_6) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP(L'.', LSHIFT(Key_Comma)) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP(L'/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(L'0', LSHIFT(Key_0)) /* U+0030, XKB_KEY_0, DIGIT ZERO */ \
   OP(L'1', LSHIFT(Key_1)) /* U+0031, XKB_KEY_1, DIGIT ONE */ \
   OP(L'2', LSHIFT(Key_2)) /* U+0032, XKB_KEY_2, DIGIT TWO */ \
   OP(L'3', LSHIFT(Key_3)) /* U+0033, XKB_KEY_3, DIGIT THREE */ \
   OP(L'4', LSHIFT(Key_4)) /* U+0034, XKB_KEY_4, DIGIT FOUR */ \
   OP(L'5', LSHIFT(Key_5)) /* U+0035, XKB_KEY_5, DIGIT FIVE */ \
   OP(L'6', LSHIFT(Key_6)) /* U+0036, XKB_KEY_6, DIGIT SIX */ \
   OP(L'7', LSHIFT(Key_7)) /* U+0037, XKB_KEY_7, DIGIT SEVEN */ \
   OP(L'8', LSHIFT(Key_8)) /* U+0038, XKB_KEY_8, DIGIT EIGHT */ \
   OP(L'9', LSHIFT(Key_9)) /* U+0039, XKB_KEY_9, DIGIT NINE */ \
   OP(L':', Key_Period) /* U+003a, XKB_KEY_colon, COLON */ \
   OP(L';', Key_Comma) /* U+003b, XKB_KEY_semicolon, SEMICOLON */ \
   OP(L'<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'=', Key_Equals) /* U+003d, XKB_KEY_equal, EQUALS SIGN */ \
   OP(L'>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'?', LSHIFT(Key_M)) /* U+003f, XKB_KEY_question, QUESTION MARK */ \
   OP(L'@', RALT(Key_0)) /* U+0040, XKB_KEY_at, COMMERCIAL AT */ \
   OP(L'[', RALT(Key_5)) /* U+005b, XKB_KEY_bracketleft, LEFT SQUARE BRACKET */ \
   OP(L'\\', RALT(Key_8)) /* U+005c, XKB_KEY_backslash, REVERSE SOLIDUS */ \
   OP(L']', RALT(Key_Minus)) /* U+005d, XKB_KEY_bracketright, RIGHT SQUARE BRACKET */ \
   OP(L'^', RALT(Key_9)) /* U+005e, XKB_KEY_asciicircum, CIRCUMFLEX ACCENT */ \
   OP(L'_', Key_8) /* U+005f, XKB_KEY_underscore, LOW LINE */ \
   OP(L'`', RALT(Key_7)) /* U+0060, XKB_KEY_grave, GRAVE ACCENT */ \
   OP(L'{', RALT(Key_4)) /* U+007b, XKB_KEY_braceleft, LEFT CURLY BRACKET */ \
   OP(L'|', RALT(Key_6)) /* U+007c, XKB_KEY_bar, VERTICAL LINE */ \
   OP(L'}', RALT(Key_Equals)) /* U+007d, XKB_KEY_braceright, RIGHT CURLY BRACKET */ \
   OP(L'~', RALT(Key_2)) /* U+007e, XKB_KEY_asciitilde, TILDE */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L'¡', RALT(Key_Slash)) /* U+00a1, XKB_KEY_exclamdown, INVERTED EXCLAMATION MARK */ \
   OP(L'£', LSHIFT(Key_RightBracket)) /* U+00a3, XKB_KEY_sterling, POUND SIGN */ \
   OP(L'§', LSHIFT(Key_Slash)) /* U+00a7, XKB_KEY_section, SECTION SIGN */ \
   OP(L'°', LSHIFT(Key_Minus)) /* U+00b0, XKB_KEY_degree, DEGREE SIGN */ \
   OP(L'±', RALT(LSHIFT(Key_Equals))) /* U+00b1, XKB_KEY_plusminus, PLUS-MINUS SIGN */ \
   OP(L'²', Key_Backtick) /* U+00b2, XKB_KEY_twosuperior, SUPERSCRIPT TWO */ \
   OP(L'³', LSHIFT(Key_Backtick)) /* U+00b3, XKB_KEY_threesuperior, SUPERSCRIPT THREE */ \
   OP(L'µ', LSHIFT(Key_NonUsPound)) /* U+00b5, XKB_KEY_mu, MICRO SIGN */ \
   OP(L'¹', RALT(Key_Backtick)) /* U+00b9, XKB_KEY_onesuperior, SUPERSCRIPT ONE */ \
   OP(L'¿', RALT(Key_M)) /* U+00bf, XKB_KEY_questiondown, INVERTED QUESTION MARK */ \
   OP(L'À', RALT(LSHIFT(Key_0))) /* U+00c0, XKB_KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */ \
   OP(L'Ç', RALT(LSHIFT(Key_9))) /* U+00c7, XKB_KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */ \
   OP(L'È', RALT(LSHIFT(Key_7))) /* U+00c8, XKB_KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */ \
   OP(L'É', RALT(LSHIFT(Key_2))) /* U+00c9, XKB_KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */ \
   OP(L'×', RALT(Key_Comma)) /* U+00d7, XKB_KEY_multiply, MULTIPLICATION SIGN */ \
   OP(L'Ø', RALT(LSHIFT(Key_RightBracket))) /* U+00d8, XKB_KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */ \
   OP(L'Ù', RALT(LSHIFT(Key_Quote))) /* U+00d9, XKB_KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */ \
   OP(L'à', Key_0) /* U+00e0, XKB_KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */ \
   OP(L'ç', Key_9) /* U+00e7, XKB_KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */ \
   OP(L'è', Key_7) /* U+00e8, XKB_KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */ \
   OP(L'é', Key_2) /* U+00e9, XKB_KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */ \
   OP(L'÷', RALT(Key_Period)) /* U+00f7, XKB_KEY_division, DIVISION SIGN */ \
   OP(L'ø', RALT(Key_RightBracket)) /* U+00f8, XKB_KEY_oslash, LATIN SMALL LETTER O WITH STROKE */ \
   OP(L'ù', Key_Quote) /* U+00f9, XKB_KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */ \
   OP(L'‑', RALT(LSHIFT(Key_6))) \
   OP(L'–', RALT(LSHIFT(Key_5))) \
   OP(L'—', RALT(LSHIFT(Key_4))) \
   OP(L'…', RALT(LSHIFT(Key_M))) \
   OP(L'™', RALT(LSHIFT(Key_8))) /* U+2122, XKB_KEY_trademark, TRADE MARK SIGN */ \
   OP(L'−', RALT(LSHIFT(Key_Slash))) \
   OP(L'∕', RALT(LSHIFT(Key_Period))) \
   OP(L'≠', RALT(LSHIFT(Key_Minus))) /* U+2260, XKB_KEY_notequal, NOT EQUAL TO */ \
   OP(L'≤', RALT(Key_NonUsBackslashAndPipe)) /* U+2264, XKB_KEY_lessthanequal, LESS-THAN OR EQUAL TO */ \
   OP(L'≥', RALT(LSHIFT(Key_NonUsBackslashAndPipe))) /* U+2265, XKB_KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */ \
   OP(L'⋅', RALT(LSHIFT(Key_Comma))) \
   OP(L'ⴰ', Key_Q) \
   OP(L'ⴱ', Key_B) \
   OP(L'ⴲ', LSHIFT(Key_B)) \
   OP(L'ⴳ', Key_G) \
   OP(L'ⴴ', RALT(Key_G)) \
   OP(L'ⴵ', LSHIFT(Key_G)) \
   OP(L'ⴶ', RALT(LSHIFT(Key_G))) \
   OP(L'ⴷ', Key_D) \
   OP(L'ⴸ', RALT(Key_D)) \
   OP(L'ⴹ', LSHIFT(Key_D)) \
   OP(L'ⴺ', RALT(LSHIFT(Key_D))) \
   OP(L'ⴻ', Key_E) \
   OP(L'ⴼ', Key_F) \
   OP(L'ⴽ', Key_K) \
   OP(L'ⴾ', RALT(Key_K)) \
   OP(L'ⴿ', LSHIFT(Key_K)) \
   OP(L'ⵀ', Key_H) \
   OP(L'ⵁ', LSHIFT(Key_H)) \
   OP(L'ⵂ', RALT(Key_H)) \
   OP(L'ⵃ', Key_P) \
   OP(L'ⵄ', Key_O) \
   OP(L'ⵅ', Key_X) \
   OP(L'ⵆ', LSHIFT(Key_X)) \
   OP(L'ⵇ', Key_A) \
   OP(L'ⵈ', LSHIFT(Key_A)) \
   OP(L'ⵉ', Key_I) \
   OP(L'ⵊ', Key_J) \
   OP(L'ⵋ', LSHIFT(Key_J)) \
   OP(L'ⵌ', RALT(Key_J)) \
   OP(L'ⵍ', Key_L) \
   OP(L'ⵎ', Key_Semicolon) \
   OP(L'ⵏ', Key_N) \
   OP(L'ⵐ', LSHIFT(Key_N)) \
   OP(L'ⵑ', RALT(Key_N)) \
   OP(L'ⵒ', RALT(Key_B)) \
   OP(L'ⵓ', Key_U) \
   OP(L'ⵔ', Key_R) \
   OP(L'ⵕ', LSHIFT(Key_R)) \
   OP(L'ⵖ', Key_V) \
   OP(L'ⵗ', LSHIFT(Key_V)) \
   OP(L'ⵘ', RALT(Key_V)) \
   OP(L'ⵙ', Key_S) \
   OP(L'ⵚ', LSHIFT(Key_S)) \
   OP(L'ⵛ', Key_C) \
   OP(L'ⵜ', Key_T) \
   OP(L'ⵝ', RALT(Key_T)) \
   OP(L'ⵞ', LSHIFT(Key_C)) \
   OP(L'ⵟ', LSHIFT(Key_T)) \
   OP(L'ⵠ', RALT(LSHIFT(Key_V))) \
   OP(L'ⵡ', Key_Z) \
   OP(L'ⵢ', Key_Y) \
   OP(L'ⵣ', Key_W) \
   OP(L'ⵤ', RALT(Key_W)) \
   OP(L'ⵥ', LSHIFT(Key_W)) \
   OP(L'ⵦ', LSHIFT(Key_E)) \
   OP(L'ⵧ', LSHIFT(Key_O)) \
   OP(L'ⵯ', Key_LeftBracket) \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_0, LSHIFT(Key_0)) \
   OP(XKB_KEY_1, LSHIFT(Key_1)) \
   OP(XKB_KEY_2, LSHIFT(Key_2)) \
   OP(XKB_KEY_3, LSHIFT(Key_3)) \
   OP(XKB_KEY_4, LSHIFT(Key_4)) \
   OP(XKB_KEY_5, LSHIFT(Key_5)) \
   OP(XKB_KEY_6, LSHIFT(Key_6)) \
   OP(XKB_KEY_7, LSHIFT(Key_7)) \
   OP(XKB_KEY_8, LSHIFT(Key_8)) \
   OP(XKB_KEY_9, LSHIFT(Key_9)) \
   OP(XKB_KEY_Agrave, RALT(LSHIFT(Key_0))) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_BackSpace, Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(XKB_KEY_Break, LCTRL(Key_Pause)) /* XKB_KEY_Break */ \
   OP(XKB_KEY_Caps_Lock, Key_CapsLock) /* XKB_KEY_Caps_Lock, Caps lock  */ \
   OP(XKB_KEY_Ccedilla, RALT(LSHIFT(Key_9))) \
   OP(XKB_KEY_Control_L, Key_LeftControl) /* XKB_KEY_Control_L, Left control  */ \
   OP(XKB_KEY_Control_R, Key_RightControl) /* XKB_KEY_Control_R, Right control  */ \
   OP(XKB_KEY_Delete, Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(XKB_KEY_Down, Key_DownArrow) /* XKB_KEY_Down, Move down, down arrow  */ \
   OP(XKB_KEY_Eacute, RALT(LSHIFT(Key_2))) \
   OP(XKB_KEY_Egrave, RALT(LSHIFT(Key_7))) \
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
   OP(XKB_KEY_Left, Key_LeftArrow) /* XKB_KEY_Left, Move left, left arrow  */ \
   OP(XKB_KEY_Menu, Key_PcApplication) /* XKB_KEY_Menu */ \
   OP(XKB_KEY_Meta_L, LSHIFT(Key_LeftAlt)) /* XKB_KEY_Meta_L, Left meta  */ \
   OP(XKB_KEY_Next, Key_PageDown) /* XKB_KEY_Next, Next  */ \
   OP(XKB_KEY_Num_Lock, Key_KeypadNumLock) /* XKB_KEY_Num_Lock */ \
   OP(XKB_KEY_Oslash, RALT(LSHIFT(Key_RightBracket))) \
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
   OP(XKB_KEY_Ugrave, RALT(LSHIFT(Key_Quote))) \
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
   OP(XKB_KEY_agrave, Key_0) \
   OP(XKB_KEY_ampersand, Key_1) \
   OP(XKB_KEY_apostrophe, Key_4) /* XKB_KEY_quoteright, deprecated  */ \
   OP(XKB_KEY_asciicircum, RALT(Key_9)) \
   OP(XKB_KEY_asciitilde, RALT(Key_2)) \
   OP(XKB_KEY_asterisk, Key_NonUsPound) \
   OP(XKB_KEY_at, RALT(Key_0)) \
   OP(XKB_KEY_backslash, RALT(Key_8)) \
   OP(XKB_KEY_bar, RALT(Key_6)) \
   OP(XKB_KEY_braceleft, RALT(Key_4)) \
   OP(XKB_KEY_braceright, RALT(Key_Equals)) \
   OP(XKB_KEY_bracketleft, RALT(Key_5)) \
   OP(XKB_KEY_bracketright, RALT(Key_Minus)) \
   OP(XKB_KEY_ccedilla, Key_9) \
   OP(XKB_KEY_colon, Key_Period) \
   OP(XKB_KEY_comma, Key_M) \
   OP(XKB_KEY_dead_acute, RALT(Key_Quote)) /* XKB_KEY_dead_acute */ \
   OP(XKB_KEY_dead_breve, RALT(LSHIFT(Key_3))) /* XKB_KEY_dead_breve */ \
   OP(XKB_KEY_dead_caron, RALT(Key_1)) /* XKB_KEY_dead_caron */ \
   OP(XKB_KEY_dead_cedilla, RALT(LSHIFT(Key_Backtick))) /* XKB_KEY_dead_cedilla */ \
   OP(XKB_KEY_dead_grave, RALT(Key_NonUsPound)) /* XKB_KEY_dead_grave */ \
   OP(XKB_KEY_dead_macron, RALT(LSHIFT(Key_NonUsPound))) /* XKB_KEY_dead_macron */ \
   OP(XKB_KEY_dead_ogonek, RALT(LSHIFT(Key_1))) /* XKB_KEY_dead_ogonek */ \
   OP(XKB_KEY_degree, LSHIFT(Key_Minus)) \
   OP(XKB_KEY_division, RALT(Key_Period)) \
   OP(XKB_KEY_dollar, Key_RightBracket) \
   OP(XKB_KEY_eacute, Key_2) \
   OP(XKB_KEY_egrave, Key_7) \
   OP(XKB_KEY_equal, Key_Equals) \
   OP(XKB_KEY_exclam, Key_Slash) \
   OP(XKB_KEY_exclamdown, RALT(Key_Slash)) \
   OP(XKB_KEY_grave, RALT(Key_7)) /* XKB_KEY_quoteleft, deprecated  */ \
   OP(XKB_KEY_greater, LSHIFT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_greaterthanequal, RALT(LSHIFT(Key_NonUsBackslashAndPipe))) \
   OP(XKB_KEY_less, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_lessthanequal, RALT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_minus, Key_6) \
   OP(XKB_KEY_mu, LSHIFT(Key_NonUsPound)) \
   OP(XKB_KEY_multiply, RALT(Key_Comma)) \
   OP(XKB_KEY_notequal, RALT(LSHIFT(Key_Minus))) \
   OP(XKB_KEY_numbersign, RALT(Key_3)) \
   OP(XKB_KEY_onesuperior, RALT(Key_Backtick)) \
   OP(XKB_KEY_oslash, RALT(Key_RightBracket)) \
   OP(XKB_KEY_parenleft, Key_5) \
   OP(XKB_KEY_parenright, Key_Minus) \
   OP(XKB_KEY_percent, LSHIFT(Key_Quote)) \
   OP(XKB_KEY_period, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_plus, LSHIFT(Key_Equals)) \
   OP(XKB_KEY_plusminus, RALT(LSHIFT(Key_Equals))) \
   OP(XKB_KEY_question, LSHIFT(Key_M)) \
   OP(XKB_KEY_questiondown, RALT(Key_M)) \
   OP(XKB_KEY_quotedbl, Key_3) \
   OP(XKB_KEY_section, LSHIFT(Key_Slash)) \
   OP(XKB_KEY_semicolon, Key_Comma) \
   OP(XKB_KEY_slash, LSHIFT(Key_Period)) \
   OP(XKB_KEY_space, Key_Spacebar) \
   OP(XKB_KEY_sterling, LSHIFT(Key_RightBracket)) \
   OP(XKB_KEY_threesuperior, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_trademark, RALT(LSHIFT(Key_8))) \
   OP(XKB_KEY_twosuperior, Key_Backtick) \
   OP(XKB_KEY_ugrave, Key_Quote) \
   OP(XKB_KEY_underscore, Key_8) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace dz {
namespace ber {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace ber
} // namespace dz
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE

