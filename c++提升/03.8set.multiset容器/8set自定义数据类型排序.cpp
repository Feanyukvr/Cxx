#include<iostream>
using namespace std;
#include <set>
class Person {
public:
	string m_Name;
	int m_Age;
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
};

class comparePerson {
public:
	bool operator()(const Person& p1, const Person& p2) const{
		//按照年龄进行排序  降序
		return p1.m_Age > p2.m_Age;
	};
};

void test8() {
	set<Person, comparePerson> s;
	Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++) {
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
	};
};

int main() {
	test8();
	system("pause");
	return 0;
};

//总结：
//对于自定义数据类型，set必须指定排序规则才可以插入数据