#include<iostream>
using namespace std;

int main01() {
	int a = 10;
	int *p;
	p = &a;
	cout << "a��ַΪ��\t" << &a << endl;
	cout << "ָ��p��ַΪ:\t" <<p<< endl;

	*p = 1000;//�����޸�a
	cout << "a��ַΪ��\t" << a << endl;
	cout << "ָ��p��ַΪ:\t" << *p << endl;

	system("pause");
	return 0;
}