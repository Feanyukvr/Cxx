#include<iostream>
using namespace std;

int main02() {
	int a = 10;
	int* p = &a;
	//int *p;
	//p = &a;
	//ָ�볤��Ϊ�����λ��
	cout << "sizeof(int *):\t" <<sizeof (int *) << endl;
	cout << "sizeof(int *):\t" << sizeof(short *) << endl;	
	cout << "sizeof(int *):\t" << sizeof(char *) << endl;	
	cout << "sizeof(int *):\t" << sizeof(double *) << endl;

	system("pause");
	return 0;
}