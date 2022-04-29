#include<iostream>
using namespace std;
#include <vector>//vector数组容器
#include <algorithm> //标准算法头文件

//vector容器存放内置数据类型

void myPrint1(int val) {
	cout << val << endl;
};

void test1() {
	//创建了一个vector容器，数组
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
    //v.begin()返回迭代器，这个迭代器指向容器中第一个数据
    //v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
    //vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
	//通过迭代器访问容器中的数
	//第一种遍历方式
	vector<int>::iterator itBegin = v.begin(); //起始迭代器  指向容器中第一个元素
	vector<int>::iterator itEnd = v.end();  //结束迭代器 指向容器中最后一个元素的下一个位置
	while (itBegin != itEnd){
		cout << *itBegin << endl;
		itBegin++;
	};

	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	};
	 
	//第三种遍历方式  利用STL提供遍历算法
	for_each(v.begin(), v.end(), myPrint1);
};

int main1() {
	test1();
	system("pause");
	return 0;
};