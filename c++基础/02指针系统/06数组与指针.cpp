#include<iostream>
using namespace std;

int main06() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int * p = arr;//arr���׵�ַ
	cout << "�ڸ�Ԫ��Ϊ��" << *p << endl;
	cout << "�ڸ�Ԫ��Ϊ��" << (int)p << endl;
	p=p+1;//p+1Ϊ��һ������Ԫ�صĴ�С
	cout << "��һ��Ԫ��Ϊ��" << *p << endl;
	cout << "��һ��Ԫ��Ϊ��" << (int)p <<sizeof(arr[0])<< endl;

	system("pause");
	return 0;
}