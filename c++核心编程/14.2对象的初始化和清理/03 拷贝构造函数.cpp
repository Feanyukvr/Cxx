#include <iostream>
#include <string>
using namespace std;

//�������캯������ʱ��
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2.ֵ���ݵĵķ�ʽ������������ֵ
//3.ֵ��ʽ���ؾֲ�����
/*
class person {
public:
	person() {//Ĭ�Ϲ���
		cout << "�޲ι��캯���ĵ���" << endl;
	}
	person(int a) {
		age = a;
		cout << "���캯���Ĳ�������" << endl;
	}
	//�������캯���ĵ���
	person(const person &a) {
		age = a.age;
		cout << "�������캯���ĵ���" << endl;
	}

	~person() {
		cout << "���������ĵ���" << endl;
	}
	int age;
};

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01() {
	person p1(20);
	person p2(p1);
}

//2.ֵ���ݵĵķ�ʽ������������ֵ
void dowork(person p) {

}
void test02() {
	person p;
	dowork(p);
}

//3.ֵ��ʽ���ؾֲ�����
person dowork2() {
	person p1;
	cout << (int)&p1 << endl;
	cout << (int*)&p1 << endl;
	cout << "1"<< endl;
	return p1;
}
void test03() {
	person p = dowork2();
	cout << (int)&p << endl;
	cout << (int*)&p << endl;
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
*/