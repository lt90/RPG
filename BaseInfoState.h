/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM__BASEINFOSTATE_H
#define OPENXCOM__BASEINFOSTATE_H

#include "State_Interactive.h"
#include "LangString.h"
#include "Palette.h"
#include "Bar.h"
#include "Button.h"
#include "Text.h"
#include "TextEdit.h"
#include "Surface.h"

/**
 * Base Info screen that shows all the 
 * stats of a base from the Basescape.
 */
class BaseInfoState : public State
{
private:
	Base *_base;

	Button *_btnOk, *_btnTransfers, *_btnStores, *_btnMonthlyCosts;
	Surface *_bg;
	
	TextEdit *_edtBase;
	Text *_txtPersonnel, *_txtSoldiers, *_txtEngineers, *_txtScientists;
	Text *_numSoldiers, *_numEngineers, *_numScientists;
	Bar *_barSoldiers, *_barEngineers, *_barScientists;

	Text *_txtSpace, *_txtQuarters, *_txtStores, *_txtLaboratories, *_txtWorkshops, *_txtHangars;
	Text *_numQuarters, *_numStores, *_numLaboratories, *_numWorkshops, *_numHangars;
	Bar *_barQuarters, *_barStores, *_barLaboratories, *_barWorkshops, *_barHangars;

	Text *_txtDefence, *_txtShortRange, *_txtLongRange;
	Text *_numDefence, *_numShortRange, *_numLongRange;
	Bar *_barDefence, *_barShortRange, *_barLongRange;
public:
	/// Creates the Base Info state.
	BaseInfoState(Game *game, Base *base);
	/// Cleans up the Base Info state.
	~BaseInfoState();
	/// Handler for clicking the OK button.
	void btnOkClick(SDL_Event *ev, int scale);
};

#endif