#include<iostream>
using namespace std;
#include "myArray.hpp"

void printIntArray(myArray <int> &arr) {
	for (int i = 0; i < arr.getSize(); i++){
		cout << arr[i] << endl;
	};
};

void test91() {
	myArray <int>arr1(5);
	for (int i = 0; i < 5; i++) {
		//利用尾插法向数组中插入数据
		arr1.push_Back(i);
	};
	cout << "arr1的打印输出为： " << endl;
	printIntArray(arr1);
	cout << "arr1的容量为： " << arr1.getCapacity() << endl;
	cout << "arr1的大小为： " << arr1.getSize() << endl;
	//myArray  <int>arr2=arr1;
	myArray <int>arr2(arr1);
	cout << "arr2的打印输出为： " << endl;
	printIntArray(arr2);
	//尾删
	arr2.pop_Back();
	cout << "arr2尾删后：" << endl;
	cout << "arr2的容量为： " << arr2.getCapacity() << endl;
	cout << "arr2的大小为： " << arr2.getSize() << endl;
	myArray <int>arr3(0);
	arr3 = arr1;
	cout << "arr3的容量为： " << arr3.getCapacity() << endl;
	cout << "arr3的大小为： " << arr3.getSize() << endl;
};

//测试自定义数据类型
class Person{
public:
	string m_Name;
	int m_Age;
	Person() {};
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
};
void printPerosnArray(myArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << "姓名： " << arr[i].m_Name << " 年龄： " << arr[i].m_Age << endl;
	};
};
void test92() {
	myArray<Person> arr(10);
	Person p;
	Person p1("孙悟空", 999);
	Person p2("韩信", 30);
	Person p3("妲己", 20);
	Person p4("赵云", 25);
	Person p5("安其拉", 27);
	//将数据插入到数组中
	arr.push_Back(p1);
	arr.push_Back(p2);
	arr.push_Back(p3);
	arr.push_Back(p4);
	arr.push_Back(p5);
	//打印数组
	printPerosnArray(arr);
	//输出容量 
	cout << "arr容量为： " << arr.getCapacity() << endl;
	//输出大小
	cout << "arr大小为： " << arr.getSize() << endl;
};

int main() {
	test91();
	test92();
	system("pause");
	return 0;
};