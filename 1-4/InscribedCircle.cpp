#include "InscribedCircle.h"

//probably meant circumscribed circle?
InscribedCircle::InscribedCircle(Rectangle& rect) {
	radius = rect.get_rOut();
}

float InscribedCircle::getRadius() {
	return radius;
}

InscribedCircle::~InscribedCircle() {

}


int main() {
	Rectangle a({ 0,20 }, { 10,30 });
	Rectangle c({ -10,-20 }, 10, 30);
	InscribedCircle b(c);
	b.getRadius();
	std::cout << a.getQuantity() << std::endl;
	std::cout << a.getTotalArea() << std::endl;
	a.~Rectangle();
	std::cout << a.getQuantity() << std::endl;
	std::cout << a.getTotalArea() << std::endl;
}