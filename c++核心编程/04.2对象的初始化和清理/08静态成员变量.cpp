#include <iostream>
#include <string>
using namespace std;
//*
class person {
public:
	static int m_a;//全部对象共享的值
	               //编译阶段分配内存
	               //类内声明，类外初始化
private:
	static int m_b;//有权限的
};
int person::m_a = 10;//初始化//person下的静态成员
int person::m_b = 20;

void test01() {
	//1.通过对象访问
	person p1;
	p1.m_a = 100;
	cout << "m_a=" << p1.m_a << endl;

	person p2;
	p2.m_a = 200;//要改就一起改
	cout << "m_a=" << p1.m_a << endl;
	cout << "m_a=" << p2.m_a << endl;//共用一个
	//cout << "m_a=" << p2.m_b << endl;
	//访问不到，外部无访问权限
	// 
    //2.通过类名访问
	cout << person::m_a << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
//*/