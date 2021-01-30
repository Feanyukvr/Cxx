#include <iostream>
using namespace std;


//引用重载
void fun(int&a) { //int &a=10,不合法
	cout << "hhhhhh21" << endl;
}
void fun(const int&a) {//const int &a=10,合法
	cout << "22222221" << endl;
}
//默认参数重载问题
void fun2(int a,int b=10) {//const int &a=10,合法
	cout << "22222221" << endl;
}
void fun2(int a) {//const int &a=10,合法
	cout << "22222221" << endl;
}
int main() {
	int a = 10;
	fun(a);
	const int b=10;
	fun(b);

	fun(10);//会走const，因为const int &a=10,合法，int &a=10,不合法

	//fun2(a);//两个都可以载入，会报错
	fun2(1, 2);//只能走第一个，不会出错

	system("pause");
	return 0;
}