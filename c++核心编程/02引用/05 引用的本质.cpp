#include <iostream>
using namespace std;
//不要返回局部变量引用
void func(int& ref) {
	ref = 100;//局部变量存放在栈区
}

int main05() {
	int a =10;
	int& ref = a;//int* const ref=&a;
	ref = 20;//自动转化为 *ref

	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
	func(a);



	system("pause");
	return 0;
}