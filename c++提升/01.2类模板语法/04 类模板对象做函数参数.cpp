#include<iostream>
using namespace std;

#include <string>
//类模板对象做函数参数

template<class T1,class T2>
class Person4{
public:
	T1 m_Name;
	T2 m_Age;
	Person4(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	void showPerson() {
		cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
	};
};

//1、指定传入类型                                 最常用
void printPerson1(Person4<string, int>& p) {
	p.showPerson();
};

void test41() {
	Person4<string, int>p("孙悟空", 100);
	printPerson1(p);
};

//2、参数模板化
template<class T1,class T2>
void printPerson2(Person4<T1, T2>& p) {
	p.showPerson();
	cout << "T1 的类型为： " << typeid(T1).name() << endl;//执行中查看模板的数据类型
	cout << "T2 的类型为： " << typeid(T2).name() << endl;
};

void test42() {
	Person4<string, int>p("猪八戒", 90);
	printPerson2(p);
};

//3、整个类模板化
template<class T3>
void printPerson3(T3 p) {
	p.showPerson();
	cout << "T3 的类型为： " << typeid(T3).name() << endl;
};

void test43() {
	Person4<string, int>p("唐僧", 30);
	printPerson3(p);
};

int main4() {
	test41();
	test42();
	test43();
	system("pause");
	return 0;
};