#include<iostream>
using namespace std;

//����ģ��ע������
template<class T> //typename�����滻��class,û�в�𣬺���ģ�壬��ģ��
void mySwap2(T&a, T&b){
	T temp = a;
	a = b;
	b = temp;
}

//1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
void test02(){
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap2(a, b); //��ȷ��
	//mySwap2(a, c); //�����Ƶ�����һ�µ�T����
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func2(){
	cout << "func ����" << endl;
}

void test03(){
	func2<double>();
	func2<int>();
	//func2();//ûȷ��t������
}

int main02() {
	test02();
	test03();
	system("pause");
	return 0;
}