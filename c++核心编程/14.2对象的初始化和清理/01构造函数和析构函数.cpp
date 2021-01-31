#include <iostream>
#include <string>
using namespace std;
/*
//对象胡初始化和清理
//1.构造函数 进行初始化操作
class person {

public	:
	//1.1构造函数
    //没有返回值 不用写void
    //函数名与类名相同
    //构造函数可以有参数，可以发生重载
    //创建对象的时候，构造函数会自动调用，而且只调用一次
	person() {
		cout << "构造函数的调用" << endl;
	}
	//2.析构函数  进行清理操作
	//没有返回值 不写void操作
	//函数名和类名相同 在名称前加
	//对象在销毁前，会自动调用析构函数，而且只会调用一次
	~person() {
		cout << "析构函数的调用" << endl;
	}
};

void test01() {
	person a1;
}
//自己不写构造析构，编译器会提供空实现

int main01() {
	person a1;
	test01();//函数完毕后执行析构函数释放对象,不写析构函数则由编译器自动析构
	system("pause");
	return 0;
}

*/