#include<iostream>
using namespace std;

//第一种解决方式，直接包含 源文件
//#include "Person7.cpp"

//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件

#include "Person7.hpp"//类模板

//类模板分文件编写问题以及解决

//template<class T1, class T2>
//class Person7 {
//public:
//	T1 m_Name;
//	T2 m_Age;
//	Person7(T1 name, T2 age);
//	void showPerson();
//};
//
////构造函数类外实现
//template<class T1, class T2>
//Person7<T1, T2>::Person7(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//};
//
////成员函数类外实现
//template<class T1, class T2>//没用到t1t2也要写
//void Person7<T1, T2>::showPerson() {
//	cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
//};

void test7() {
	Person7<string, int> P("Tom", 20);
	P.showPerson();
};

int main7() {
	test7();
	system("pause");
	return 0;
};