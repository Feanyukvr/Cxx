#include<iostream>
using namespace std;
//函数不要返回局部变量地址
/*
int* func(int b) {
	b = 100;
	int a = 10;
	return &a;
}

int main() {
	int a = 10;
	int* p = func(a);
	cout << *p << endl;//执行完后自动释放，地址无效
	cout << *p << endl;
	system("pause");
	return 0;
}
*/