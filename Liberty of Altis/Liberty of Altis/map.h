#pragma once
#include "environmentalObjs.h"

class map :
	public environmentalObjs
{
public :
	void gotoxy(int x, int y);
	virtual void drawmap();
	void color(int c);
};

