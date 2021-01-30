#pragma once
#include "point.h"

class Circle {
public:
	void setr(int r);

	int getr();
	void setcenter(Point center);
	Point getcenter();
private:
	int c_r;
	Point c_center;
};
