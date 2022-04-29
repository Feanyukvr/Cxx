#include<iostream>
using namespace std;

//����������Ԫ��
//����ԭ�ͣ�
//find_if(iterator beg, iterator end, _Pred); 

// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// _Pred ��������ν�ʣ�����bool���͵ķº�����

#include <algorithm>
#include <vector>
//������������
class GreaterFive2{
public:
	bool operator()(int val) {
		return val > 5;
	};
};

void test21() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	};
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive2());
	if (it == v.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "�ҵ�����5������:" << *it << endl;
	};
};

//�Զ�����������
class Person2 {
public:
	string m_Name;
	int m_Age;
public:
	Person2(string name, int age){
		this->m_Name = name;
		this->m_Age = age;
	};
};

class Greater202{
public:
	bool operator()(Person2& p) {
		return p.m_Age > 20;
	};
};

void test22() {
	vector<Person2> v;
	//��������
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person2>::iterator it = find_if(v.begin(), v.end(), Greater202());
	if (it == v.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "�ҵ�����:" << it->m_Name << " ����: " << it->m_Age << endl;
	};
};

int main2() {
	test21();
	test22();
	system("pause");
	return 0;
};


//�ܽ᣺find_if����������ʹ���Ҹ������ṩ�ķº������Ըı䲻ͬ�Ĳ���














