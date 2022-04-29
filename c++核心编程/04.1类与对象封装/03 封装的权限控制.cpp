#include <iostream>
using namespace std;


class person{
public://公共权限 public    成员 类内可以访问，类外也可以访问，可以继承
	string m_name;
protected://保护权限 protected 成员 类内可以访问，类外不可以访问，可以继承
	string m_car;
private://私有权限 private   成员 类内可以访问，类外不可以访问，不能继承
	int m_password;
protected:
	void func() {
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}
};


int main03() {
	person p1;
	p1.m_name = "李四";
	//p1.m_car = "奔弛";p1.m_password=321;//保护,私有权限类外不可访问
	//p1.func();//保护,私有权限类外不可访问
	system("pause");
	return 0;
}