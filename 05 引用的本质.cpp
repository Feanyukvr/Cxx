#include <iostream>
using namespace std;
//��Ҫ���ؾֲ���������
void func(int& ref) {
	ref = 100;//�ֲ����������ջ��
}

int main05() {
	int a =10;
	int& ref = a;//int* const ref=&a;
	ref = 20;//�Զ�ת��Ϊ *ref

	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
	func(a);



	system("pause");
	return 0;
}