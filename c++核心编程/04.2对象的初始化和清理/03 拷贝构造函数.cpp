#include <iostream>
#include <string>
using namespace std;

//�������캯������ʱ��
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2.ֵ���ݵĵķ�ʽ������������ֵ
//3.ֵ��ʽ���ؾֲ�����
/*
class person{
public:
	person() {//Ĭ�Ϲ���
		cout << "�޲ι��캯���ĵ���" << endl;
	}
	person(int a) {
		age = a;
		cout << "���캯���Ĳ�������" << endl;
	}
	person(const person &b) {//�������캯���ĵ���
		age = b.age;
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
	cout << "p2age=" << p2.age << endl;
}

//2.ֵ���ݵĵķ�ʽ������������ֵ
void dowork(person p) {

}
void test02() {
	person p3;
	dowork(p3);//ֵ���ݣ������βΡ�������ʱ����
}

//3.ֵ��ʽ���ؾֲ�����
person dowork2() {
	person p4;
	cout << (int)&p4 << endl;
	cout << (int*)&p4 << endl;

	return p4;
}

void test03() {
	person p5 = dowork2();//����һ���µĴ���p5
	cout << "1" << endl;
	cout << (int)&p5 << endl;
	cout << (int*)&p5 << endl;
}

int main() {
	cout << "first" << endl;
	test01();
	cout << "22222" << endl;
	test02();
	cout << "33333" << endl;
	test03();
	system("pause");
	return 0;
}
*/