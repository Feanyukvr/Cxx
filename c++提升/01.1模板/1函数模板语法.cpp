#include<iostream>
using namespace std;

//函数模板
void swapInt1(int &a, int &b){
	int temp = a;
	a = b; 
	b = temp;
}
void swapDouble1(double &a, double &b){
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>  //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap1(T &a, T &b){
	T  temp = a;
	a = b;
	b = temp;
}

void test01(){
	int a = 10;
	int b = 20;

	swapInt1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//利用函数模板交换
	//两种方式使用函数模板

	//1、推导类型
	mySwap1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2、指定类型
	mySwap1<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;

	swapDouble1(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}

int main01() {
	test01();
	system("pause");
	return 0;
}