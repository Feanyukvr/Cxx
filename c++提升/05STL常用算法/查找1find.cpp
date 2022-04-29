#include<iostream>
using namespace std;

//�㷨��飺
//find                    //����Ԫ��
//find_if                 //����������Ԫ��
//adjacent_find           //���������ظ�Ԫ��
//binary_search           //���ֲ��ҷ�
//count                   //ͳ��Ԫ�ظ���
//count_if                //������ͳ��Ԫ�ظ���

//����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
//����ԭ�ͣ�
//find(iterator beg, iterator end, value);  

// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// value ���ҵ�Ԫ��

#include <algorithm>
#include <vector>
void test11() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	};
	//�����������Ƿ��� 5 ���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "�ҵ�:" << *it << endl;
	};
};

class Person1 {
public:
	string m_Name;
	int m_Age;
public:
	Person1(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	//����==
	bool operator==(const Person1& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		};
		return false;
	};
};

void test12() {
	vector<Person1> v;

	//��������
	Person1 p1("aaa", 10);
	Person1 p2("bbb", 20);
	Person1 p3("ccc", 30);
	Person1 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person1>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end()){
		cout<<"û���ҵ�!"<<endl;
	}
	else {
		cout<<"�ҵ�����:"<<it->m_Name<<" ����:"<<it->m_Age<<endl;
	};
};
int main1() {
	test11();
	test12();
	system("pause");
	return 0;
}
//�ܽ᣺ ����find��������������ָ����Ԫ�أ�����ֵ��** ������**