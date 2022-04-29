#include<iostream>
using namespace std;

//统计元素个数
//函数原型：
//count(iterator beg, iterator end, value);  
// 统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// value 统计的元素

#include <algorithm>
#include <vector>

//内置数据类型
void test51() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	int num = count(v.begin(), v.end(), 4);
	cout << "4的个数为： " << num << endl;
};

//自定义数据类型
class Person5{
public:
	string m_Name;
	int m_Age;
public:
	Person5(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	bool operator==(const Person5& p) {
		if (this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		};
	};
};

void test52(){
	vector<Person5> v;

	Person5 p1("刘备", 35);
	Person5 p2("关羽", 35);
	Person5 p3("张飞", 35);
	Person5 p4("赵云", 30);
	Person5 p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person5 p6("诸葛亮", 35);

	int num = count(v.begin(), v.end(), p6);
	cout << "num35 = " << num << endl;
}
int main5() {
	test51();
	test52();
	system("pause");
	return 0;
}
//总结：统计自定义数据类型时候，需要配合重载 operator= = 















