#include<iostream>
using namespace std;

int main01() {
	int a = 10;
	int &c = a;
	int *d = &a;
	//必须初始化 。     int &d;// 错误方式

	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	a = 100;
	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	c = 2;
	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	int b = 20;
	c = b;                      //值可变，指向不可变
	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	//c初始化后不可以修改
	//&c = b;     不可以
	system("pause");
	return 0;
}