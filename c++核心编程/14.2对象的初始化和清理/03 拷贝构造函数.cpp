#include <iostream>
#include <string>
using namespace std;

//拷贝构造函数调用时机
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的的方式给函数参数传值
//3.值方式返回局部对象
/*
class person {
public:
	person() {//默认构造
		cout << "无参构造函数的调用" << endl;
	}
	person(int a) {
		age = a;
		cout << "构造函数的参数调用" << endl;
	}
	//拷贝构造函数的调用
	person(const person &a) {
		age = a.age;
		cout << "拷贝构造函数的调用" << endl;
	}

	~person() {
		cout << "析构函数的调用" << endl;
	}
	int age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	person p1(20);
	person p2(p1);
}

//2.值传递的的方式给函数参数传值
void dowork(person p) {

}
void test02() {
	person p;
	dowork(p);
}

//3.值方式返回局部对象
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