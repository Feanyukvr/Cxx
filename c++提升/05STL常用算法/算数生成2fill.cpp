#include<iostream>
using namespace std;

//函数原型：
//fill(iterator beg, iterator end, value);
// 向容器中填充元素
// beg 开始迭代器
// end 结束迭代器
// value 填充的值

#include <numeric>
#include <vector>
#include <algorithm>

class myPrint2{
public:
	void operator()(int val) {
		cout << val << " ";
	};
};

void test2() {
	vector<int> v;
	v.resize(10);
	//填充
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint2());
	cout << endl;
};

int main2() {
	test2();
	system("pause");
	return 0;
}
//总结：** 利用fill可以将容器区间内元素填充为 指定的值