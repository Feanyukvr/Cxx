#include<iostream>
using namespace std;

int main05() {
    int a = 10, b = 20;

	const int* p1 = &a;//ָ��ָ����Ըģ�ָ�Ŀ��ڵ�ֵ���ܸģ�(��ֱֵ�ӱ���)     ����ָ��
	p1 = &b;
	cout << *p1 << endl;
	int * const p2 = &a;//ָ��ָ�򲻿��Ըģ�ָ�Ŀ��ڵ�ֵ���Ըģ�(��ֱֵ�ӱ���)  ָ�볣��
	*p2 = 20;
	cout << *p2 << endl;
	
	const int * const p3 = &a;//�����ܸ�

	cout << *p2 << endl;


	system("pause");
	return 0;
}