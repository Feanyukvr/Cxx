#include<iostream>
using namespace std;
/*
//作用：可以输出自定义数据类型
class Person {
	friend ostream& operator<<(ostream& out, Person& p);
//public:
private:
	int m_A;
	int m_B;
public:
	Person(int a, int b){
		this->m_A = a;
		this->m_B = b;
	}
	//成员函数 实现不了  p << cout 不是我们想要的效果
	//void operator<<(Person& p){}
};
//void operator<<(ostream &cout, Person &p) {
	//cout << "m_A=" << p.m_A << "m_B=" << p.m_B;
//}
//void test1() {
	//Person p1(10, 20);
//	cout << p1;
//}
//全局函数实现左移重载
//ostream对象只能有一个
ostream &operator<<(ostream &out, Person &p) {
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}
void test2() {
	Person p2(10, 20);
	cout << p2 << endl;//链式编程思想
}


int main() {
	test2();
	system("pause");
	return 0;
}

//总结：重载左移运算符配合友元可以实现输出自定义数据类型
*/