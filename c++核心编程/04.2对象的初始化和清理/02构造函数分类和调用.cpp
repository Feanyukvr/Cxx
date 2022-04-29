#include <iostream>
#include <string>
using namespace std;

//1.构造函数分类与调用
//分类
//按参数分类 无参构造（默认构造）和 有参构造
//按照类型分类 普通构造函数和拷贝构造函数
/*
class person {
public:

	int age;
public:
	person() {//默认构造
		cout << "person的无参构造函数的调用" << endl;
	}
	person(int a) {
		age = a;
		cout << "person的构造函数的参数调用" << endl;
	}
	person(const person &b) {//拷贝构造函数的调用
		age = b.age;
		cout << "person的拷贝构造函数的调用" << endl;
	}
	~person() {
		cout << "person的析构函数 释放" << endl;
	}

};

void test01() {
	//1括号法
	cout << "FIRST" << endl;
	person a1;
	person a2(10);
	person a3(a2);
	cout << "a2岁数"<<a2.age<<endl;
	//注意事项
	//调用 默认构造函数 的时候不要加小括号（）
	person a4();//编译器会认为他是一个函数的声明，而不会去创建对象   ！！void func();

	//2显示法
	cout << "SECOND" << endl;
	person p5;
	person p6 = person(10);
	person p7 = person(p6);
	person(10);//匿名对象，当前行执行结束后，系统立即回收匿名对象
	cout << "THIRD" << endl;
	//person(p7);//重定义，系统看为person(p7)===person p7;          ！！
	
    //3隐式转换法
	cout << "SECOND" << endl;
	person p3 = 10;//相当于写了person p4=person(10);
	person p4 = p3;
}

int main() {
	test01();
	system("pause");
	return 0;
}
*/