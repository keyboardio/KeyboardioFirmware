/* -*- mode: c++ -*-
 * Atreus -- Chrysalis-enabled Sketch for the Atreus2
 * Copyright (C) 2018, 2019  Keyboard.io, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "Kaleidoscope.h"
#include "Kaleidoscope-EEPROM-Settings.h"
#include "Kaleidoscope-EEPROM-Keymap.h"
#include "Kaleidoscope-FocusSerial.h"
#include "Kaleidoscope-Macros.h"
#include "Kaleidoscope-MouseKeys.h"
#include "Kaleidoscope-OneShot.h"
#include "Kaleidoscope-Qukeys.h"
#include "Kaleidoscope-SpaceCadet.h"
#include "Kaleidoscope-EscapeOneShot.h"

#define MO(n) ShiftToLayer(n)
#define TG(n) LockLayer(n)

#define Key_BSpc Key_Backspace
#define Key_VolUp Consumer_VolumeIncrement
#define Key_VolDn Consumer_VolumeDecrement
#define Key_LCBracket LSHIFT(Key_LeftBracket)
#define Key_RCBracket LSHIFT(Key_RightBracket)
#define Key_Star LSHIFT(Key_8)

#define Key_Up Key_UpArrow
#define Key_Down Key_DownArrow
#define Key_Left Key_LeftArrow
#define Key_Right Key_RightArrow

enum {
  _QWERTY,
  _LOWER,
  _RAISE,
  _MOUSE
};

/* *INDENT-OFF* */
KEYMAPS(
    /* QWERTY:
      +-------+-------+-------+-------+-------+
      | Q     | W     | E     | R     | T     |
      | A     | S     | D     | F     | G     +-------+
      | Z     | X     | C     | V     | B     | Tab   |
      | L1    | Bspc  | Ctrl  | Cmd   | Shift | Esc   |
      +-------+-------+-------+-------+-------+-------+

      .       +-------+-------+-------+-------+-------+
      .       | Y     | U     | I     | O     | P     |
      +-------| H     | J     | K     | L     | ;     |
      | Enter | N     | M     | ,     | .     | /     |
      | Space | Shift | Alt   | -     | '     | L2    |
      +-------+-------+-------+-------+-------+-------+
    */
  [_QWERTY] = KEYMAP_STACKED
  (
       Key_Q       ,Key_W    ,Key_E            ,Key_R        ,Key_T
      ,Key_A       ,Key_S    ,Key_D            ,Key_F        ,Key_G
      ,Key_Z       ,Key_X    ,Key_C            ,Key_V        ,Key_B          ,Key_Tab
      ,OSL(_LOWER) ,Key_BSpc ,OSM(LeftControl) ,OSM(LeftGui) ,OSM(LeftShift) ,Key_Esc

                  ,Key_Y           ,Key_U        ,Key_I     ,Key_O      ,Key_P
                  ,Key_H           ,Key_J        ,Key_K     ,Key_L      ,Key_Semicolon
       ,Key_Enter ,Key_N           ,Key_M        ,Key_Comma ,Key_Period ,Key_Slash
       ,Key_Space ,OSM(RightShift) ,OSM(LeftAlt) ,Key_Minus ,Key_Quote  ,OSL(_RAISE)
  ),

  /* _LOWER
     +-------+-------+-------+-------+-------+
     |       | Left  | Down  | Up    | Right |
     |  1    |   2   | 3     | 4     | 5     +-------+
     |       |       | PgDn  | PgUp  |       | Home  |
     | -L1-  | Del   | Ctrl  |  Cmd  | Shift |  Esc  |
     +-------+-------+-------+-------+-------+-------+

     .       +-------+-------+-------+-------+-------+
     .       |   {   |   }   |   [   |   ]   |  *    |
     +-------|   6   |   7   |   8   |   9   |  0    |
     | End   |       |       |       |       |  \    |
     | Enter | Shift |  Alt  |   =   |   `   | *L3*  |
     +-------+-------+-------+-------+-------+-------+
  */
  [_LOWER] = KEYMAP_STACKED
  (
       XXX   ,Key_Left   ,Key_Down   ,Key_Up     ,Key_Right
      ,Key_1 ,Key_2      ,Key_3      ,Key_4      ,Key_5
      ,XXX   ,XXX        ,Key_PageDn ,Key_PageUp ,XXX       ,Key_Home
      ,___   ,Key_Delete ,___        ,___        ,___       ,___

                 ,Key_LCBracket ,Key_RCBracket ,Key_LBracket ,Key_RBracket ,Key_Star
                 ,Key_6         ,Key_7         ,Key_8        ,Key_9        ,Key_0
      ,Key_End   ,XXX           ,XXX           ,XXX          ,XXX          ,Key_Slash
      ,Key_Enter ,___           ,___           ,Key_Equals   ,Key_Backtick ,TG(_MOUSE)
   ),

  /* _RAISE
     +-------+-------+-------+-------+-------+
     |  F11  | F12   |       | <<    |  >>   |
     |  F1   |  F2   |  F3   | F4    |  F5   +-------+
     |       |       |       |       |Ply/Pse| Mute  |
     | *L3*  |  Del  |  Ctrl | Cmd   | Shift |  Esc  |
     +-------+-------+-------+-------+-------+-------+

     .       +-------+-------+-------+-------+-------+
     .       |       |       |       |       |       |
     +-------| F6    | F7    | F8    | F9    | F10   |
     | Vol+  |  Vol- |       |       |       |  \    |
     | Enter | Shift |  Alt  |       |       | -L2-  |
     +-------+-------+-------+-------+-------+-------+
  */
  [_RAISE] = KEYMAP_STACKED
  (
       Key_F11    ,Key_F12    ,XXX    ,Consumer_ScanPreviousTrack ,Consumer_ScanNextTrack
      ,Key_F1     ,Key_F2     ,Key_F3 ,Key_F4                     ,Key_F5
      ,XXX        ,XXX        ,XXX    ,XXX                         ,Consumer_PlaySlashPause    ,Consumer_Mute
      ,TG(_MOUSE) ,Key_Delete ,___    ,___     ,___                        ,___

                 ,XXX       ,XXX    ,XXX    ,XXX    ,XXX
                 ,Key_F6    ,Key_F7 ,Key_F8 ,Key_F9 ,Key_F10
      ,Key_VolUp ,Key_VolDn ,XXX    ,XXX    ,XXX    ,Key_Slash
      ,Key_Enter ,___       ,___    ,XXX    ,XXX    ,___
   ),

  /* _MOUSE
     +-------+-------+-------+-------+-------+
     |       |       |  MUp  |       |  MBL  |
     |       | MLeft | MDown | MRght |  MBM  +-------+
     |       |       |       |       |  MBR  |       |
     | *L3*  |       |  Ctrl |  Cmd  | Shift |  Esc  |
     +-------+-------+-------+-------+-------+-------+

     .       +-------+-------+-------+-------+-------+
     .       | PrScr | WClr  |       |       |       |
     +-------|  Ins  |  WNW  |  WNE  |       |       |
     |       |       |  WSW  |  WSE  |       |       |
     |       | Shift |  Alt  |       |       | *L3*  |
     +-------+-------+-------+-------+-------+-------+
  */
  [_MOUSE] = KEYMAP_STACKED
  (
       XXX ,XXX        ,Key_mouseUp ,XXX        ,Key_mouseBtnL
      ,XXX ,Key_mouseL ,Key_mouseDn ,Key_mouseR ,Key_mouseBtnM
      ,XXX ,XXX        ,XXX         ,XXX        ,Key_mouseBtnR ,XXX
      ,___ ,XXX        ,___         ,___        ,___           ,___

           ,Key_PrintScreen ,Key_mouseWarpEnd ,XXX             ,XXX ,XXX
           ,Key_Insert      ,Key_mouseWarpNW  ,Key_mouseWarpNE ,XXX ,XXX
      ,XXX ,XXX             ,Key_mouseWarpSW  ,Key_mouseWarpSE ,XXX ,XXX
      ,XXX ,___             ,___              ,XXX             ,XXX ,___
   )
)
/* *INDENT-ON* */

KALEIDOSCOPE_INIT_PLUGINS(
  EEPROMSettings,
  EEPROMKeymap,
  Focus,
  FocusEEPROMCommand,
  FocusSettingsCommand,
  EscapeOneShot,
  OneShot,
  SpaceCadet,
  MouseKeys,
  Macros,
  Qukeys
);

void setup() {
  Kaleidoscope.setup();
  SpaceCadet.disable();
  EEPROMKeymap.setup(5);
}

void loop() {
  Kaleidoscope.loop();
}
