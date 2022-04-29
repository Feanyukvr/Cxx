#include <iostream>
#include <string>
using namespace std;
//常函数
//成员函数后加const后我们称为这个函数为 常函数
//常函数内不可以修改  成员属性
//成员属性声明时加关键字mutable后，在常函数中依然可以修改、

//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数

class Person {
public:
	int m_A;
	mutable int m_B; //可修改 可变的
public:
	Person() {
		m_A = 0;
		m_B = 0;
	}
	//this指针的本质是一个指针常量，指针的指向不可修改
	//如果想让指针指向的值也不可以修改，需要声明常函数
    //const Type* const pointer;
	void ShowPerson() const {

		//this = NULL; //不能修改指针的指向 Person* const this;
		//this->m_A = 100; //不能修改this指针指向的对象的数据

		//const修饰成员函数，mutable修饰的变量可以修改
		this->m_B = 100;
	}
	void MyFunc() const {//常函数无法修改局部常量
		//mA = 10000;
	}
	void ford() {
	}
};
//const修饰对象  常对象
void test01() {
	const Person person; //常量对象  
	cout << person.m_A << endl;
	//person.m_A = 100; //常对象不能修改成员变量的值,可以访问
	person.m_B = 200; //但是常对象可以修改mutable修饰成员变量

	//常对象访问成员函数
	person.MyFunc(); //常对象不能调用const的函数
}

int main() {
	test01();
	system("pause");
	return 0;
}
