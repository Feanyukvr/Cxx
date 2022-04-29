#include<iostream>
using namespace std;

//算术生成算法属于小型算法，使用时包含的头文件为 `#include <numeric>`
//算法简介：
//accumulate           // 计算容器元素累计总和
//fill                 // 向容器中添加元素
//函数原型：
//accumulate(iterator beg, iterator end, value); 
// 计算容器元素累计总和
// beg 开始迭代器
// end 结束迭代器
// value 起始值

#include <numeric>
#include <vector>
void test1() {
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	};
	
	vector<int>::iterator it = v.end();
	it--;
	it--;
	int total = accumulate(v.begin(), v.end(), 0);
	cout << "total = " << total << endl;
};

int main1() {
	test1();
	system("pause");
	return 0;
};
//总结：** accumulate使用时头文件注意是 numeric，这个算法很实用