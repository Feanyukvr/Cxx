#include<iostream>
using namespace std;

int main01() {
	int a = 10;
	int &c = a;
	int *d = &a;
	//�����ʼ�� ��     int &d;// ����ʽ

	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	a = 100;
	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	c = 2;
	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	int b = 20;
	c = b;                      //ֵ�ɱ䣬ָ�򲻿ɱ�
	cout << "a=" << a << endl;
	cout << "c=" << c << endl;
	//c��ʼ���󲻿����޸�
	//&c = b;     ������
	system("pause");
	return 0;
}