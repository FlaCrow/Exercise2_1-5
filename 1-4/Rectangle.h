#pragma once
#include <math.h>
#include <iostream>
class Rectangle
{
	float rX, rY, lX, lY, a, b, p, s, rIn, rOut;
	static float totalArea;
	bool isSquare;
	static int quantity;

public:
	Rectangle(std::pair<float, float> leftAng, std::pair<float, float> rightAng);
	Rectangle(std::pair<float, float> leftAng, float aSide, float bSide);
	Rectangle();
	~Rectangle();

	static float getTotalArea();
	static int getQuantity();

	bool setCoords(float lXcrd, float lYcrd, float rXcrd, float rYcrd);
	bool isInside(float x, float y);

	float getA();
	float getB();
	float getP();
	float getS();
	std::pair<float, float> getLAngleCoords();
	std::pair<float, float> getRAngleCoords();
	float get_rIn();
	float get_rOut();
};

