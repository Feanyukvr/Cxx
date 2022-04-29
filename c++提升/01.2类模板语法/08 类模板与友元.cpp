#include<iostream>
using namespace std;

//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ
//��ǰ�ñ�����֪��Person�����
template<class T1, class T2>
class Person8;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person8<T1, T2> p) {
	cout << "����ʵ�� --- ������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
};

template<class T1,class T2>
class Person8{
private:
	T1 m_Name;
	T2 m_Age;
	//ȫ�ֺ��� ����ʵ��
public:
	Person8(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	friend void printPerson(Person8<T1, T2> p) {
		cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
	};
	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ��� ������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person8<T1, T2> p);
};

//1��ȫ�ֺ���������ʵ��
void test81() {
	Person8<string, int>p("Tom", 20);
	printPerson(p);
};

//2��ȫ�ֺ���������ʵ��
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