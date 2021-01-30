#include <iostream>
#include<string>
using namespace std;


class person {//默认私有权限 private   成员 类内可以访问，类外不可以访问，不能继承
	string m_name;
};
struct k {	//默认公共权限 public    成员 类内可以访问，类外也可以访问，可以继承
	string m_name;
	void s() {
		m_name = "hhehe";
		cout << "hehe"<<m_name <<endl;
	}
};

int main04() {
	person p1;
	//p1.m_name = "李四";//默认私有无法访问
	k p2;
	p2.m_name = "hahsas";//默认公有可以访问
	
	system("pause");
	return 0;
}