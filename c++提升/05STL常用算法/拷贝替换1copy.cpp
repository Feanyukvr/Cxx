#include<iostream>
using namespace std;

//�㷨��飺
//copy                      // ������ָ����Χ��Ԫ�ؿ�������һ������
//replace                   // ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if                // ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//swap                      // ��������������Ԫ��

//����������
//������ָ����Χ��Ԫ�ؿ�������һ������

//����ԭ�ͣ�
//copy(iterator beg, iterator end, iterator dest);  
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg  ��ʼ������
// end  ����������
// dest Ŀ����ʼ������

#include <algorithm>
#include <vector>

class myPrint1{
public:
	void operator()(int val) {
		cout << val << " ";
	};
};

void test1() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i + 1);
	};
	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint1());
	cout << endl;
};

int main1() {
	test1();
	system("pause");
	return 0;
}

//�ܽ᣺����copy�㷨�ڿ���ʱ��Ŀ�������ǵ���ǰ���ٿռ�