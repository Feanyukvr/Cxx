#include <iostream>
using namespace std;

int func(int a, int b, int c) {
	return a + b + c;
}
int func2(int a, int b=20, int c=30) {//某位置有默认值，从此数向右都必须有默认值
	return a + b + c;
}

int func3(int a, int b=10 );//声明有默认参数，实现就不能有默认参数

int func3(int a, int b) {//声明和实现只能有一个有默认参数

	return a + b;
}

int main01() {
	cout <<func(10, 20, 30) << endl;
	cout << func2(10) << endl;
	cout << func2(10,30) << endl;//传了用传的，没传用旧的

	system("pause");
	return 0;
}