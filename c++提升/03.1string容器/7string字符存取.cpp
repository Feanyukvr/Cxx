#include<iostream>
using namespace std;
//string�е����ַ���ȡ��ʽ������
//char& operator[](int n);               //ͨ��[]��ʽȡ�ַ�
//char& at(int n);                       //ͨ��at������ȡ�ַ�

void test7() {
	string str = "hello world";
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	};
	cout << endl;

	for (int i = 0; i < str.size(); i++) {
		cout << str.at(i) << " ";
	};
	cout << endl;
	//�ַ��޸�
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;
};

int main7() {
	test7();
	system("pause");
	return 0;
};

//�ܽ᣺string�ַ����е����ַ���ȡ�����ַ�ʽ������[] �� at