#include <iostream>
#include <string>
using namespace std;
/*
//1.���캯�����������
//����
//���������� �޲ι��죨Ĭ�Ϲ��죩�� �вι���
//�������ͷ��� ��ͨ���캯���Ϳ������캯��


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

void test01() {
	//1���ŷ�
	person a1;
	person a2(10);
	person a3(a2);
	
	//ע������
	//����Ĭ�Ϲ��캯����ʱ��Ҫ��С���ţ���
	person a4();//����������Ϊ����һ��������������������ȥ��������   ����
	cout << "��ʼ��" << endl;

	//2��ʾ��
	person p5;
	person p6 = person(10);
	person p7 = person(p6);
	person(10);//�������󣬵�ǰ��ִ�н�����ϵͳ����������������
	cout << "��ʼ" << endl;
	//person(p7);//�ض��壬ϵͳ��Ϊperson(p7)===person p7;           ����
	
    //3��ʽת����
	person p4 = 10;//�൱��д��person p4=person(10);
	person p3 = p4;
}

int main02() {
	test01();
	system("pause");
	return 0;
}*/