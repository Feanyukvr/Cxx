
#include "circle.h"



void isInCircle(Circle& c, Point& p){
	int distance =
		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
		(c.getcenter().getx() - p.getx()) * (c.getcenter().gety() - p.gety());

	int rDistance = c.getr() * c.getr();

	if (distance == rDistance){
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance){
		cout << "����Բ��" << endl;
	}
	else{
		cout << "����Բ��" << endl;
	}
}


int main()
{
	Circle c;
	c.setr(10);
	Point center;
	center.setx(10);
	center.sety(0);
	c.setcenter(center);

	Point p;
	p.setx(10);
	p.sety(12);

	isInCircle(c, p);	//�жϹ�ϵ
	system("pause");
	return 0;
}