#include<iostream>
using namespace std;

//��deque �е����ݵĴ�ȡ����
//����ԭ�ͣ� 
//at(int idx);      //��������idx��ָ������
//operator[];       //��������idx��ָ������
//front();          //���������е�һ������Ԫ��
//back();           //�������������һ������Ԫ��

#include <deque>
void printDeque6(const deque<int>&d){
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};
//���ݴ�ȡ
void test6() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque6(d);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	};
	cout << endl;

	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	};
	cout << endl;
	cout << "front:" << d.front() << endl;
	cout << "back:" << d.back() << endl;
};

int main6() {
	test6();
	system("pause");
	return 0;
};


//�ܽ᣺
//- �����õ�������ȡdeque������Ԫ�أ�[]��atҲ����
//- front����������һ��Ԫ��
//- back�����������һ��Ԫ��