#include <iostream>
#include <string>
using namespace std;

/*


//构造函数的调用规则
//1.创建一个类，c++编译器会给每个类添加三个函数
//默认函数
//析构函数
//拷贝函数
class person {
public:
	//person() {//默认构造
	//	cout << "无参构造函数的调用" << endl;
	//}
	person(int a) {
		age = a;
		cout << "参数构造函数的调用" << endl;
	}
	//拷贝构造函数的调用
	//person(const person &a) {
	//	age = a.age;
	//	cout << "拷贝构造函数的调用" << endl;
	//}

	~person() {
		cout << "析构函数的调用" << endl;
	}
	int age;
};

//2.如果写有参构造，不提供默认构造，仍然有拷贝函数
//2.如果有拷贝构造，就不默认提供普通构造了
void test02() {
	person p;   //报错，无默认构造
	person p2(18);//k拷贝构造依然存在

}


int main() {
	test01();
	//test02();
	//test03();
	system("pause");
	return 0;
}*/