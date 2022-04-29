#include<iostream>
using namespace std;
#include <string>

//��ģ���뺯��ģ������
template<class NameType,class AgeType = int>
class Person2{
public:
	Person2(NameType name, AgeType age){
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson2()
	{
		cout << "name: " << this->m_Name << " age = " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void test21(){
	//Person2 p("�����", 1000); //�����޷����Զ������Ƶ�
	Person2<string, int> p("�����", 1000); //��ȷ��ֻ������ʾָ������
	p.showPerson2();
}

//2����ģ����ģ������б��п�����  Ĭ�ϲ���int!
void test22(){
	Person2<string> p("��˽�", 999);
	p.showPerson2();

	Person2<string, string> p1("�����", "10j0.20"); //�����ô��ģ���ʽת��
	p1.showPerson2();
}

int main2() {
	test21();
	test22();
	system("pause");

	return 0;
}