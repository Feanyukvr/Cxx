#include <iostream>
using namespace std;
//不要返回局部变量引用
int& text01(){
	int a = 10;//局部变量存放在栈区
	return a;
}
int& text02() {
	static int a = 10;//放在了全局区
	return a;
}

int main04() {
	int &ref= text01();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;//返回引用第二次错误

	int &ref2 = text02();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;//返回引用第二次错误

	text02()=1000;//函数返回为引用，函数可以作为左值
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	system("pause");
	return 0;
}