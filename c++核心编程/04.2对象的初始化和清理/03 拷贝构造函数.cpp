#include <iostream>
#include <string>
using namespace std;

//拷贝构造函数调用时机
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的的方式给函数参数传值
//3.值方式返回局部对象
/*
class person{
public:
	person() {//默认构造
		cout << "无参构造函数的调用" << endl;
	}
	person(int a) {
		age = a;
		cout << "构造函数的参数调用" << endl;
	}
	person(const person &b) {//拷贝构造函数的调用
		age = b.age;
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
	cout << "p2age=" << p2.age << endl;
}

//2.值传递的的方式给函数参数传值
void dowork(person p) {

}
void test02() {
	person p3;
	dowork(p3);//值传递，传入形参。拷贝临时副本
}

//3.值方式返回局部对象
person dowork2() {
	person p4;
	cout << (int)&p4 << endl;
	cout << (int*)&p4 << endl;

	return p4;
}

void test03() {
	person p5 = dowork2();//拷贝一个新的传给p5
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