#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;

class student {
public://Ĭ��private
	string m_name;//��Ա���ԣ���Ա����
	string m_id;
public:
	void setname() { //��Ա��������Ա����
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
	c.setname();//��ֵ����
	c.setid();//��ֵ����
	c.showname();
	c.showid();
	c.setname1("haha");//��ֵ����
	c.showname();

	system("pause");
	return 0;
}