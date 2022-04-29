#include<iostream>
using namespace std;

//对deque 中的数据的存取操作
//函数原型： 
//at(int idx);      //返回索引idx所指的数据
//operator[];       //返回索引idx所指的数据
//front();          //返回容器中第一个数据元素
//back();           //返回容器中最后一个数据元素

#include <deque>
void printDeque6(const deque<int>&d){
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};
//数据存取
void test6() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque6(d);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	};
	cout << endl;

	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	};
	cout << endl;
	cout << "front:" << d.front() << endl;
	cout << "back:" << d.back() << endl;
};

int main6() {
	test6();
	system("pause");
	return 0;
};


//总结：
//- 除了用迭代器获取deque容器中元素，[]和at也可以
//- front返回容器第一个元素
//- back返回容器最后一个元素