#include<iostream>
using namespace std;

//ν��
//����bool���͵ķº�����Ϊν��
//���operator()����һ����������ô����һԪν��
//���operator()����������������ô������Ԫν��
#include <vector>
#include <algorithm>

//1.һԪν��
struct GreaterFive2 {
	bool operator()(int val) {
		return val > 5;
	};
};

void test2() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	};
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive2());//���������ҵ���һ����ֹͣ

	if (it == v.end()) {
		cout << "û�ҵ�!" << endl;
	}
	else {
		cout << "�ҵ�:" << *it << endl;
	};
};

int main2(){
	test2();
	system("pause");
	return 0;
};

//�ܽ᣺����ֻ��һ����ν�ʣ���ΪһԪν��






