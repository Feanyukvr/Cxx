#include<iostream>
using namespace std;
/*
//���ã���������Զ�����������
class Person {
	friend ostream& operator<<(ostream& out, Person& p);
//public:
private:
	int m_A;
	int m_B;
public:
	Person(int a, int b){
		this->m_A = a;
		this->m_B = b;
	}
	//��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч��
	//void operator<<(Person& p){}
};
//void operator<<(ostream &cout, Person &p) {
	//cout << "m_A=" << p.m_A << "m_B=" << p.m_B;
//}
//void test1() {
	//Person p1(10, 20);
//	cout << p1;
//}
//ȫ�ֺ���ʵ����������
//ostream����ֻ����һ��
ostream &operator<<(ostream &out, Person &p) {
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}
void test2() {
	Person p2(10, 20);
	cout << p2 << endl;//��ʽ���˼��
}


int main() {
	test2();
	system("pause");
	return 0;
}

//�ܽ᣺������������������Ԫ����ʵ������Զ�����������
*/