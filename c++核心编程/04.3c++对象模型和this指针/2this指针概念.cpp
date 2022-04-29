#include <iostream>
#include <string>
using namespace std;

//通过4.3.1我们知道在C++中成员变量和成员函数是分开存储的
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
//那么问题是：这一块代码是如何区分那个对象调用自己的呢？

//c++通过提供特殊的对象指针，this指针，解决上述问题.*this指针指向被调用的成员函数所属的对象
//this指针是隐含每一个非静态成员函数内的一种指针!!静态没有，不属于某个对象
//this指针不需要定义，直接使用即可

//this指针的用途：
//当形参和成员变量同名时，可用this指针来区分
//在类的非静态成员函数中返回对象本身，可使用return * this


//1.解决名称冲突

/*
class Person{
public:
	int age;
	//Person(int age) {//报错，age不明
	//   age = age;
	//}
	Person(int age){
		//1、当形参和成员变量同名时，可用this指针来区分
		this->age = age;
	}
	void PersonAddage(Person p) {
		this->age += p.age;
	}
	Person &PersonAddPerson(Person p) {//返回本体，和返回值
		this->age += p.age;
		//返回对象本身
		return *this;
	}
};
void test01(){
	Person p1(2);
	cout << "p1.age = " << p1.age << endl;

	Person p2(18);
	p2.PersonAddage(p1);
	cout << "p2.age = " << p2.age << endl;

	//链式编程思想
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout << "p2.链式age = " << p2.age << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}*/