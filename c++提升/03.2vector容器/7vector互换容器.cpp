#include<iostream>
using namespace std;

//实现两个容器内元素进行互换

//函数原型： 
//swap(vec);   // 将vec与本身的元素互换

#include <vector>
void printVector7(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};

void test71() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	};
	printVector7(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	};
	printVector7(v2);
	//互换容器
	cout << "互换后" << endl;
	v1.swap(v2);
	printVector7(v1);
	printVector7(v2);
};

void test72(){
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	};

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//收缩内存
	vector<int>(v).swap(v); //匿名对象

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
};

int main7() {
	test71();
	test72();
	system("pause");
	return 0;
};

//总结：swap可以使两个容器互换，可以达到实用的收缩内存效果