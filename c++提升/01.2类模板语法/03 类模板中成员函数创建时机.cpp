#include<iostream>
using namespace std;

//��ģ���г�Ա�����ڵ���ʱ��ȥ����

class Person31{
public:
	void showPerson1(){
		cout << "Person1 show" << endl;
	}
};

class Person32{
public:
	void showPerson2(){
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass3{
public:
	T obj;
	//��ģ���еĳ�Ա����,�Ȳ�������Ҳ���ᱨ������ȷ���ˣ������򱨴�
	void func1() {
		obj.showPerson1();
	};
	void func2() {
		obj.showPerson2();
	};

};


void test01(){
	MyClass3<Person31> m;
	m.func1();
	//m.func2();
}

int main3() {
	test01();
	system("pause");
	return 0;
}