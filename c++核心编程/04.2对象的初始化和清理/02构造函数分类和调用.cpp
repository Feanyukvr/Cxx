#include <iostream>
#include <string>
using namespace std;

//1.���캯�����������
//����
//���������� �޲ι��죨Ĭ�Ϲ��죩�� �вι���
//�������ͷ��� ��ͨ���캯���Ϳ������캯��
/*
class person {
public:

	int age;
public:
	person() {//Ĭ�Ϲ���
		cout << "person���޲ι��캯���ĵ���" << endl;
	}
	person(int a) {
		age = a;
		cout << "person�Ĺ��캯���Ĳ�������" << endl;
	}
	person(const person &b) {//�������캯���ĵ���
		age = b.age;
		cout << "person�Ŀ������캯���ĵ���" << endl;
	}
	~person() {
		cout << "person���������� �ͷ�" << endl;
	}

};

void test01() {
	//1���ŷ�
	cout << "FIRST" << endl;
	person a1;
	person a2(10);
	person a3(a2);
	cout << "a2����"<<a2.age<<endl;
	//ע������
	//���� Ĭ�Ϲ��캯�� ��ʱ��Ҫ��С���ţ���
	person a4();//����������Ϊ����һ��������������������ȥ��������   ����void func();

	//2��ʾ��
	cout << "SECOND" << endl;
	person p5;
	person p6 = person(10);
	person p7 = person(p6);
	person(10);//�������󣬵�ǰ��ִ�н�����ϵͳ����������������
	cout << "THIRD" << endl;
	//person(p7);//�ض��壬ϵͳ��Ϊperson(p7)===person p7;          ����
	
    //3��ʽת����
	cout << "SECOND" << endl;
	person p3 = 10;//�൱��д��person p4=person(10);
	person p4 = p3;
}

int main() {
	test01();
	system("pause");
	return 0;
}
*/