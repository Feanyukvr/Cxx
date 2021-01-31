#include <iostream>
#include <string>
using namespace std;

class person {
public:
	static int m_a;
	
private:
	static int m_b;//有权限的
};
int person::m_a = 10;
int person::m_b = 20;

void test01() {
	//1.通过对象访问
	person p1;
	p1.m_a = 100;
	cout << "m_a=" << p1.m_a << endl;

	//2.通过类名访问
	person p2;
	p2.m_a = 200;
	cout << "m_a=" << p1.m_a << endl;
	cout << "m_a=" << p2.m_a << endl;//共用一个

	//cout << "m_a=" << p2.m_b << endl;
	//访问不到
}
int main() {
	test01();
	system("pause");
	return 0;
}