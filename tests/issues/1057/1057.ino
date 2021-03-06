/* -*- mode: c++ -*-
 * Copyright (C) 2021  Keyboard.io, Inc.
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

#include <Kaleidoscope.h>
#include <Kaleidoscope-Qukeys.h>
#include <Kaleidoscope-OneShot.h>

#include "./common.h"

// *INDENT-OFF*
KEYMAPS(
  [0] = KEYMAP_STACKED
  (
      OSL(1),       Key_1, Key_2, Key_3, Key_4, Key_5, XXX,
      Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
      Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
      Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,

      Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
      Key_Q,

      XXX, OSM(LeftGui), LSHIFT(Key_LeftShift), LSHIFT(Key_RightShift), Key_9, Key_0, XXX,
      Key_Enter, Key_Y, Key_U,    Key_I,     Key_O,      Key_P,            Key_Equals,
                 Key_H, SFT_T(J), CTL_T(K),  ALT_T(L),   GUI_T(Semicolon), Key_Quote,
      Key_skip,  Key_N, Key_M,    Key_Comma, Key_Period, Key_Slash,        Key_Minus,

      Key_RightShift, Key_RightAlt, Key_Spacebar, Key_RightControl,
      LT(1,E)
   ),
  [1] = KEYMAP_STACKED
  (
      ___,   SFT_T(A), Key_C, Key_D, Key_E, Key_F, Key_G,
      Key_A, Key_B,    Key_C, Key_D, Key_E, Key_F, Key_G,
      Key_A, Key_B,    Key_C, Key_D, Key_E, Key_F,
      Key_A, Key_B,    Key_C, Key_D, Key_E, Key_F, Key_G,

      Key_1, Key_2, Key_3, Key_4,
      ___,


      ___,   Key_B, Key_C, Key_D, Key_E, Key_F, Key_G,
      Key_A, Key_B, Key_C, Key_D, Key_E, Key_F, Key_G,
      Key_A, Key_B, Key_C, Key_D, Key_E, Key_F,
      Key_A, Key_B, Key_C, Key_D, Key_E, Key_F, Key_G,

      Key_1, Key_2, Key_3, Key_4,
      ___
   ),
)
// *INDENT-ON*

KALEIDOSCOPE_INIT_PLUGINS(Qukeys, OneShot);

void setup() {
  QUKEYS(
    kaleidoscope::plugin::Qukey(0, KeyAddr(2, 1), Key_LeftGui),      // A/cmd
    kaleidoscope::plugin::Qukey(0, KeyAddr(2, 2), Key_LeftAlt),      // S/alt
    kaleidoscope::plugin::Qukey(0, KeyAddr(2, 3), Key_LeftControl),  // D/ctrl
    kaleidoscope::plugin::Qukey(0, KeyAddr(2, 4), Key_LeftShift),    // F/shift
    kaleidoscope::plugin::Qukey(0, KeyAddr(3, 6), ShiftToLayer(1))   // Q/layer-shift (on `fn`)
  )
  Qukeys.setHoldTimeout(kaleidoscope::testing::QUKEYS_HOLD_TIMEOUT);
  Qukeys.setOverlapThreshold(kaleidoscope::testing::QUKEYS_OVERLAP_THRESHOLD);
  Qukeys.setMinimumHoldTime(kaleidoscope::testing::QUKEYS_MINIMUM_HOLD_TIME);
  Qukeys.setMinimumPriorInterval(kaleidoscope::testing::QUKEYS_MIN_PRIOR_INTERVAL);
  Qukeys.setMaxIntervalForTapRepeat(kaleidoscope::testing::QUKEYS_MAX_INTERVAL_FOR_TAP_REPEAT);

  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}
