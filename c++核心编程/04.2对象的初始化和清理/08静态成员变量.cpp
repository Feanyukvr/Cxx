#include <iostream>
#include <string>
using namespace std;
//*
class person {
public:
	static int m_a;//ȫ���������ֵ
	               //����׶η����ڴ�
	               //���������������ʼ��
private:
	static int m_b;//��Ȩ�޵�
};
int person::m_a = 10;//��ʼ��//person�µľ�̬��Ա
int person::m_b = 20;

void test01() {
	//1.ͨ���������
	person p1;
	p1.m_a = 100;
	cout << "m_a=" << p1.m_a << endl;

	person p2;
	p2.m_a = 200;//Ҫ�ľ�һ���
	cout << "m_a=" << p1.m_a << endl;
	cout << "m_a=" << p2.m_a << endl;//����һ��
	//cout << "m_a=" << p2.m_b << endl;
	//���ʲ������ⲿ�޷���Ȩ��
	// 
    //2.ͨ����������
	cout << person::m_a << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
//*/