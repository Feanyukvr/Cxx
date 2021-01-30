#include<iostream>
using namespace std;

void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
}
void swap02(int *p1, int *p2) {
	int temp = *p1;//地址指向的格子数值交换
	*p1 = *p2;
	*p2 = temp;
	cout << "swap02 a=" << *p1 << endl;
	cout << "swap02 b=" << *p2 << endl;
}



int main07() {
	int a = 10, b = 20;
	swap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");
	return 0;
}