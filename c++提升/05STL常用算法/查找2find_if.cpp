#include<iostream>
using namespace std;

//按条件查找元素
//函数原型：
//find_if(iterator beg, iterator end, _Pred); 

// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// _Pred 函数或者谓词（返回bool类型的仿函数）

#include <algorithm>
#include <vector>
//内置数据类型
class GreaterFive2{
public:
	bool operator()(int val) {
		return val > 5;
	};
};

void test21() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	};
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive2());
	if (it == v.end()) {
		cout << "没有找到!" << endl;
	}
	else {
		cout << "找到大于5的数字:" << *it << endl;
	};
};

//自定义数据类型
class Person2 {
public:
	string m_Name;
	int m_Age;
public:
	Person2(string name, int age){
		this->m_Name = name;
		this->m_Age = age;
	};
};

class Greater202{
public:
	bool operator()(Person2& p) {
		return p.m_Age > 20;
	};
};

void test22() {
	vector<Person2> v;
	//创建数据
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person2>::iterator it = find_if(v.begin(), v.end(), Greater202());
	if (it == v.end()) {
		cout << "没有找到!" << endl;
	}
	else {
		cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
	};
};

int main2() {
	test21();
	test22();
	system("pause");
	return 0;
};


//总结：find_if按条件查找使查找更加灵活，提供的仿函数可以改变不同的策略














