#include<iostream>
using namespace std;

int main05() {
    int a = 10, b = 20;

	const int* p1 = &a;//指针指向可以改，指的框内的值不能改，(改值直接报错)     常量指针
	p1 = &b;
	cout << *p1 << endl;
	int * const p2 = &a;//指针指向不可以改，指的框内的值可以改，(改值直接报错)  指针常量
	*p2 = 20;
	cout << *p2 << endl;
	
	const int * const p3 = &a;//都不能改

	cout << *p2 << endl;


	system("pause");
	return 0;
}