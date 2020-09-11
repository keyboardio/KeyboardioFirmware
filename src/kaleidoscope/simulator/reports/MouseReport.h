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

#include "MultiReport/Mouse.h"
#include "kaleidoscope/simulator/interface/reports/MouseReport_.h"

// Undefine some macros defined by Arduino
//
#undef min
#undef max

#include <vector>
#include <stdint.h>
#include <ostream>

namespace kaleidoscope {
namespace simulator {

class Simulator;

/// @brief An interface hat facilitates analyzing mouse reports.
///
class MouseReport : public interface::MouseReport_ {

public:

    typedef HID_MouseReport_Data_t ReportDataType;

    static constexpr uint8_t hid_report_type_ = HID_REPORTID_MOUSE;

    /// @brief Default consturctor.
    /// @details Creates an empty report.
    ///
    MouseReport();

    /// @brief Constructs based on a raw pointer to report data.
    /// @details Only use this if you know what you are doning!
    /// @param data The address where the report data starts.
    ///
    MouseReport(const void *data);

    /// @brief Constructs based on a report data object.
    /// @param report_data The report data object to read.
    ///
    MouseReport(const HID_MouseReport_Data_t &report_data);

    template<typename..._Args>
    static std::shared_ptr<MouseReport> create(_Args &&... args) {
      return std::shared_ptr<MouseReport> {
        new MouseReport{std::forward<_Args>(args)...}
      };
    }

    virtual std::shared_ptr<interface::Report_> clone() const override;

    /// @brief Checks equality with another report.
    /// @param other Another report to compare with.
    /// @returns [bool] True if both reports are equal.
    ///
    virtual bool equals(const interface::Report_ &other) const override;

    /// @brief Checks if a set of buttons is pressed.
    /// @param button_state The state of the mouse buttons to check.
    /// @returns True if the button state matches the given one.
    ///
    virtual bool areButtonsPressed(uint8_t button_state) const override;

    /// @brief Queries if the left button is pressed.
    /// @returns True if the left button is pressed.
    ///
    virtual bool isLeftButtonPressed() const override;

    /// @brief Queries if the middle button is pressed.
    /// @returns True if the middle button is pressed.
    ///
    virtual bool isMiddleButtonPressed() const override;

    /// @brief Queries if the right button is pressed.
    /// @returns True if the right button is pressed.
    ///
    virtual bool isRightButtonPressed() const override;

    /// @brief Queries the x-movement stored in the report.
    /// @returns The x-movement.
    ///
    virtual int8_t getXMovement() const override;

    /// @brief Queries the y-movement stored in the report.
    /// @returns The y-movement.
    ///
    virtual int8_t getYMovement() const override;

    /// @brief Queries the verical wheel movement.
    /// @returns The vertical wheel movement.
    ///
    virtual int8_t getVerticalWheel() const override;

    /// @brief Queries the horizontal wheel movement.
    /// @returns The horizontal wheel movement.
    ///
    virtual int8_t getHorizontalWheel() const override;

    /// @brief Checks if the report is empty.
    /// @details Empty means that no buttons are active and
    ///        no motion or wheel activity is present.
    ///
    virtual bool isEmpty() const override;

    /// @brief Writes a formatted representation of the keyboard report
    ///        to the simulator's log stream.
    /// @param add_indent An additional indentation string.
    ///
    virtual void dump(const interface::Simulator_ &simulator, const char *add_indent = "") const override;

    /// @brief Associates the object with new report data.
    /// @param report_data The new report data struct.
    ///
    void setReportData(const HID_MouseReport_Data_t &report_data);

    const HID_MouseReport_Data_t& getReportData() const {
      return report_data_;
    }

    static const char *typeString() {
      return "mouse";
    }
    virtual const char *getTypeString() const override {
      return typeString();
    }

private:

    HID_MouseReport_Data_t report_data_;
  };

} // namespace simulator
} // namespace kaleidoscope

#endif // KALEIDOSCOPE_VIRTUAL_BUILD
