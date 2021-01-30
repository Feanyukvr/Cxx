#include<iostream>
using namespace std;


/*
//1.new的基本语法
int* func() {
	//在堆区创建整形数据
	//new返回该数据类型指针
	int * p = new int(10);
	return p;
}

void test01() {
	int * p = func();
	cout<<*p<<endl;
	delete p;
	//cout << *p << endl;//无权访问
}

void test02() {
	//堆区创建数组
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;     //无权访问
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}


*/