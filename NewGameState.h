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
#ifndef OPENXCOM__NEWGAMESTATE_H
#define OPENXCOM__NEWGAMESTATE_H

#include "State_Interactive.h"
#include "LangString.h"
#include "Palette.h"
#include "Button.h"
#include "Window.h"
#include "Text.h"
#include "GeoscapeState.h"

/**
 * New Game window that displays a list
 * of possible difficulties for creating
 * a saved game.
 */
class NewGameState : public State
{
private:
	Button *_btnBeginner, *_btnExperienced, *_btnVeteran, *_btnGenius, *_btnSuperhuman;
	Window *_window;
	Text *_txtTitle;
public:
	/// Creates the New Game state.
	NewGameState(Game *game);
	/// Cleans up the New Game state.
	~NewGameState();
	/// Handler for clicking the Beginner button.
	void btnBeginnerClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Experienced button.
	void btnExperiencedClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Veteran button.
	void btnVeteranClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Genius button.
	void btnGeniusClick(SDL_Event *ev, int scale);
	/// Handler for clicking the Superhuman button.
	void btnSuperhumanClick(SDL_Event *ev, int scale);
};

#endif