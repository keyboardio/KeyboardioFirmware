/* -*- mode: c++ -*-
 * Kaleidoscope-Escape-OneShot -- Turn ESC into a key that cancels OneShots, if active.
 * Copyright (C) 2016, 2017, 2018  Keyboard.io, Inc
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

#include "kaleidoscope/Runtime.h"
#include <Kaleidoscope-OneShot.h>
#include <Kaleidoscope-Escape-OneShot.h>
#include "kaleidoscope/keyswitch_state.h"

namespace kaleidoscope {
namespace plugin {

EventHandlerResult EscapeOneShot::onKeyswitchEvent(Key &mapped_key, KeyAddr key_addr, uint8_t key_state) {
  // We only act on an escape key that has just been pressed, and not
  // generated by some other plugin. Also, only if at least one
  // OneShot key is active and/or sticky. Last, only if there are no
  // OneShot keys currently being held.
  if (mapped_key == Key_Escape &&
      keyToggledOn(key_state) &&
      !(key_state & INJECTED) &&
      (::OneShot.isActive() || ::OneShot.isSticky()) &&
      !::OneShot.isPressed()) {
    // Cancel all OneShot keys
    ::OneShot.cancel(true);
    // Suppress the escape key event, and mask the key until it's released
    mapped_key = Key_NoKey;
    return EventHandlerResult::EVENT_CONSUMED;
  }

  // Otherwise, do nothing
  return EventHandlerResult::OK;
}

}
}

kaleidoscope::plugin::EscapeOneShot EscapeOneShot;
