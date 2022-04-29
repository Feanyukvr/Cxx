#include<iostream>
using namespace std;

//set大小和交换
//统计set容器大小以及交换set容器
//
//函数原型： 
//size();           //返回容器中元素的数目
//empty();         //判断容器是否为空
//swap(st);       //交换两个集合容器

#include <set>

void printSet2(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};

//大小
void test21() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	if (s1.empty()) {
		cout << "s1为空" << endl;
	}
	else {
		cout << "s1不为空" << endl;
		cout << "s1的大小为： " << s1.size() << endl;
	};
};

//交换
void test22(){
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	set<int> s2;
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "交换前" << endl;
	printSet2(s1);
	printSet2(s2);
	cout << endl;

	cout << "交换后" << endl;
	s1.swap(s2);
	printSet2(s1);
	printSet2(s2);
}

int main2() {
	test21();
	test22();
	system("pause");
	return 0;
}

//总结：
//统计大小-- - size
//判断是否为空-- - empty
//交换容器-- - swap