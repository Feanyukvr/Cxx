#include<iostream>
using namespace std;


//�������巽ʽ �곣��
#define Day 7

int main()
{
	
	cout << "hello world" << endl;
	//����
	int a = 109;
	cout << "a=" << a << endl;
	//����
	const int b = 12;
	/*�ᱨ��b = 13;
	*/
	cout << "b=" << b << endl;
	cout << "һ���ܹ��У�"<<Day<< "��"<<endl;
	cout << "һ�ܴ���ռ�Ϊ��" << sizeof(Day)<< endl;

	float f1 = 3.14f;
	double d2 = 3e10;
	cout << "f1=" << f1 << endl;
	cout << sizeof(d2) << endl;

	char ch = 'r';
	cout << "һ�ܴ���ռ�Ϊ��" << ch << (int)ch << endl;
	 


	system("pause");
	
	return 0;

}