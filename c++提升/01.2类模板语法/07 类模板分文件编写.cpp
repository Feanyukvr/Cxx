#include<iostream>
using namespace std;

//��һ�ֽ����ʽ��ֱ�Ӱ��� Դ�ļ�
//#include "Person7.cpp"

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�

#include "Person7.hpp"//��ģ��

//��ģ����ļ���д�����Լ����

//template<class T1, class T2>
//class Person7 {
//public:
//	T1 m_Name;
//	T2 m_Age;
//	Person7(T1 name, T2 age);
//	void showPerson();
//};
//
////���캯������ʵ��
//template<class T1, class T2>
//Person7<T1, T2>::Person7(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//};
//
////��Ա��������ʵ��
//template<class T1, class T2>//û�õ�t1t2ҲҪд
//void Person7<T1, T2>::showPerson() {
//	cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
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