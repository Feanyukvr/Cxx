#include <iostream>
#include<string>
using namespace std;


class person {//Ĭ��˽��Ȩ�� private   ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����ܼ̳�
	string m_name;
};
struct k {	//Ĭ�Ϲ���Ȩ�� public    ��Ա ���ڿ��Է��ʣ�����Ҳ���Է��ʣ����Լ̳�
	string m_name;
	void s() {
		m_name = "hhehe";
		cout << "hehe"<<m_name <<endl;
	}
};

int main04() {
	person p1;
	//p1.m_name = "����";//Ĭ��˽���޷�����
	k p2;
	p2.m_name = "hahsas";//Ĭ�Ϲ��п��Է���
	
	system("pause");
	return 0;
}