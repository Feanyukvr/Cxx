#include<iostream>
using namespace std;

//按条件统计元素个数
//函数原型：
//count_if(iterator beg, iterator end, _Pred);  
// 按条件统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// _Pred 谓词

#include <algorithm>
#include <vector>

class Greater46{
public:
	bool operator()(int val) {
		return val >= 4;
	};
};

//内置数据类型
void test61() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num = count_if(v.begin(), v.end(), Greater46());
	cout << "大于4的个数为： " << num << endl;
};

//自定义数据类型
class Person6{
public:
	string m_Name;
	int m_Age;
public:
	Person6(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
};

class AgeLess35{
public:
	bool operator()(const Person6& p) {
		return p.m_Age < 35;
	};
};
void test62() {
	vector<Person6> v;

	Person6 p1("刘备", 35);
	Person6 p2("关羽", 35);
	Person6 p3("张飞", 35);
	Person6 p4("赵云", 30);
	Person6 p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeLess35());
	cout << "小于35岁的个数：" << num << endl;
};
int main() {
	test61();
	test62();
	system("pause");
	return 0;
};
//总结：按值统计用count，按条件统计用count_if