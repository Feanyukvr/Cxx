#include <iostream>
#include <string>
using namespace std;
//������
//��Ա�������const�����ǳ�Ϊ�������Ϊ ������
//�������ڲ������޸�  ��Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸ġ�

//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����

class Person {
public:
	int m_A;
	mutable int m_B; //���޸� �ɱ��
public:
	Person() {
		m_A = 0;
		m_B = 0;
	}
	//thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
	//�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
    //const Type* const pointer;
	void ShowPerson() const {

		//this = NULL; //�����޸�ָ���ָ�� Person* const this;
		//this->m_A = 100; //�����޸�thisָ��ָ��Ķ��������

		//const���γ�Ա������mutable���εı��������޸�
		this->m_B = 100;
	}
	void MyFunc() const {//�������޷��޸ľֲ�����
		//mA = 10000;
	}
	void ford() {
	}
};
//const���ζ���  ������
void test01() {
	const Person person; //��������  
	cout << person.m_A << endl;
	//person.m_A = 100; //���������޸ĳ�Ա������ֵ,���Է���
	person.m_B = 200; //���ǳ���������޸�mutable���γ�Ա����

	//��������ʳ�Ա����
	person.MyFunc(); //�������ܵ���const�ĺ���
}

int main() {
	test01();
	system("pause");
	return 0;
}
