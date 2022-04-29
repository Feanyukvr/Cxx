#include<iostream>
using namespace std;

//类模板中成员函数在调用时才去创建

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
	//类模板中的成员函数,先不创建，也不会报错，对象确定了，调用则报错
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