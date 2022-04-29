#include<iostream>
using namespace std;
//作用： 通过重载递增运算符，实现自己的整型数据
/*
class MyInteger {
	friend ostream &operator<<(ostream &out, MyInteger myint);

private:
	int m_Num;
public:
	MyInteger() {
		m_Num = 0;
	}
	//前置++
	MyInteger &operator++() {//返回引用是为了一直对一个数据进行递增操作
		m_Num++;//先++
		return *this;//再返回
	}
	//后置++
	MyInteger operator++(int ) {//先返回
		MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
		m_Num++;
		return temp;
	}
	//返回值不可以作为重载条件，int作为占位参数，可以区分前置后置
};
ostream &operator<<(ostream &cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}

//前置++ 先++ 再返回
void test01() {
	MyInteger myInt;
	cout << (++myInt) << endl;
	cout << myInt << endl;
}
//后置++ 先返回 再++
void test02() {
	MyInteger myInt;
	cout << (myInt++)<< endl;
	cout << myInt << endl;
}
int main() {
	test01();
	cout << "myInt" << endl;
	test02();
	system("pause");

	return 0;
}
//总结： 前置递增返回引用，后置递增返回值
*/