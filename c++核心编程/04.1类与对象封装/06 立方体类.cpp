#include <iostream>
#include<string>
using namespace std;

class cube {
private:
	int c_l;
public:
	void cl(int a) {
		c_l = a;
	}
	int c_s() {
		return c_l * c_l;
	}
	int c_v() {
		return c_l * c_l* c_l;
	}
	bool issameclass(cube &c2) {//局部变量判断是否相等
		if (c_s() == c2.c_s() && c_v() == c2.c_v()) {
			return true;
		}
		else {
			return false;
		}
	}
};

bool issame(cube &c1, cube &c2) {//全局变量判断是否相等
	if (c1.c_s() == c2.c_s() && c1.c_v() == c2.c_v()) {
		return true;
	}
	else {
		return false;
	}
}

int main06() {
	cube c1;
	c1.cl(5);
	cout << c1.c_s() << endl;
	cout << c1.c_v() << endl;
	
	cube c2;
	c2.cl(5);
	cout << c2.c_s() << endl;
	cout << c2.c_v() << endl;

	bool a = issame(c1, c2);//全局变量判断是否相等
	cout << "全局函数"<<a<<endl;

	bool b=c1.issameclass(c2);//局部变量判断是否相等
	cout << "局部函数" << b << endl;

	system("pause");
	return 0;
}