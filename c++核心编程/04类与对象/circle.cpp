#include "circle.h"


	void Circle::setr(int r) {
		c_r = r;
	}
	int Circle::getr() {
		return c_r;
	}
	void Circle::setcenter(Point center) {
		c_center = center;
	}
    Point Circle::getcenter() {
		return c_center;
	}