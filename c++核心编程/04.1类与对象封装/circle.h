#pragma once
#include "point.h"

class Circle {
private:
	int c_r;
	Point c_center;
public:
	void setr(int r);
	int getr();
	void setcenter(Point center);
	Point getcenter();

};
