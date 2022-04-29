#include<iostream>
using namespace std;

//函数模板注意事项
template<class T> //typename可以替换成class,没有差别，函数模板，类模板
void mySwap2(T&a, T&b){
	T temp = a;
	a = b;
	b = temp;
}

//1、自动类型推导，必须推导出一致的数据类型T才可以使用
void test02(){
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap2(a, b); //正确！
	//mySwap2(a, c); //错误！推导不出一致的T类型
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2、模板必须要确定出T的数据类型，才可以使用
template<class T>
void func2(){
	cout << "func 调用" << endl;
}

void test03(){
	func2<double>();
	func2<int>();
	//func2();//没确定t的类型
}

int main02() {
	test02();
	test03();
	system("pause");
	return 0;
}