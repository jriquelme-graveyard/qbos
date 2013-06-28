/*
 * QBOS: tge/ImageButton.h
 *
 * boton con una imagen
 *
 *
 *
 * Copyright (C) 2006, Jorge Riquelme Santana <jriquelme@totex.cl>
 * 
 * QBOS is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License 
 * as published by the Free Software Foundation; either 
 * version 2 of the License, or (at your option) any later 
 * version.
 * 
 * QBOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with QBOS; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#if HAVE_CONFIG_H
	#include <config.h>
#endif

#ifndef TGE_IMAGE_BUTTON_H
#define TGE_IMAGE_BUTTON_H

#include "SurfaceWidget.h"


namespace tge
{

class ImageButton:public SurfaceWidget
{
public:
	enum State{NORMAL,MOUSEOVER,CLICKED};
private:
	State state_;
	SDL_Surface* normal_,*mouseover_,*clicked_;
protected:
	SDL_Surface* getSurface();
public:
	ImageButton(int x,int y,int z,SDL_Surface* normal,SDL_Surface* mouseover,SDL_Surface* clicked);
	virtual ~ImageButton();

	void setState(State state);
};

}

#endif
