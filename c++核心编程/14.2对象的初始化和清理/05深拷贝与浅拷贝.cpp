#include <iostream>
#include <string>
using namespace std;
/*
class person {
public:
	person() {
		cout << "无参构造函数的调用" << endl;
	}
	person(int age,int height) {
		m_age = age;
		m_height=new int(height);
		cout << "参数构造函数的调用" << endl;
	}

	~person() {//浅拷贝堆区内存重复释放，利用深拷贝解决
		if (m_height != NULL) {
			delete m_height;
			m_height = NULL;
		}
		cout << "口口析构函数的调用" << endl;
	}
	int m_age;
	int* m_height;
};


void test01(){
	person p1(18,120);      //浅拷贝
	cout << "p1=" << p1.m_age << "p1=" << *p1.m_height<< endl;//加*  指针解引用
	person p2(p1);
	cout << "p2=" << p2.m_age << "p2=" << *p2.m_height << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}

*/




