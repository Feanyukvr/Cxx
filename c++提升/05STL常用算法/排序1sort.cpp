#include <iostream>
using namespace std;

//���ճ��õ������㷨
//sort             //��������Ԫ�ؽ�������
//random_shuffle   //ϴ��   ָ����Χ�ڵ�Ԫ�������������
//merge            // ����Ԫ�غϲ������洢����һ������
//reverse          // ��תָ����Χ��Ԫ��

//����ԭ�ͣ� 
//sort(iterator beg, iterator end, _Pred);  
//��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//beg  ��ʼ������
//end  ����������
//_Pred  ν��

#include <algorithm>
#include <vector>

void myPrint1(int val) {
	cout << val << " ";
};

void test1() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sortĬ�ϴ�С��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint1);
	cout << endl;

	//�Ӵ�С����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint1);
	cout << endl;
}

int main1() {
	test1();
	system("pause");
	return 0;
}

//�ܽ᣺** sort���ڿ�������õ��㷨֮һ������������