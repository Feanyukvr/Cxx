#include<iostream>
using namespace std;
#include <vector>//vector��������
#include <algorithm> //��׼�㷨ͷ�ļ�

//vector�������������������

void myPrint1(int val) {
	cout << val << endl;
};

void test1() {
	//������һ��vector����������
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
    //v.begin()���ص����������������ָ�������е�һ������
    //v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
    //vector<int>::iterator �õ�vector<int>���������ĵ���������
	//ͨ�����������������е���
	//��һ�ֱ�����ʽ
	vector<int>::iterator itBegin = v.begin(); //��ʼ������  ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();  //���������� ָ�����������һ��Ԫ�ص���һ��λ��
	while (itBegin != itEnd){
		cout << *itBegin << endl;
		itBegin++;
	};

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	};
	 
	//�����ֱ�����ʽ  ����STL�ṩ�����㷨
	for_each(v.begin(), v.end(), myPrint1);
};

int main1() {
	test1();
	system("pause");
	return 0;
};