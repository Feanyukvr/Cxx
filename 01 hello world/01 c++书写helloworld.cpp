#include<iostream>
using namespace std;


//常量定义方式 宏常量
#define Day 7

int main()
{
	
	cout << "hello world" << endl;
	//变量
	int a = 109;
	cout << "a=" << a << endl;
	//常量
	const int b = 12;
	/*会报错b = 13;
	*/
	cout << "b=" << b << endl;
	cout << "一周总共有："<<Day<< "天"<<endl;
	cout << "一周储存空间为：" << sizeof(Day)<< endl;

	float f1 = 3.14f;
	double d2 = 3e10;
	cout << "f1=" << f1 << endl;
	cout << sizeof(d2) << endl;

	char ch = 'r';
	cout << "一周储存空间为：" << ch << (int)ch << endl;
	 


	system("pause");
	
	return 0;

}
