#include <iostream>
using namespace std;

//����Ȩ�� public    ��Ա ���ڿ��Է��ʣ�����Ҳ���Է��ʣ����Լ̳�
//����Ȩ�� protected ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����Լ̳�
//˽��Ȩ�� private   ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����ܼ̳�
class person{
public:
	string m_name;
protected:
	string m_car;
private:
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