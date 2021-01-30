#include <iostream>
#include<string>
using namespace std;
//成员属性设为私有，可以自己控制读写权限，对于写可以检测数据有效性

class person2 {//默认私有权限 private   成员 类内可以访问，类外不可以访问，不能继承
private:
	string m_name; //可读可写
	int m_age=0;     //只读
	string m_lover;//只写
public:
	void setname(string name) {//可读可写
		m_name = name;
	}
	string getname() {
		return m_name;
	}

	int getage() {//只读
		m_age = 0;
		return m_age;
	}

	void setlover (string lover) {//可读可写
		m_name = lover;
	}

	void setage(int age) {
		if (age > 150 || age < 0) {
			cout << "o;d man" << endl;
		}
		else {
			m_age = age;
			cout << "="  <<m_age<< endl;
		}
	}


	int getage2() {//只读
		return m_age;
	}

};


int main05() {
	person2 p1;
	p1.setname("haha");
	cout << "来出="<<p1.getname() << endl;

	//p1.m_name = "hahsas";外界无法访问

	//p1.setname("haha");报错
	cout << "来出=" << p1.getage() << endl;//无赋值接口，外界无法赋值

	p1.setname("空");//无访问接口，外界无法访问


	p1.setage(160);
	p1.setage(5);
	cout << "来出=" << p1.getage2() << endl;//无赋值接口，外界无法赋值

	system("pause");
	return 0;
}