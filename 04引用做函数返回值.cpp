#include <iostream>
using namespace std;
//��Ҫ���ؾֲ���������
int& text01(){
	int a = 10;//�ֲ����������ջ��
	return a;
}
int& text02() {
	static int a = 10;//������ȫ����
	return a;
}

int main04() {
	int &ref= text01();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;//�������õڶ��δ���

	int &ref2 = text02();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;//�������õڶ��δ���

	text02()=1000;//��������Ϊ���ã�����������Ϊ��ֵ
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	system("pause");
	return 0;
}