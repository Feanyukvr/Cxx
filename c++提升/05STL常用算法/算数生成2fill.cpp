#include<iostream>
using namespace std;

//����ԭ�ͣ�
//fill(iterator beg, iterator end, value);
// �����������Ԫ��
// beg ��ʼ������
// end ����������
// value ����ֵ

#include <numeric>
#include <vector>
#include <algorithm>

class myPrint2{
public:
	void operator()(int val) {
		cout << val << " ";
	};
};

void test2() {
	vector<int> v;
	v.resize(10);
	//���
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint2());
	cout << endl;
};

int main2() {
	test2();
	system("pause");
	return 0;
}
//�ܽ᣺** ����fill���Խ�����������Ԫ�����Ϊ ָ����ֵ