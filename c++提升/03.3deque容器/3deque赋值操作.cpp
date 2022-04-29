#include<iostream>
using namespace std;


//功能描述：
//给deque容器进行赋值

//函数原型：
//deque& operator=(const deque & deq);          //重载等号操作符
//assign(beg, end);                             //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem);                              //将n个elem拷贝赋值给本身。

#include <deque>
void printdeque3(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};
//赋值操作
void test3(){
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	};
	printdeque3(d1);

	deque<int>d2;
	d2 = d1;
	printdeque3(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printdeque3(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printdeque3(d4);
}

int main3() {
	test3();
	system("pause");
	return 0;
};

//总结：deque赋值操作也与vector相同，需熟练掌握