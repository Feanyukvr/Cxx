#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;

class student {
public://默认private
	string m_name;//成员属性，成员变量
	string m_id;
public:
	void setname() { //成员函数，成员方法
		cout << "name=" << m_name ;
		cin >> m_name;
	}
	void setid() {
		cout << "id=" << m_id ;
		cin >> m_id;
	}
	void setname1(string name) {
		m_name = name;
	}
	void showname() {
		cout << "name=" << m_name << endl;
	}
	void showid() {
		cout << "id=" << m_id<<endl;
	}
};

int main02() {
	student c;
	c.setname();//赋值操作
	c.setid();//赋值操作
	c.showname();
	c.showid();
	c.setname1("haha");//赋值操作
	c.showname();

	system("pause");
	return 0;
}