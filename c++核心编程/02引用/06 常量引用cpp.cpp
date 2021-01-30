#include <iostream>
using namespace std;

void showValue(int& val) {
	val = 1000;
	cout << "val=" << val << endl;
}
void showValue2(const int& val) {
	//val = 1000;//无法修改
	cout << "val=" << val << endl;
}
int main06() {//用来修饰形参防止误操作

	//const int &ref = 10;//int temp=10;const int &reef =temp;
	//int &ref = 10;//引用必须引给一块合法的内存空间
	//加const后只读不可修改
	int a = 10;
	showValue(a);
	cout << "a=" << a << endl;



	system("pause");
	return 0;
}