#include <iostream>
#include<string>
using namespace std;

class aaa {//默认私有权限 private   成员 类内可以访问，类外不可以访问，不能继承
	string m_name;
};
struct bbb {	//默认公共权限 public    成员 类内可以访问，类外也可以访问，可以继承
	string m_name;
	void c() {
		m_name = "hhehe";
		cout << "hehe"<<m_name <<endl;
	}
};

int main04() {
	aaa a1;
	//a1.m_name = "李四";//默认私有无法访问
	bbb b2;
	b2.m_name = "hahsas";//默认公有可以访问
	
	system("pause");
	return 0;
}