#include<iostream>
using namespace std;

int main01() {
	int a = 10;
	int *p;
	p = &a;
	cout << "a地址为：\t" << &a << endl;
	cout << "指针p地址为:\t" <<p<< endl;

	*p = 1000;//可以修改a
	cout << "a地址为：\t" << a << endl;
	cout << "指针p地址为:\t" << *p << endl;

	system("pause");
	return 0;
}