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
	person() {//默认构造
		cout << "无参构造函数的调用" << endl;
	}
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

//1.默认提供拷贝函数
void test01() {
	person p;
	p.age = 18;
	person p2(p);
	cout << "p2的年级为" << p2.age << endl;
}



int main() {
	test01();

	system("pause");
	return 0;
}

*/