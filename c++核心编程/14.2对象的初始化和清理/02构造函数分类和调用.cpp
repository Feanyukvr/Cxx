#include <iostream>
#include <string>
using namespace std;
/*
//1.构造函数分类与调用
//分类
//按参数分类 无参构造（默认构造）和 有参构造
//按照类型分类 普通构造函数和拷贝构造函数


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

void test01() {
	//1括号法
	person a1;
	person a2(10);
	person a3(a2);
	
	//注意事项
	//调用默认构造函数的时候不要加小括号（）
	person a4();//编译器会认为他是一个函数的声明，而不会去创建对象   ！！
	cout << "线始发" << endl;

	//2显示法
	person p5;
	person p6 = person(10);
	person p7 = person(p6);
	person(10);//匿名对象，当前行执行结束后，系统立即回收匿名对象
	cout << "线始" << endl;
	//person(p7);//重定义，系统看为person(p7)===person p7;           ！！
	
    //3隐式转换法
	person p4 = 10;//相当于写了person p4=person(10);
	person p3 = p4;
}

int main02() {
	test01();
	system("pause");
	return 0;
}*/