#include <iostream>
using namespace std;


class person{
public://����Ȩ�� public    ��Ա ���ڿ��Է��ʣ�����Ҳ���Է��ʣ����Լ̳�
	string m_name;
protected://����Ȩ�� protected ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����Լ̳�
	string m_car;
private://˽��Ȩ�� private   ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����ܼ̳�
	int m_password;
protected:
	void func() {
		m_name = "����";
		m_car = "������";
		m_password = 123456;
	}
};


int main03() {
	person p1;
	p1.m_name = "����";
	//p1.m_car = "����";p1.m_password=321;//����,˽��Ȩ�����ⲻ�ɷ���
	//p1.func();//����,˽��Ȩ�����ⲻ�ɷ���
	system("pause");
	return 0;
}