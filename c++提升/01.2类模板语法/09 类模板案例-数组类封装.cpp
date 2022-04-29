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
		//����β�巨�������в�������
		arr1.push_Back(i);
	};
	cout << "arr1�Ĵ�ӡ���Ϊ�� " << endl;
	printIntArray(arr1);
	cout << "arr1������Ϊ�� " << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ�� " << arr1.getSize() << endl;
	//myArray  <int>arr2=arr1;
	myArray <int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ�� " << endl;
	printIntArray(arr2);
	//βɾ
	arr2.pop_Back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2������Ϊ�� " << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ�� " << arr2.getSize() << endl;
	myArray <int>arr3(0);
	arr3 = arr1;
	cout << "arr3������Ϊ�� " << arr3.getCapacity() << endl;
	cout << "arr3�Ĵ�СΪ�� " << arr3.getSize() << endl;
};

//�����Զ�����������
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
		cout << "������ " << arr[i].m_Name << " ���䣺 " << arr[i].m_Age << endl;
	};
};
void test92() {
	myArray<Person> arr(10);
	Person p;
	Person p1("�����", 999);
	Person p2("����", 30);
	Person p3("槼�", 20);
	Person p4("����", 25);
	Person p5("������", 27);
	//�����ݲ��뵽������
	arr.push_Back(p1);
	arr.push_Back(p2);
	arr.push_Back(p3);
	arr.push_Back(p4);
	arr.push_Back(p5);
	//��ӡ����
	printPerosnArray(arr);
	//������� 
	cout << "arr����Ϊ�� " << arr.getCapacity() << endl;
	//�����С
	cout << "arr��СΪ�� " << arr.getSize() << endl;
};

int main() {
	test91();
	test92();
	system("pause");
	return 0;
};