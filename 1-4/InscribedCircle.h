#pragma once
#include "Rectangle.h"

class InscribedCircle
{
	float radius;

public:
	InscribedCircle(Rectangle& rect);
	float getRadius();
	~InscribedCircle();

};

