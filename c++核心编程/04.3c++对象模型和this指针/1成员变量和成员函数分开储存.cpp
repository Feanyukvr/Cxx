#include <iostream>
#include <string>
using namespace std;

/*

//在C++中，类内的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上

class Person {
public:
	//非静态成员变量占对象空间
	int mA;
	//静态成员变量不占对象空间
	static int mB;
	//函数也不占对象空间，所有函数共享一个函数实例
	Person() {
		mA = 0;
	}
	void func() {
		cout << "mA:" << this->mA << endl;
	}
	//静态成员函数也不占对象空间
	static void sfunc() {
	}
};
void text01() {
	Person p;
	cout << "size of p=" << sizeof(p) << endl;
	//空对象占用空间为1，c++编译器特性。为了区分空对象占内存的位置，每个对象都应该有独一无二的位置
}
int main() {
	cout << sizeof(Person)<<endl;
	text01();
	system("pause");
	return 0;
}
*/