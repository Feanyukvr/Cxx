#include <iostream>;
using namespace std;
#include<string>;
#include "swap.h"
//函数声明
/*void text0();
void text1(int num1, int num2);
int text2();
int text3(int num1, int num2);

int main6() {
	int a = 1,b=1,c;
	text0();
	text1(a,b);
	text2();
	c=text3(a,b);

	system("pause");
	return 0;
}
//函数定义
//无参无返
void text0() {
	cout << "text0" << endl;//不用写return
}

//有参无返
void text1(int num1, int num2) {
	cout << "text1=" << num1 + num2 << endl;//不用写return
}

//无参有返
int text2() {
	cout << "text2" << endl;
	return 1000;
}

//有参有返
int text3(int num1, int num2) {
	cout << "text3=" << num1 + num2 << endl;
	return num1 + num2;
}*/


int main() {//头文件
	int a = 10, b = 20;
	swap(a, b);

	system("pause");
	return 0;
}