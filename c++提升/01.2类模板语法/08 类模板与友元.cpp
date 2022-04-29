#include<iostream>
using namespace std;

//通过全局函数 打印Person信息
//提前让编译器知道Person类存在
template<class T1, class T2>
class Person8;

//类外实现
template<class T1, class T2>
void printPerson2(Person8<T1, T2> p) {
	cout << "类外实现 --- 姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
};

template<class T1,class T2>
class Person8{
private:
	T1 m_Name;
	T2 m_Age;
	//全局函数 类内实现
public:
	Person8(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	friend void printPerson(Person8<T1, T2> p) {
		cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
	};
	//全局函数 类外实现
	//加空模板参数列表
	//如果全局函数 是类外实现，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person8<T1, T2> p);
};

//1、全局函数在类内实现
void test81() {
	Person8<string, int>p("Tom", 20);
	printPerson(p);
};

//2、全局函数在类外实现
void test82() {
	Person8<string, int>p("Jerry", 20);
	printPerson2(p);
};

int main8() {
	test81();
	test82();
	system("pause");
	return 0;
};