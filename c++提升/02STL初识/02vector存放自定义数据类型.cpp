#include<iostream>
using namespace std;
#include <vector>

//vector�����д���Զ�����������
class Person2{
public:
	Person2(string name, int age){
		this->m_Name = name;
		this->m_Age = age;
	};
	string m_Name;
	int m_Age;
};
//��Ŷ���
void test21() {
	vector<Person2>v;
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);
	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//���������е�����
	for (vector<Person2>::iterator it = v.begin(); it != v.end(); it++) {
		//cout << "������ " << (*it).m_Name << " ���䣺" << (*it).m_Age << endl;
		cout << "������ " << it->m_Name << " ���䣺" << it->m_Age << endl;
	};
};

//�Ŷ���ָ��
void test22() {
	vector<Person2*>v;
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);
	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	//��������
	for (vector<Person2*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "::������ " << (*it)->m_Name << " ���䣺 " << (*it)->m_Age << endl;
	};
};


int main2() {
	test21();
	test22();
	system("pause");
	return 0;
}