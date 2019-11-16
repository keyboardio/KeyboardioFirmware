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

// layout: am
// variant: western

#define _HOST_KEYMAP_ASCII(OP) \
   OP('\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP('\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP('\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP('\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP('\'', Key_NonUsPound) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP('(', LSHIFT(Key_8)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(')', LSHIFT(Key_9)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP('*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP('+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(',', Key_5) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP('-', Key_6) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP('.', Key_7) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP('/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP('0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP('1', LSHIFT(Key_1)) /* XKB_KEY_KP_1 */ \
   OP('2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP('3', LSHIFT(Key_4)) /* XKB_KEY_KP_3 */ \
   OP('4', LSHIFT(Key_5)) /* XKB_KEY_KP_4 */ \
   OP('5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP('6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP('7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP('8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP('9', LSHIFT(Key_6)) /* XKB_KEY_KP_9 */ \
   OP('<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP('>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP('', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \

#define _HOST_KEYMAP_UNICODE(OP) \
   OP(L'\b', Key_Backspace) /* XKB_KEY_BackSpace, Back space, back char  */ \
   OP(L'\t', Key_Tab) /* XKB_KEY_Tab */ \
   OP(L'\r', Key_Enter) /* XKB_KEY_Return, Return, enter  */ \
   OP(L'\e', Key_Escape) /* XKB_KEY_Escape */ \
   OP(L' ', Key_Spacebar) /* U+0020, XKB_KEY_space, SPACE */ \
   OP(L'\'', Key_NonUsPound) /* U+0027, XKB_KEY_apostrophe, APOSTROPHE */ \
   OP(L'(', LSHIFT(Key_8)) /* U+0028, XKB_KEY_parenleft, LEFT PARENTHESIS */ \
   OP(L')', LSHIFT(Key_9)) /* U+0029, XKB_KEY_parenright, RIGHT PARENTHESIS */ \
   OP(L'*', Key_KeypadMultiply) /* XKB_KEY_KP_Multiply */ \
   OP(L'+', Key_KeypadAdd) /* XKB_KEY_KP_Add */ \
   OP(L',', Key_5) /* U+002c, XKB_KEY_comma, COMMA */ \
   OP(L'-', Key_6) /* U+002d, XKB_KEY_minus, HYPHEN-MINUS */ \
   OP(L'.', Key_7) /* U+002e, XKB_KEY_period, FULL STOP */ \
   OP(L'/', Key_KeypadDivide) /* XKB_KEY_KP_Divide */ \
   OP(L'0', LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(L'1', LSHIFT(Key_1)) /* XKB_KEY_KP_1 */ \
   OP(L'2', LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(L'3', LSHIFT(Key_4)) /* XKB_KEY_KP_3 */ \
   OP(L'4', LSHIFT(Key_5)) /* XKB_KEY_KP_4 */ \
   OP(L'5', LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(L'6', LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(L'7', LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(L'8', LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(L'9', LSHIFT(Key_6)) /* XKB_KEY_KP_9 */ \
   OP(L'<', Key_NonUsBackslashAndPipe) /* U+003c, XKB_KEY_less, LESS-THAN SIGN */ \
   OP(L'>', LSHIFT(Key_NonUsBackslashAndPipe)) /* U+003e, XKB_KEY_greater, GREATER-THAN SIGN */ \
   OP(L'', Key_Delete) /* XKB_KEY_Delete, Delete, rubout  */ \
   OP(L'«', Key_8) /* U+00ab, XKB_KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'»', Key_9) /* U+00bb, XKB_KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */ \
   OP(L'Ա', LSHIFT(Key_A)) /* U+0531, XKB_KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */ \
   OP(L'Բ', LSHIFT(Key_P)) /* U+0532, XKB_KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */ \
   OP(L'Գ', LSHIFT(Key_C)) /* U+0533, XKB_KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */ \
   OP(L'Դ', LSHIFT(Key_T)) /* U+0534, XKB_KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */ \
   OP(L'Ե', LSHIFT(Key_Y)) /* U+0535, XKB_KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */ \
   OP(L'Զ', LSHIFT(Key_Z)) /* U+0536, XKB_KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */ \
   OP(L'Է', LSHIFT(Key_E)) /* U+0537, XKB_KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */ \
   OP(L'Ը', LSHIFT(Key_U)) /* U+0538, XKB_KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */ \
   OP(L'Թ', LSHIFT(Key_Semicolon)) /* U+0539, XKB_KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */ \
   OP(L'Ժ', LSHIFT(Key_Equals)) /* U+053a, XKB_KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */ \
   OP(L'Ի', LSHIFT(Key_I)) /* U+053b, XKB_KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */ \
   OP(L'Լ', LSHIFT(Key_L)) /* U+053c, XKB_KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */ \
   OP(L'Խ', LSHIFT(Key_Q)) /* U+053d, XKB_KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */ \
   OP(L'Ծ', LSHIFT(Key_Slash)) /* U+053e, XKB_KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */ \
   OP(L'Կ', LSHIFT(Key_G)) /* U+053f, XKB_KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */ \
   OP(L'Հ', LSHIFT(Key_H)) /* U+0540, XKB_KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */ \
   OP(L'Ձ', LSHIFT(Key_2)) /* U+0541, XKB_KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */ \
   OP(L'Ղ', LSHIFT(Key_Period)) /* U+0542, XKB_KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */ \
   OP(L'Ճ', LSHIFT(Key_J)) /* U+0543, XKB_KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */ \
   OP(L'Մ', LSHIFT(Key_M)) /* U+0544, XKB_KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */ \
   OP(L'Յ', LSHIFT(Key_3)) /* U+0545, XKB_KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */ \
   OP(L'Ն', LSHIFT(Key_N)) /* U+0546, XKB_KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */ \
   OP(L'Շ', LSHIFT(Key_Comma)) /* U+0547, XKB_KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */ \
   OP(L'Ո', LSHIFT(Key_O)) /* U+0548, XKB_KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */ \
   OP(L'Չ', LSHIFT(Key_LeftBracket)) /* U+0549, XKB_KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */ \
   OP(L'Պ', LSHIFT(Key_B)) /* U+054a, XKB_KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */ \
   OP(L'Ջ', LSHIFT(Key_RightBracket)) /* U+054b, XKB_KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */ \
   OP(L'Ռ', LSHIFT(Key_Minus)) /* U+054c, XKB_KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */ \
   OP(L'Ս', LSHIFT(Key_S)) /* U+054d, XKB_KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */ \
   OP(L'Վ', LSHIFT(Key_W)) /* U+054e, XKB_KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */ \
   OP(L'Տ', LSHIFT(Key_D)) /* U+054f, XKB_KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */ \
   OP(L'Ր', LSHIFT(Key_R)) /* U+0550, XKB_KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */ \
   OP(L'Ց', LSHIFT(Key_X)) /* U+0551, XKB_KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */ \
   OP(L'Ւ', LSHIFT(Key_V)) /* U+0552, XKB_KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */ \
   OP(L'Փ', LSHIFT(Key_Quote)) /* U+0553, XKB_KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */ \
   OP(L'Ք', LSHIFT(Key_K)) /* U+0554, XKB_KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */ \
   OP(L'Օ', LSHIFT(Key_0)) /* U+0555, XKB_KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */ \
   OP(L'Ֆ', LSHIFT(Key_F)) /* U+0556, XKB_KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */ \
   OP(L'՛', Key_4) /* U+055b, XKB_KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */ \
   OP(L'՜', LSHIFT(Key_Backtick)) /* U+055c, XKB_KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */ \
   OP(L'՝', Key_Backtick) /* U+055d, XKB_KEY_Armenian_separation_mark, ARMENIAN COMMA */ \
   OP(L'՞', LSHIFT(Key_NonUsPound)) /* U+055e, XKB_KEY_Armenian_question, ARMENIAN QUESTION MARK */ \
   OP(L'ա', Key_A) /* U+0561, XKB_KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */ \
   OP(L'բ', Key_P) /* U+0562, XKB_KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */ \
   OP(L'գ', Key_C) /* U+0563, XKB_KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */ \
   OP(L'դ', Key_T) /* U+0564, XKB_KEY_Armenian_da, ARMENIAN SMALL LETTER DA */ \
   OP(L'ե', Key_Y) /* U+0565, XKB_KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */ \
   OP(L'զ', Key_Z) /* U+0566, XKB_KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */ \
   OP(L'է', Key_E) /* U+0567, XKB_KEY_Armenian_e, ARMENIAN SMALL LETTER EH */ \
   OP(L'ը', Key_U) /* U+0568, XKB_KEY_Armenian_at, ARMENIAN SMALL LETTER ET */ \
   OP(L'թ', Key_Semicolon) /* U+0569, XKB_KEY_Armenian_to, ARMENIAN SMALL LETTER TO */ \
   OP(L'ժ', Key_Equals) /* U+056a, XKB_KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */ \
   OP(L'ի', Key_I) /* U+056b, XKB_KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */ \
   OP(L'լ', Key_L) /* U+056c, XKB_KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */ \
   OP(L'խ', Key_Q) /* U+056d, XKB_KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */ \
   OP(L'ծ', Key_Slash) /* U+056e, XKB_KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */ \
   OP(L'կ', Key_G) /* U+056f, XKB_KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */ \
   OP(L'հ', Key_H) /* U+0570, XKB_KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */ \
   OP(L'ձ', Key_2) /* U+0571, XKB_KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */ \
   OP(L'ղ', Key_Period) /* U+0572, XKB_KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */ \
   OP(L'ճ', Key_J) /* U+0573, XKB_KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */ \
   OP(L'մ', Key_M) /* U+0574, XKB_KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */ \
   OP(L'յ', Key_3) /* U+0575, XKB_KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */ \
   OP(L'ն', Key_N) /* U+0576, XKB_KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */ \
   OP(L'շ', Key_Comma) /* U+0577, XKB_KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */ \
   OP(L'ո', Key_O) /* U+0578, XKB_KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */ \
   OP(L'չ', Key_LeftBracket) /* U+0579, XKB_KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */ \
   OP(L'պ', Key_B) /* U+057a, XKB_KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */ \
   OP(L'ջ', Key_RightBracket) /* U+057b, XKB_KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */ \
   OP(L'ռ', Key_Minus) /* U+057c, XKB_KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */ \
   OP(L'ս', Key_S) /* U+057d, XKB_KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */ \
   OP(L'վ', Key_W) /* U+057e, XKB_KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */ \
   OP(L'տ', Key_D) /* U+057f, XKB_KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */ \
   OP(L'ր', Key_R) /* U+0580, XKB_KEY_Armenian_re, ARMENIAN SMALL LETTER REH */ \
   OP(L'ց', Key_X) /* U+0581, XKB_KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */ \
   OP(L'ւ', Key_V) /* U+0582, XKB_KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */ \
   OP(L'փ', Key_Quote) /* U+0583, XKB_KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */ \
   OP(L'ք', Key_K) /* U+0584, XKB_KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */ \
   OP(L'օ', Key_0) /* U+0585, XKB_KEY_Armenian_o, ARMENIAN SMALL LETTER OH */ \
   OP(L'ֆ', Key_F) /* U+0586, XKB_KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */ \
   OP(L'և', LSHIFT(Key_7)) /* U+0587, XKB_KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */ \
   OP(L'։', Key_1) /* U+0589, XKB_KEY_Armenian_full_stop, ARMENIAN FULL STOP */ \

#define _HOST_KEYMAP_NON_PRINTABLE(OP) \
   OP(XKB_KEY_Alt_L, Key_LeftAlt) /* XKB_KEY_Alt_L, Left alt  */ \
   OP(XKB_KEY_Alt_R, Key_RightAlt) /* XKB_KEY_Alt_R, Right alt  */ \
   OP(XKB_KEY_Armenian_AT, LSHIFT(Key_U)) \
   OP(XKB_KEY_Armenian_AYB, LSHIFT(Key_A)) \
   OP(XKB_KEY_Armenian_BEN, LSHIFT(Key_P)) \
   OP(XKB_KEY_Armenian_CHA, LSHIFT(Key_LeftBracket)) \
   OP(XKB_KEY_Armenian_DA, LSHIFT(Key_T)) \
   OP(XKB_KEY_Armenian_DZA, LSHIFT(Key_2)) \
   OP(XKB_KEY_Armenian_E, LSHIFT(Key_E)) \
   OP(XKB_KEY_Armenian_FE, LSHIFT(Key_F)) \
   OP(XKB_KEY_Armenian_GHAT, LSHIFT(Key_Period)) \
   OP(XKB_KEY_Armenian_GIM, LSHIFT(Key_C)) \
   OP(XKB_KEY_Armenian_HI, LSHIFT(Key_3)) \
   OP(XKB_KEY_Armenian_HO, LSHIFT(Key_H)) \
   OP(XKB_KEY_Armenian_INI, LSHIFT(Key_I)) \
   OP(XKB_KEY_Armenian_JE, LSHIFT(Key_RightBracket)) \
   OP(XKB_KEY_Armenian_KE, LSHIFT(Key_K)) \
   OP(XKB_KEY_Armenian_KEN, LSHIFT(Key_G)) \
   OP(XKB_KEY_Armenian_KHE, LSHIFT(Key_Q)) \
   OP(XKB_KEY_Armenian_LYUN, LSHIFT(Key_L)) \
   OP(XKB_KEY_Armenian_MEN, LSHIFT(Key_M)) \
   OP(XKB_KEY_Armenian_NU, LSHIFT(Key_N)) \
   OP(XKB_KEY_Armenian_O, LSHIFT(Key_0)) \
   OP(XKB_KEY_Armenian_PE, LSHIFT(Key_B)) \
   OP(XKB_KEY_Armenian_PYUR, LSHIFT(Key_Quote)) \
   OP(XKB_KEY_Armenian_RA, LSHIFT(Key_Minus)) \
   OP(XKB_KEY_Armenian_RE, LSHIFT(Key_R)) \
   OP(XKB_KEY_Armenian_SE, LSHIFT(Key_S)) \
   OP(XKB_KEY_Armenian_SHA, LSHIFT(Key_Comma)) \
   OP(XKB_KEY_Armenian_TCHE, LSHIFT(Key_J)) \
   OP(XKB_KEY_Armenian_TO, LSHIFT(Key_Semicolon)) \
   OP(XKB_KEY_Armenian_TSA, LSHIFT(Key_Slash)) \
   OP(XKB_KEY_Armenian_TSO, LSHIFT(Key_X)) \
   OP(XKB_KEY_Armenian_TYUN, LSHIFT(Key_D)) \
   OP(XKB_KEY_Armenian_VEV, LSHIFT(Key_W)) \
   OP(XKB_KEY_Armenian_VO, LSHIFT(Key_O)) \
   OP(XKB_KEY_Armenian_VYUN, LSHIFT(Key_V)) \
   OP(XKB_KEY_Armenian_YECH, LSHIFT(Key_Y)) \
   OP(XKB_KEY_Armenian_ZA, LSHIFT(Key_Z)) \
   OP(XKB_KEY_Armenian_ZHE, LSHIFT(Key_Equals)) \
   OP(XKB_KEY_Armenian_accent, Key_4) \
   OP(XKB_KEY_Armenian_at, Key_U) \
   OP(XKB_KEY_Armenian_ayb, Key_A) \
   OP(XKB_KEY_Armenian_ben, Key_P) \
   OP(XKB_KEY_Armenian_cha, Key_LeftBracket) \
   OP(XKB_KEY_Armenian_da, Key_T) \
   OP(XKB_KEY_Armenian_dza, Key_2) \
   OP(XKB_KEY_Armenian_e, Key_E) \
   OP(XKB_KEY_Armenian_exclam, LSHIFT(Key_Backtick)) \
   OP(XKB_KEY_Armenian_fe, Key_F) \
   OP(XKB_KEY_Armenian_full_stop, Key_1) \
   OP(XKB_KEY_Armenian_ghat, Key_Period) \
   OP(XKB_KEY_Armenian_gim, Key_C) \
   OP(XKB_KEY_Armenian_hi, Key_3) \
   OP(XKB_KEY_Armenian_ho, Key_H) \
   OP(XKB_KEY_Armenian_ini, Key_I) \
   OP(XKB_KEY_Armenian_je, Key_RightBracket) \
   OP(XKB_KEY_Armenian_ke, Key_K) \
   OP(XKB_KEY_Armenian_ken, Key_G) \
   OP(XKB_KEY_Armenian_khe, Key_Q) \
   OP(XKB_KEY_Armenian_ligature_ew, LSHIFT(Key_7)) \
   OP(XKB_KEY_Armenian_lyun, Key_L) \
   OP(XKB_KEY_Armenian_men, Key_M) \
   OP(XKB_KEY_Armenian_nu, Key_N) \
   OP(XKB_KEY_Armenian_o, Key_0) \
   OP(XKB_KEY_Armenian_pe, Key_B) \
   OP(XKB_KEY_Armenian_pyur, Key_Quote) \
   OP(XKB_KEY_Armenian_question, LSHIFT(Key_NonUsPound)) \
   OP(XKB_KEY_Armenian_ra, Key_Minus) \
   OP(XKB_KEY_Armenian_re, Key_R) \
   OP(XKB_KEY_Armenian_se, Key_S) \
   OP(XKB_KEY_Armenian_separation_mark, Key_Backtick) \
   OP(XKB_KEY_Armenian_sha, Key_Comma) \
   OP(XKB_KEY_Armenian_tche, Key_J) \
   OP(XKB_KEY_Armenian_to, Key_Semicolon) \
   OP(XKB_KEY_Armenian_tsa, Key_Slash) \
   OP(XKB_KEY_Armenian_tso, Key_X) \
   OP(XKB_KEY_Armenian_tyun, Key_D) \
   OP(XKB_KEY_Armenian_vev, Key_W) \
   OP(XKB_KEY_Armenian_vo, Key_O) \
   OP(XKB_KEY_Armenian_vyun, Key_V) \
   OP(XKB_KEY_Armenian_yech, Key_Y) \
   OP(XKB_KEY_Armenian_za, Key_Z) \
   OP(XKB_KEY_Armenian_zhe, Key_Equals) \
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
   OP(XKB_KEY_Insert, Key_Insert) /* XKB_KEY_Insert, Insert, insert here  */ \
   OP(XKB_KEY_KP_0, LSHIFT(Key_Keypad0)) /* XKB_KEY_KP_0 */ \
   OP(XKB_KEY_KP_1, LSHIFT(Key_1)) /* XKB_KEY_KP_1 */ \
   OP(XKB_KEY_KP_2, LSHIFT(Key_Keypad2)) /* XKB_KEY_KP_2 */ \
   OP(XKB_KEY_KP_3, LSHIFT(Key_4)) /* XKB_KEY_KP_3 */ \
   OP(XKB_KEY_KP_4, LSHIFT(Key_5)) /* XKB_KEY_KP_4 */ \
   OP(XKB_KEY_KP_5, LSHIFT(Key_Keypad5)) /* XKB_KEY_KP_5 */ \
   OP(XKB_KEY_KP_6, LSHIFT(Key_Keypad6)) /* XKB_KEY_KP_6 */ \
   OP(XKB_KEY_KP_7, LSHIFT(Key_Keypad7)) /* XKB_KEY_KP_7 */ \
   OP(XKB_KEY_KP_8, LSHIFT(Key_Keypad8)) /* XKB_KEY_KP_8 */ \
   OP(XKB_KEY_KP_9, LSHIFT(Key_6)) /* XKB_KEY_KP_9 */ \
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
   OP(XKB_KEY_apostrophe, Key_NonUsPound) /* XKB_KEY_quoteright, deprecated  */ \
   OP(XKB_KEY_comma, Key_5) \
   OP(XKB_KEY_greater, LSHIFT(Key_NonUsBackslashAndPipe)) \
   OP(XKB_KEY_guillemotleft, Key_8) \
   OP(XKB_KEY_guillemotright, Key_9) \
   OP(XKB_KEY_less, Key_NonUsBackslashAndPipe) \
   OP(XKB_KEY_minus, Key_6) \
   OP(XKB_KEY_parenleft, LSHIFT(Key_8)) \
   OP(XKB_KEY_parenright, LSHIFT(Key_9)) \
   OP(XKB_KEY_period, Key_7) \
   OP(XKB_KEY_space, Key_Spacebar) \


namespace kaleidoscope {
namespace host_keymap {
namespace linux {
namespace am {
namespace western {

HOST_KEYMAP_LINUX(
  _HOST_KEYMAP_ASCII,
  _HOST_KEYMAP_UNICODE,
  _HOST_KEYMAP_NON_PRINTABLE
)

} // namespace western
} // namespace am
} // namespace linux
} // namespace host_keymap
} // namespace kaleidoscope

#undef _HOST_KEYMAP_ASCII
#undef _HOST_KEYMAP_UNICODE
#undef _HOST_KEYMAP_NON_PRINTABLE

