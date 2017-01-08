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
                          "Please select the type of swashplate you want to create a configuration for below:"));
    selection->addItem(tr("H1"),
                       tr("This setup expects a traditional airframe using two independent aileron servos "
                          "on their own channel (not connected by Y adapter) plus an elevator and a rudder."),
                       "H1",
                       SetupWizard::HELI_CCPM);

    selection->addItem(tr("H3"),
                       tr("This setup expects a traditional airframe using a single aileron servo or two servos "
                          "connected by a Y adapter plus an elevator and a rudder."),
                       "H3",
                       SetupWizard::HELI_CCPM);

    selection->addItem(tr("HR3"),
                       tr("This setup currently expects a flying-wing setup, an elevon plus rudder setup is not yet "
                          "supported. Setup should include only two elevons, and should explicitly not include a rudder."),
                       "HR3",
                       SetupWizard::HELI_CCPM);

    selection->addItem(tr("H140"),
                       tr("This setup expects a traditional glider airframe using two independent aileron servos "
                          "on their own channel (not connected by Y adapter) plus Vtail mixing elevator/rudder."),
                       "H140",
                       SetupWizard::HELI_CCPM);
    selection->addItem(tr("HE3"),
                       tr("This setup expects a traditional glider airframe using two independent aileron servos "
                          "on their own channel (not connected by Y adapter) plus Vtail mixing elevator/rudder."),
                       "HE3",
                       SetupWizard::HELI_CCPM);
    selection->addItem(tr("H4"),
                       tr("This setup expects a traditional glider airframe using two independent aileron servos "
                          "on their own channel (not connected by Y adapter) plus Vtail mixing elevator/rudder."),
                       "H4",
                       SetupWizard::HELI_CCPM);
}
