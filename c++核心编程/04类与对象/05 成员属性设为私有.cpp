#include <iostream>
#include<string>
using namespace std;
//��Ա������Ϊ˽�У������Լ����ƶ�дȨ�ޣ�����д���Լ��������Ч��

class person2 {//Ĭ��˽��Ȩ�� private   ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����ܼ̳�
private:
	string m_name; //�ɶ���д
	int m_age=0;     //ֻ��
	string m_lover;//ֻд
public:
	void setname(string name) {//�ɶ���д
		m_name = name;
	}
	string getname() {
		return m_name;
	}

	int getage() {//ֻ��
		m_age = 0;
		return m_age;
	}

	void setlover (string lover) {//�ɶ���д
		m_name = lover;
	}

	void setage(int age) {
		if (age > 150 || age < 0) {
			cout << "o;d man" << endl;
		}
		else {
			m_age = age;
			cout << "="  <<m_age<< endl;
		}
	}


	int getage2() {//ֻ��
		return m_age;
	}

};


int main05() {
	person2 p1;
	p1.setname("haha");
	cout << "����="<<p1.getname() << endl;

	//p1.m_name = "hahsas";����޷�����

	//p1.setname("haha");����
	cout << "����=" << p1.getage() << endl;//�޸�ֵ�ӿڣ�����޷���ֵ

	p1.setname("��");//�޷��ʽӿڣ�����޷�����


	p1.setage(160);
	p1.setage(5);
	cout << "����=" << p1.getage2() << endl;//�޸�ֵ�ӿڣ�����޷���ֵ

	system("pause");
	return 0;
}