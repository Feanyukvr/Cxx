#include<iostream>
using namespace std;
//���ܣ� 
//vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������

//vector����ͨ�������� 
//��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ 
//��̬��չ�� 
//��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�

//vector�����ĵ�������֧��������ʵĵ�����

//���������� 
//����vector����
//����ԭ�ͣ�
//vector<T > v;               		 //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(), v.end());        //��v[begin(), end())�����е�Ԫ�ؿ���������
//vector(n, elem);                   //���캯����n��elem����������
//vector(const vector& vec);         //�������캯����

#include <vector>
void printVector2(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};

void test2(){
	vector<int> v1; //�޲ι���
	for (int i = 0; i < 10; i++){
		v1.push_back(i);//int i����
	};
	printVector2(v1);

	vector<int> v2(v1.begin(), v1.end());//����
	printVector2(v2);

	vector<int> v3(10, 100);//10��int 100
	printVector2(v3);

	vector<int> v4(v3);//����
	printVector2(v4);
};

int main2() {
	test2();
	system("pause");
	return 0;
};

//** �ܽ᣺** vector�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���