#include<iostream>
using namespace std;

//����ģ��
void swapInt1(int &a, int &b){
	int temp = a;
	a = b; 
	b = temp;
}
void swapDouble1(double &a, double &b){
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>  //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap1(T &a, T &b){
	T  temp = a;
	a = b;
	b = temp;
}

void test01(){
	int a = 10;
	int b = 20;

	swapInt1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//���ú���ģ�彻��
	//���ַ�ʽʹ�ú���ģ��

	//1���Ƶ�����
	mySwap1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2��ָ������
	mySwap1<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;

	swapDouble1(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}

int main01() {
	test01();
	system("pause");
	return 0;
}