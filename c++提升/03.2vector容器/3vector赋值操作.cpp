#include<iostream>
using namespace std;

//��vector�������и�ֵ
//����ԭ�ͣ�
//vector& operator=(const vector & vec);  // ���صȺŲ�����
//assign(beg, end);                       //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem);                        //��n��elem������ֵ������

#include <vector>
void printVector3(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
}

//��ֵ����
void test3(){
	vector<int> v1; //�޲ι���
	for (int i = 0; i < 10; i++){
		v1.push_back(i);
	}
	printVector3(v1);

	vector<int>v2;
	v2 = v1;
	printVector3(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector3(v3);

	vector<int>v4;
	v4.assign(10, 100);
	printVector3(v4);
}

int main3() {
	test3();
	system("pause");
	return 0;
};

//�ܽ᣺ vector��ֵ��ʽ�Ƚϼ򵥣�ʹ��operator = ������assign������