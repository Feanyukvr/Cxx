#include <iostream>
#include<string>
using namespace std;

class aaa {//Ĭ��˽��Ȩ�� private   ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����ܼ̳�
	string m_name;
};
struct bbb {	//Ĭ�Ϲ���Ȩ�� public    ��Ա ���ڿ��Է��ʣ�����Ҳ���Է��ʣ����Լ̳�
	string m_name;
	void c() {
		m_name = "hhehe";
		cout << "hehe"<<m_name <<endl;
	}
};

int main04() {
	aaa a1;
	//a1.m_name = "����";//Ĭ��˽���޷�����
	bbb b2;
	b2.m_name = "hahsas";//Ĭ�Ϲ��п��Է���
	
	system("pause");
	return 0;
}