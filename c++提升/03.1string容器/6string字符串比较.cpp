#include<iostream>
using namespace std;
//����������
//�ַ���֮��ıȽ�
//�ȽϷ�ʽ��
//�ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
//= ����   0
//> ����   1
//< ���� - 1

//����ԭ�ͣ�
//int compare(const string & s) const;    //���ַ���s�Ƚ�
//int compare(const char* s) const;       //���ַ���s�Ƚ�

//�ַ����Ƚ�

void test6() {
	string s1 = "hello";
	string s2 = "aello";
	int ret = s1.compare(s2);
	if (ret == 0) {
		cout << "s1 ���� s2" << endl;
	}
	else if (ret > 0) {
		cout << "s1 ���� s2" << endl;
	}
	else {
		cout << "s1 С�� s2" << endl;
	};
};

int main6() {
	test6();
	system("pause");
	return 0;
}

//�ܽ᣺�ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�
