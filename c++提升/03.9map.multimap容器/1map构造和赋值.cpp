#include<iostream>
using namespace std;

//map / multimap容器
//map中所有元素都是pair
//pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
//所有元素都会根据元素的key键值                    自动排序!!
//map / multimap属于关联式容器，底层结构是用二叉树实现。
//优点： 
//可以根据key值快速找到value值
//map和multimap区别：                  !!
//map不允许容器中有重复key值元素
//multimap允许容器中有重复key值元素
//
//map构造和赋值
//功能描述：
//对map容器进行构造和赋值操作
//函数原型：
//构造：
//map<T1, T2 > mp;                   //map默认构造函数: 
//map(const map& mp);                //拷贝构造函数
//map& operator=(const map& mp);     //重载等号操作符
#include <map>

void printMap1(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	};
	cout << endl;
};

void test1() {
	map<int, int>m1; //默认构造
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 20));
	m1.insert(pair<int, int>(2, 30));
	printMap1(m1);

	map<int, int>m2(m1); //拷贝构造
	printMap1(m2);

	map<int, int>m3;
	m3 = m2; //赋值
	printMap1(m3);
};

int main1() {
	test1();
	system("pause");
	return 0;
};
//总结：map中所有元素都是成对出现，插入数据时候要使用对组