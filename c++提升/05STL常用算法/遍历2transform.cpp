#include<iostream>
using namespace std;

//����������
//������������һ��������

//����ԭ�ͣ�
//transform(iterator beg1, iterator end1, iterator beg2, _func); 
//beg1 Դ������ʼ������
//end1 Դ��������������
//beg2 Ŀ��������ʼ������
//_func �������ߺ�������

#include<vector>
#include<algorithm>

//���ñ����㷨  ���� transform

class transform1{
public:
	int operator()(int val) {
		return val;
	};
};

class myprint{
public:
	void operator()(int val) {
		cout << val << " ";
	};
};

void test2() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	};
	vector<int>vtarget; //Ŀ������
	vtarget.resize(v.size()); // Ŀ��������Ҫ��ǰ���ٿռ�
	transform(v.begin(), v.end(), vtarget.begin(), transform1());
	for_each(vtarget.begin(), vtarget.end(), myprint());
};

int main() {
	test2();
	system("pause");
	return 0;
};

//�ܽ᣺���˵�Ŀ����������Ҫ��ǰ���ٿռ䣬�����޷���������
