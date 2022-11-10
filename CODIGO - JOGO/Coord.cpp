#include "Coord.h"

Coord::Coord(float x, float y)
{
	this->x = x;
	this->y = y;
}


Coord::~Coord() {}

void Coord::setVal(float x, float y) 
{
	x = x;
	y = y;
}
float Coord::getX() const
{
	return x;
}
float Coord::getY() const 
{
	return y;
}

void Coord::addX(float vx) 
{
	x += vx;
}

void Coord::addY(float vy) 
{
	y += vy;
}