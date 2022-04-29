#include<iostream>
using namespace std;

#include <string>
//��ģ���������������

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
		cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
	};
};

//1��ָ����������                                 ���
void printPerson1(Person4<string, int>& p) {
	p.showPerson();
};

void test41() {
	Person4<string, int>p("�����", 100);
	printPerson1(p);
};

//2������ģ�廯
template<class T1,class T2>
void printPerson2(Person4<T1, T2>& p) {
	p.showPerson();
	cout << "T1 ������Ϊ�� " << typeid(T1).name() << endl;//ִ���в鿴ģ�����������
	cout << "T2 ������Ϊ�� " << typeid(T2).name() << endl;
};

void test42() {
	Person4<string, int>p("��˽�", 90);
	printPerson2(p);
};

//3��������ģ�廯
template<class T3>
void printPerson3(T3 p) {
	p.showPerson();
	cout << "T3 ������Ϊ�� " << typeid(T3).name() << endl;
};

void test43() {
	Person4<string, int>p("��ɮ", 30);
	printPerson3(p);
};

int main4() {
	test41();
	test42();
	test43();
	system("pause");
	return 0;
};