#include<iostream>
using namespace std;
//����������
//�����㷨ʵ�ֶ�deque������������
//�㷨��
//sort(iterator beg, iterator end)  //��beg��end������Ԫ�ؽ�������


#include <deque>
#include <algorithm>

void printDeque7(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}

void test7(){
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);

	printDeque7(d);
	sort(d.begin(), d.end());
	printDeque7(d);

}

int main7() {
	test7();
	system("pause");
	return 0;
}
//�ܽ᣺sort�㷨�ǳ�ʵ�ã�ʹ��ʱ����ͷ�ļ� algorithm����