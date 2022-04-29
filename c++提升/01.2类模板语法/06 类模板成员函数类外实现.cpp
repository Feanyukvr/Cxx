#include<iostream>
using namespace std;

//类模板成员函数类外实现
template<class T1,class T2>
class Person6{
public:
	Person6(T1 name, T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}

	void showPerson();
	//{
	//	cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
	//}

	T1 m_Name;
	T2 m_Age;
};

//构造函数类外实现
template<class T1,class T2>
Person6<T1, T2>::Person6(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
};

//成员函数类外实现
template<class T1, class T2>//没用到t1t2也要写
void Person6<T1, T2>::showPerson() {
	cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
};

void test6() {
	Person6<string, int> P("Tom", 20);
	P.showPerson();
};

int main06() {
	test6();
	system("pause");
	return 0;
};