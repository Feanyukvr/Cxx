#include <iostream>
#include <string>
using namespace std;

/*

class person {
public:
	~person() {
		cout << "析构函数的调用" << endl;
	}
	static void func() {//不属于某个函数，共用一个
		m_a = 100;
		//m_b = 200;//报错，不可以访问,修改 非静态成员变量，无法区分是哪个对象的
		cout << "静态函数的调用" << endl;//只能访问静态成员变量
	}
	static int  m_a;
	int m_b;
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
	person::func();

	//person::func2();报错，不可访问
}

int main() {
	test01();
	system("pause");
	return 0;
}*/