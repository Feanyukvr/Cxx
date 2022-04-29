#include<iostream>
using namespace std;
//减少vector在动态扩展容量时的扩展次数
//函数原型：
//reserve(int len);         //容器预留len个元素长度，预留位置不初始化，元素不可访问。

#include <vector>
void test8(){
	vector<int> v1;
	//预留空间

	int num1 = 0;
	int* p1 = NULL;
	for (int i = 0; i < 100000; i++) {
		v1.push_back(i);
		if (p1 != &v1[0]) {//开辟一次增加一次
			p1 = &v1[0];
			num1++;
		};
	};
	cout << "num:" << num1 << endl;

	vector<int> v;
	//预留空间
	v.reserve(100000);
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		};
	};
	cout << "num:" << num << endl;
};

int main() {
	test8();
	system("pause");
	return 0;
};
////总结：如果数据量较大，可以一开始利用reserve预留空间



//vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive2());//匿名对象