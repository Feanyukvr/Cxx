#include<iostream>
using namespace std;
/*
//��������ظ�������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
//���ã�ʵ�������Զ�������������ӵ�����

class Person {
public:
	int m_A;
	int m_B;
public:
	Person(){
	};
	Person(int a, int b){
		this->m_A = a;
		this->m_B = b;
	}
	//��Ա����ʵ�� + �����������
	Person operator+(const Person &p) {//�����÷�ֹ����һ������
		Person temp;
		cout << temp.m_A << endl;
		cout << this->m_A << endl;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
};

//ȫ�ֺ���ʵ�� + �����������
//Person operator+(const Person &p1, const Person &p2) {
//	Person temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

//��������� ���Է����������� 
Person operator+(const Person &p2, int val){
	Person temp;
	temp.m_A = p2.m_A + val;
	temp.m_B = p2.m_B + val;
	return temp;
}

void test1() {
	Person p1(10, 10);
	Person p2(20, 20);
	//��Ա������ʽ
	Person p3 = p2 + p1;  //�൱�� p3=p2.operaor+(p1)
	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;

	Person p4 = p3 + 10; //�൱�� operator+(p3,10)
	cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;
}

int main() {
	test1();
	system("pause");
	return 0;
}
//�ܽ�1���������õ��������͵ı��ʽ�ĵ�������ǲ����ܸı��
//�ܽ�2����Ҫ�������������
*/