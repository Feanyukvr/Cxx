#include<iostream>
using namespace std;

//1.值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//值传递无法改变，只能改变虚参
}
//2.地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.引用传递
void mySwap03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main03() {
	int a = 1;
	int b = 2;
	//1
	mySwap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//值传递无法改变

	mySwap02(&a, &b);//取值符号
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//地址交换

	mySwap03(a, b);//取值符号
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//地址交换


	system("pause");
	return 0;
}