#include<iostream>
using namespace std;
//�̳з�ʽһ�������֣�
//�����̳�
//�����̳�
//˽�м̳�
/*
class Base{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//�����̳�
class Son1:public Base{
public:
	void func(){
		m_A; //�ɷ��� publicȨ��
		m_B; //�ɷ��� protectedȨ��
		//m_C; //���ɷ���
	}
};
void myClass(){
	Son1 s1;
	s1.m_A; //������ֻ�ܷ��ʵ�����Ȩ��
}
//�����̳�

class Son2 :protected Base{
public:
	void func(){
		m_A; //�ɷ��� protectedȨ��
		m_B; //�ɷ��� protectedȨ��
		//m_C; //���ɷ���
	}
};
void myClass2(){
	Son2 s;
	//s.m_A; //���ɷ���
}
//˽�м̳�

class Son3 :private Base{
public:
	void func(){
		m_A; //�ɷ��� privateȨ��
		m_B; //�ɷ��� privateȨ��
		//m_C; //���ɷ���
	}
};
class GrandSon3 :public Son3{
public:
	void func(){
		//Son3��˽�м̳У����Լ̳�Son3��������GrandSon3�ж��޷����ʵ�
		//m_A;
		//m_B;
		//m_C;
	}
};
int main() {
	myClass();
	myClass2();
	system("pause");
	return 0;
}
*/