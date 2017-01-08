/**
 ******************************************************************************
 *
 * @file       helipage.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
 * @addtogroup
 * @{
 * @addtogroup HeliPage
 * @{
 * @brief
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "helipage.h"
#include "ui_helipage.h"

HeliPage::HeliPage(SetupWizard *wizard, QWidget *parent) :
    SelectionPage(wizard, QString(":/setupwizard/resources/Heli-CCPM.svg"), parent)
{}

HeliPage::~HeliPage()
{
}

void HeliPage::initializePage(VehicleConfigurationSource *settings)
{
    Q_UNUSED(settings);
}

bool HeliPage::validatePage(SelectionItem *selectedItem)
{
    getWizard()->setVehicleSubType((SetupWizard::VEHICLE_SUB_TYPE)selectedItem->id());
    return true;
}

void HeliPage::setupSelection(Selection *selection)
{
    selection->setTitle(tr("Helicopter Configuration"));
    selection->setText(tr("This part of the wizard will set up the flight controller for use with an helicopter "
                          "Please select the correct type of swashplate you have on your model:"));
    selection->addItem(tr("H1"),
                       tr("\"Pure Function\" or \"single servo\" A \"single servo\" swashplate uses "
                          "one servo for each axis: aileron,elevator (cyclic pitch), and collective pitch, "
                          ),
                       "H1",
                       SetupWizard::HELI_CCPM);

    selection->addItem(tr("H3"),
                       tr("Pushrods positioned as shown. With Aileron input, the aileron and pitch servos tilt the swashplate"
                          "left and right; with Elevator input, the three servos tilt the swashplate fore and aft; "
                          "with Pitch input, all three servos raise the swashplate up and down."),
                       "H3",
                       SetupWizard::HELI_CCPM);

    selection->addItem(tr("HR3"),
                       tr("Pushrods positioned as shown. With Aileron input, the aileron and pitch servos tilt the swashplate"
                          "left and right; with Elevator input, the three servos tilt the swashplate fore and aft; "
                          "with Pitch input, all three servos raise the swashplate up and down."),
                         "HR3",
                       SetupWizard::HELI_CCPM);

    selection->addItem(tr("H140"),
                       tr("140 degree CCPM. Pushrods positioned as shown. Fundamentally, the servo operations of H-3 type are"
                          " almost that same as HR3 type. However, the servo arrangement for elevator operation differs. "
                          "140 degree CCPM offers smoother operation of the combined servos and an equal cyclic rate all around. "
                          "On a 120 degree setup, the left/right cyclic is slightly faster than the fore/aft cyclic."),
                       "H140",
                       SetupWizard::HELI_CCPM);
    selection->addItem(tr("HE3"),
                       tr("Pushrods positioned as shown. With Aileron input, the aileron and pitch servos tilt"
                          " the swashplate left and right; with Elevator input, the servos tilt the swashplate"
                          " fore and aft; with Pitch input, all three servos raise the swashplate up and down. "
                          "Most commonly used for Electronic Helis."),
                       "HE3",
                       SetupWizard::HELI_CCPM);
    selection->addItem(tr("H4"),
                       tr("Pushrods positioned as shown. Swash is a 4 servo ccpm, with the servos at 90 degrees to each other."),
                       "H4",
                       SetupWizard::HELI_CCPM);
}
