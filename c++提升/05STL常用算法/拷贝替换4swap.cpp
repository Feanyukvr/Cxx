#include<iostream>
using namespace std;

//功能描述：
//互换两个容器的元素

//函数原型：
//swap(container c1, container c2); 
// 互换两个容器的元素
// c1容器1
// c2容器2

#include <algorithm>
#include <vector>

class myPrint4{
public:
	void operator()(int val) {
		cout << val << " ";
	};
};

void test4() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 100);
	};

	cout << "交换前： " << endl;
	for_each(v1.begin(), v1.end(), myPrint4());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint4());
	cout << endl;

	cout << "交换后： " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint4());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint4());
	cout << endl;
};

int main() {
	test4();
	system("pause");
	return 0;
};

//总结：** swap交换容器时，注意交换的容器要同种类型