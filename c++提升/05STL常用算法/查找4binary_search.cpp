#include<iostream>
using namespace std;

//����ָ��Ԫ���Ƿ����
//����ԭ�ͣ�
//bool binary_search(iterator beg, iterator end, value);  
// ����ָ����Ԫ�أ��鵽 ����true  ����false
// ע��: ��**���������в�����**
// beg ��ʼ������
// end ����������
// value ���ҵ�Ԫ��

#include <algorithm>
#include <vector>

void test4() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	};
	//���ֲ���
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret) {
		cout << "�ҵ���" << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	};
};

int main4() {
	test4();
	system("pause");
	return 0;
}
//�ܽ�:���ֲ��ҷ�����Ч�ʺܸߣ�ֵ��ע����ǲ��ҵ�������Ԫ�ر������������