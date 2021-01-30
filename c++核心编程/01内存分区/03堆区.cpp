#include<iostream>
using namespace std;
//
/*int* func() {

	int * p = new int(10);
	//new关键字将数据开辟到堆区
	//指针是局部变量，放在栈上，指向胡数据放在堆区
	return p;
}

int main() {
	//堆区开辟数据
	int *a = func();
	cout << *a << endl;//执行完后自动释放，地址无效
	system("pause");
	return 0;
}
*/
//想返回地址该怎么办