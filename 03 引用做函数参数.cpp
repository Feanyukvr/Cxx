#include<iostream>
using namespace std;

//1.ֵ����
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//ֵ�����޷��ı䣬ֻ�ܸı����
}
//2.��ַ����
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3.���ô���
void mySwap03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main03() {
	int a = 1;
	int b = 2;
	//1
	mySwap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//ֵ�����޷��ı�

	mySwap02(&a, &b);//ȡֵ����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//��ַ����

	mySwap03(a, b);//ȡֵ����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//��ַ����


	system("pause");
	return 0;
}