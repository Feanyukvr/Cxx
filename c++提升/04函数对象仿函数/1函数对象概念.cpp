#include<iostream>
using namespace std;
//���
//���غ������ò��������࣬����󳣳�Ϊ��������
//��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//��������(�º���)��һ���࣬����һ������
//
//�ص㣺
//����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//�������󳬳���ͨ�����ĸ����������������Լ���״̬
//�������������Ϊ��������
#include <string>

//1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
class MyAdd1{
public:
	int operator()(int v1, int v2) {
		return v1 + v2;
	};
};

void test11() {
	MyAdd1 myAdd;
	cout << myAdd(10, 10) << endl;
};

//2����������������Լ���״̬
class MyPrint1{
public:
	int count; //�ڲ��Լ���״̬
	MyPrint1() {
		count = 0;
	};
	void operator()(string test) {
		cout << test << endl;
		count++; //ͳ��ʹ�ô���
	};
};
void test12() {
	MyPrint1 myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "myPrint���ô���Ϊ�� " << myPrint.count << endl;
};

//3���������������Ϊ��������
void doPrint1(MyPrint1& mp, string test) {
	mp(test);
};

void test13() {
	MyPrint1 myPrint;
	doPrint1(myPrint, "Hello C++");
};

int main1() {
	test11();
	test12();
	test13();
	system("pause");
	return 0;
}


//�ܽ᣺
//�º���д���ǳ���������Ϊ�������д��ݡ�