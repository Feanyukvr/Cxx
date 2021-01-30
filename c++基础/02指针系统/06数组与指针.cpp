#include<iostream>
using namespace std;

int main06() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << "第一个元素为：" << arr[0] << endl;
	int * p = arr;//arr是首地址
	cout << "第个元素为：" << *p << endl;
	cout << "第个元素为：" << (int)p << endl;
	p=p+1;//p+1为加一个数组元素的大小
	cout << "第一个元素为：" << *p << endl;
	cout << "第一个元素为：" << (int)p <<sizeof(arr[0])<< endl;

	system("pause");
	return 0;
}