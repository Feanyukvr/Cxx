#include<iostream>
using namespace std;

#include <vector>
#include <algorithm>
//二元谓词
class MyCompare3{
public:
	bool operator()(int num1, int num2) {
		return num1 > num2;
	};
};

void test3(){
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	//默认从小到大
	sort(v.begin(), v.end());//排序
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
	cout << "----------------------------" << endl;

	//使用函数对象改变算法策略，排序从大到小
	sort(v.begin(), v.end(), MyCompare3());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
}

int main3() {
	test3();
	system("pause");
	return 0;
};
//总结：参数只有两个的谓词，称为二元谓词