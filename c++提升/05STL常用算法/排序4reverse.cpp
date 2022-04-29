#include <iostream>
using namespace std;

//将容器内元素进行反转
//函数原型：
//reverse(iterator beg, iterator end);  
// 反转指定范围的元素
// beg 开始迭代器
// end 结束迭代器

#include <algorithm>
#include <vector>

class myPrint{
public:
	void operator()(int val) {
		cout << val << " ";
	};
};

void test4() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前： " << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	cout << "反转后： " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
};

int main() {
	test4();
	system("pause");
	return 0;
}

//总结：reverse反转区间内元素，面试题可能涉及到