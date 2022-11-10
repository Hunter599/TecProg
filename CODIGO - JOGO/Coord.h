#pragma once

class Coord
{
private:
	float x;
	float y;
public:
	Coord(float x =0, float y=0);
	~Coord();

	void setVal(float x, float y);
	float getX() const;
	float getY() const;

	void addX(float vx);
	void addY(float vy);


	


};
