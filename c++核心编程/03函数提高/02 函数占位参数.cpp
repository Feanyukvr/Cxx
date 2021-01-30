#include <iostream>
using namespace std;

int func(int a, int) {//目前阶段占位参数用不到
	return a ;
}
int func2(int a, int =10) {//占位参数默认参数
	return a;
}

int main02() {
	cout << func(10, 20) << endl;


	system("pause");
	return 0;
}