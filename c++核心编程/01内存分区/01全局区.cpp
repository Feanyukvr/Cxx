/*
未执行前

代码区（放代码转化为010101）
只读，共享

全局区（程序结束后由操作系统释放）
全局变量，静态变量

常量区，字符串常量，静态变量 其他常量         
*/


/*

#include<iostream>
using namespace std;

                                              //按照局部全局分地址
int g_a = 10;                  //全局变量1
int g_b = 10;

const int c_g_a = 10;   //全局常量
const int c_g_b = 10;


int main10() {
	int a = 10;                //普通局部变量
	int b = 10;
	static int s_a = 10;       //静态变量       只能在此函数访问，可修改
	static int s_b = 10;       //静态变量
	const int c_l_a = 10;      //静态变量       都可访问
	const int c_l_b = 10;      //静态变量       都可访问，禁止修改
	cout << "局部变量地址" << (int)&a << endl;
	cout << "局部变量地址" << (int)&b<< endl;
	cout << "全局变量地址" << (int)&g_a << endl;
	cout << "全局变量地址" << (int)&g_b << endl;
	cout << "静态变量地址" << (int)&s_a << endl;
	cout << "静态变量地址"<<(int)&s_b << endl;
	cout <<"字符串常量地" <<(int)&"hello world"<<endl;	//字符串常量2
	cout << "全局常量地址" << (int)&c_g_a<<endl;	//const修饰的全局变量
	cout << "全局常量地址" << (int)&c_g_b<<endl;	//const修饰的全局变量
	cout << "局部常量地址" << (int)&c_l_a << endl;//const修饰的局部变量
	cout << "局部常量地址" << (int)&c_l_b << endl;
}

*/
