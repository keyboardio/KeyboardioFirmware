/* -*- mode: c++ -*-
 * kaleidoscope::simulator - Testing API for Kaleidoscope
 * Copyright (C) 2019  noseglasses (shinynoseglasses@gmail.com)
 * Copyright (C) 2020  Keyboard.io, Inc
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

#ifdef KALEIDOSCOPE_VIRTUAL_BUILD

#include "kaleidoscope/simulator/framework/Simulator.h"
#include "kaleidoscope/simulator/framework/Visualization.h"
#include "kaleidoscope/simulator/framework/LED_Checks.h"

#include "kaleidoscope/simulator/framework/reports/BootKeyboardReport_.h"
#include "kaleidoscope/simulator/framework/reports/KeyboardReport_.h"
#include "kaleidoscope/simulator/framework/reports/MouseReport_.h"
#include "kaleidoscope/simulator/framework/reports/AbsoluteMouseReport_.h"

#include "kaleidoscope/simulator/framework/actions/Grouped.h"
#include "kaleidoscope/simulator/framework/actions/CustomAction.h"
#include "kaleidoscope/simulator/framework/actions/AssertNumOverallReportsEquals.h"
#include "kaleidoscope/simulator/framework/actions/Action_.h"
#include "kaleidoscope/simulator/framework/actions/AssertCycleIsNth.h"
#include "kaleidoscope/simulator/framework/actions/AssertElapsedTimeGreater.h"

#include "kaleidoscope/simulator/framework/actions/generic_report/AssertReportEmpty.h"
#include "kaleidoscope/simulator/framework/actions/generic_report/AssertReportEquals.h"
#include "kaleidoscope/simulator/framework/actions/generic_report/DumpReport.h"
#include "kaleidoscope/simulator/framework/actions/generic_report/AssertReportIsNthInCycle.h"
#include "kaleidoscope/simulator/framework/actions/generic_report/CustomReportAction.h"
#include "kaleidoscope/simulator/framework/actions/generic_report/AssertCycleGeneratesNReports.h"

#include "kaleidoscope/simulator/framework/actions/keyboard_report/AssertModifiersActive.h"
#include "kaleidoscope/simulator/framework/actions/keyboard_report/AssertAnyKeycodeActive.h"
#include "kaleidoscope/simulator/framework/actions/keyboard_report/AssertKeycodesActive.h"
#include "kaleidoscope/simulator/framework/actions/keyboard_report/AssertAnyModifierActive.h"

#endif
