#include<iostream>
using namespace std;

//ͳ��Ԫ�ظ���
//����ԭ�ͣ�
//count(iterator beg, iterator end, value);  
// ͳ��Ԫ�س��ִ���
// beg ��ʼ������
// end ����������
// value ͳ�Ƶ�Ԫ��

#include <algorithm>
#include <vector>

//������������
void test51() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num = count(v.begin(), v.end(), 4);
	cout << "4�ĸ���Ϊ�� " << num << endl;
};

//�Զ�����������
class Person5{
public:
	string m_Name;
	int m_Age;
public:
	Person5(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	bool operator==(const Person5& p) {
		if (this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		};
	};
};

void test52(){
	vector<Person5> v;

	Person5 p1("����", 35);
	Person5 p2("����", 35);
	Person5 p3("�ŷ�", 35);
	Person5 p4("����", 30);
	Person5 p5("�ܲ�", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person5 p6("�����", 35);

	int num = count(v.begin(), v.end(), p6);
	cout << "num35 = " << num << endl;
}
int main5() {
	test51();
	test52();
	system("pause");
	return 0;
}
//�ܽ᣺ͳ���Զ�����������ʱ����Ҫ������� operator= = 















