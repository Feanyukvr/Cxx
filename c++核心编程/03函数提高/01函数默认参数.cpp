#include <iostream>
using namespace std;

int func(int a, int b, int c) {
	return a + b + c;
}
int func2(int a, int b=20, int c=30) {//ĳλ����Ĭ��ֵ���Ӵ������Ҷ�������Ĭ��ֵ
	return a + b + c;
}

int func3(int a, int b=10 );//������Ĭ�ϲ�����ʵ�־Ͳ�����Ĭ�ϲ���

int func3(int a, int b) {//������ʵ��ֻ����һ����Ĭ�ϲ���

	return a + b;
}

int main01() {
	cout <<func(10, 20, 30) << endl;
	cout << func2(10) << endl;
	cout << func2(10,30) << endl;//�����ô��ģ�û���þɵ�

	system("pause");
	return 0;
}