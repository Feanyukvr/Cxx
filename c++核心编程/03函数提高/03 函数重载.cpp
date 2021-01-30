#include <iostream>
using namespace std;
//同一个作用域下，名称相同。参数类型不同，个数不同，顺序不同


void funca() {
	cout << "hhhhhh21"<< endl;
}
//int funca()//返回值不同不可以

void funca(int a) {
	cout << "int a1" << endl;
}
void funca(double a) {
	cout << "doublea1" << endl;
}
void funca(double a,int b) {//顺序不用
	cout << "dint 222" << endl;
}
void funca(int a, double b) {
	cout << "dint ab" << endl;
}
int main03() {
	funca();
	funca(10);
	funca(10.34);
	funca(1, 2.33);
	funca(1.232, 233);


	system("pause");
	return 0;
}