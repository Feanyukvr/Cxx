#include <iostream>
#include <string>
using namespace std;
/*
//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性

class Person{
public:
	int mAge;
public:
	void ShowClassName(){
		cout << "我是Person类!" << endl;
	}
	void ShowPerson(){
		if (this == NULL){
			return;
		}
		cout << mAge << endl;//this是空指针，没有指向的对象
	}
};

void test01(){
	Person *p = NULL;
	p->ShowClassName(); //空指针，可以调用成员函数
	p->ShowPerson();  //但是如果成员函数中用到了this指针，就不可以了
}

int main() {
	test01();

	system("pause");
	return 0;
}*/