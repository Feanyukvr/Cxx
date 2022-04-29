#include <iostream>
using namespace std;
/*
//构造函数的调用规则
//1.创建一个类，c++编译器会给每个类添加三个函数
//默认函数
//析构函数
//拷贝函数
//2.手打拷贝构造，编译器不再提供默认有参构造（默认拷贝全属性）
//  手打有参构造，编译器不再提供默认构造，提供拷贝构造

class person {
public:
	int age;
	person() {//默认构造
		cout << "无参构造函数的调用" << endl;
	}
	person(int a) {
		age = a;
		cout << "参数构造函数的调用" << endl;
	}
	//拷贝构造函数的调用
	
	//person(const person& a) {
		//age = a.age;
		//cout << "拷贝构造函数的调用" << endl;
//	}
	
	~person() {
		cout << "析构函数的调用" << endl;
	}
};
//1.默认提供拷贝函数
void test01() {
	person p1;
	p1.age = 18;
	person p2(p1);//默认提供
	cout << "p2的年级为" << p2.age << endl;
}
void test02() {
	person p(20);
	person p2(p);
	cout << "p2的年级为" << p2.age << endl;
}
int main() {
	test01();
	cout << "p2的" << endl;
	test02();
	system("pause");
	return 0;
}
*/