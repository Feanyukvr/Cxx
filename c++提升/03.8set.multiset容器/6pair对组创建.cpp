#include<iostream>
using namespace std;

//pair���鴴��
//�ɶԳ��ֵ����ݣ����ö�����Է�����������
//���ִ�����ʽ��
//pair<type, type > p(value1, value2); 
//pair<type, type > p = make_pair(value1, value2); 

#include <string>

//���鴴��
void test6(){
	pair<string, int> p(string("Tom"), 20);
	cout << "������ " << p.first << " ���䣺 " << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
};

int main6() {
	test6();
	system("pause");
	return 0;
};

//�ܽ᣺
//���ַ�ʽ�����Դ������飬��סһ�ּ���