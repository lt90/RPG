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
 * along with OpenXcom.  If not, see <http:///www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM__GEOSCAPESTATE_H
#define OPENXCOM__GEOSCAPESTATE_H

#include <sstream>
#include "State_Interactive.h"
#include "Game.h"
#include "Palette.h"
#include "Surface.h"
#include "Globe.h"
#include "Text.h"
#include "CustomButton.h"
#include "Timer.h"
#include "GameTime.h"
#include "OptionsState.h"
#include "InterceptState.h"
#include "BasescapeState.h"
#include "GraphsState.h"
#include "FundingState.h"
#include "MonthlyReportState.h"

using namespace std;

#define LONGITUDE_SPEED 0.2
#define LATITUDE_SPEED 0.1

/**
 * Geoscape screen which shows an overview of
 * the world and lets the player manage the game.
 */
class GeoscapeState : public State
{
private:
	Surface *_bg;
	Globe *_globe;
	CustomButton *_btnIntercept, *_btnBases, *_btnGraphs, *_btnUfopaedia, *_btnOptions, *_btnFunding;
	CustomButton *_timer;
	CustomButton *_btn5Secs, *_btn1Min, *_btn5Mins, *_btn30Mins, *_btn1Hour, *_btn1Day;
	InteractiveSurface *_btnRotateLeft, *_btnRotateRight, *_btnRotateUp, *_btnRotateDown, *_btnZoomIn, *_btnZoomOut;
	Text *_txtHour, *_txtHourSep, *_txtMin, *_txtMinSep, *_txtSec, *_txtWeekday, *_txtDay, *_txtMonth, *_txtYear;
	Timer *_rotTimer, *_gameTimer;
	double _rotLon, _rotLat;
	bool _pause;
public:
	//// Creates the Geoscape state.
	GeoscapeState(Game *game);
	/// Cleans up the Geoscape state.
	~GeoscapeState();
	/// Updates the palette and timer.
	void init();
	/// Runs the timers.
	void think();
	/// Rotates the globe.
	void globeRotate();
	/// Displays the game time/date.
	void timeDisplay();
	/// Advances the game timer.
	void timeAdvance();
	/// Trigger whenever a second passes.
	void timeSecond();
	/// Trigger whenever an hour passes.
	void timeHour();
	/// Trigger whenever a month passes.
	void timeMonth();
	/// Handler for clicking the globe.
	void globeClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Intercept button.
	void btnInterceptClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Bases button.
	void btnBasesClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Graph button.
	void btnGraphsClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Ufopaedia button.
	void btnUfopaediaClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Options button.
	void btnOptionsClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Funding button.
	void btnFundingClick(SDL_Event *ev, int scale);
	/// Handler for pressing the Rotate Left arrow.
	void btnRotateLeftPress(SDL_Event *ev, int scale);
	/// Handler for releasing the Rotate Left arrow.
	void btnRotateLeftRelease(SDL_Event *ev, int scale);
	/// Handler for pressing the Rotate Right arrow.
	void btnRotateRightPress(SDL_Event *ev, int scale);
	/// Handler for releasing the Rotate Right arrow.
	void btnRotateRightRelease(SDL_Event *ev, int scale);
	/// Handler for pressing the Rotate Up arrow.
	void btnRotateUpPress(SDL_Event *ev, int scale);
	/// Handler for releasing the Rotate Up arrow.
	void btnRotateUpRelease(SDL_Event *ev, int scale);
	/// Handler for pressing the Rotate Down arrow.
	void btnRotateDownPress(SDL_Event *ev, int scale);
	/// Handler for releasing the Rotate Down arrow.
	void btnRotateDownRelease(SDL_Event *ev, int scale);
	/// Handler for clicking the Zoom In icon.
	void btnZoomInClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Zoom Out icon.
	void btnZoomOutClick(SDL_Event *ev, int scale);
};

#endif