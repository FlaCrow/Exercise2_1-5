#include "Rectangle.h"

int Rectangle::quantity = 0;
float Rectangle::totalArea = 0;
//in order to differentiate constructors, will be using std::pair for angle coordinates
Rectangle::Rectangle(std::pair<float, float> leftAng, std::pair<float, float> rightAng) {
	if ((rightAng.first > leftAng.first) && (rightAng.second > leftAng.second)) {
		lX = leftAng.first;
		lY = leftAng.second;
		rX = rightAng.first;
		rY = rightAng.second;
		a = rX - lX;
		b = rY - lY;
		p = 2 * a + 2 * b;
		s = a * b;
		rOut = pow(a * a + b * b, 0.5) / 2;
		if (a == b) {
			isSquare = true;
			rIn = a / 2;
		}
		else {
			isSquare = false;
			rIn = 0;
		}
		quantity++;
		totalArea += s;
	}
	//if incorrect data is passed. make object with zeroes.
	else {
		lX = 0;
		lY = 0;
		rX = 0;
		rY = 0;
		a = 0;
		b = 0;
		p = 0;
		s = 0;
		rOut = 0;
		isSquare = false;
		rIn = 0;
		quantity++;
	}
}


Rectangle::Rectangle(std::pair<float, float> leftAng, float aSide, float bSide) {
	lX = leftAng.first;
	lY = leftAng.second;
	a = aSide;
	b = bSide;
	rX = lX + a;
	rY = lY + b;
	p = 2 * a + 2 * b;
	s = a * b;
	rOut = pow(a * a + b * b, 0.5) / 2;
	if (a == b) {
		isSquare = true;
		rIn = a / 2;
	}
	else {
		isSquare = false;
		rIn = 0;
	}
	quantity++;
	totalArea += s;
}



Rectangle::Rectangle() {
	a = 20;
	b = 10;
	lX = 0;
	lY = 0;
	rX = lX + a;
	rY = lY + b;
	p = 2 * a + 2 * b;
	s = a * b;
	rOut = pow(a * a + b * b, 0.5) / 2;
	isSquare = false;
	rIn = 0;
	quantity++;
	totalArea += s;
}

float Rectangle::Rectangle::getA() {
	return a;
}
float Rectangle::Rectangle::getB() {
	return b;
}
float Rectangle::Rectangle::getP() {
	return p;
}
float Rectangle::Rectangle::getS() {
	return s;
}
std::pair<float, float> Rectangle::getLAngleCoords() {
	return std::pair<float, float>(lX, lY);
}

std::pair<float, float> Rectangle::getRAngleCoords() {
	return std::pair<float, float>(rX, rY);
}

float Rectangle::get_rIn() {
	return rIn;
}
float Rectangle::get_rOut() {
	return rOut;
}

bool Rectangle::setCoords(float lXcrd, float lYcrd, float rXcrd, float rYcrd) {
	if ((rXcrd <= lXcrd) || (rYcrd <= lYcrd)) return false;
	totalArea -= s;
	lX = lXcrd;
	lY = lYcrd;
	rX = rXcrd;
	rY = rYcrd;
	a = rX - lX;
	b = rY - lY;
	p = 2 * a + 2 * b;
	s = a * b;
	rOut = pow(a * a + b * b, 0.5) / 2;
	if (a == b) {
		isSquare = true;
		rIn = a / 2;
	}
	else {
		isSquare = false;
		rIn = 0;
	}

	totalArea += s;
	return true;
}

bool Rectangle::isInside(float x, float y) {
	if (((x >= lX) && (x <= rX)) && ((y >= lY) && (y <= rY))) return true;
	return false;
}
float Rectangle::getTotalArea() {
	return totalArea;
}

int Rectangle::getQuantity() {
	return quantity;
}

Rectangle::~Rectangle() {
	quantity--;
	totalArea -= s;
}
