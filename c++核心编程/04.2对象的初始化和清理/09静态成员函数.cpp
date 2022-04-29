#include <iostream>
#include <string>
using namespace std;
/*
class person {
public:
	static int  m_a;
	int m_b;
public:
	~person() {
		cout << "析构函数的调用" << endl;
	}
	//静态成员函数
	static void func() {//不属于某个函数，共用一个
		m_a = 100;
		//m_b = 200;//不能访问非静态成员变量，p1，p2对象不一样，无法区分
		cout << "静态函数的调用" << endl;//只能访问静态成员变量
	}

	//静态函数也有访问权限
private:
	static void func2() {
		cout << "静态函数2的调用" << endl;
	}
};
int person::m_a = 0;

void test01() {
	//1.通过对象访问
	person p;
	p.func();

	//2.通过类名访问
	person::func();//没有析构函数

	//person::func2();报错，不可访问私有静态成员函数
}

int main() {
	test01();
	cout << "静态over的调用" << endl;
	system("pause");
	return 0;
}
*/