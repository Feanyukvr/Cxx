#include<iostream>
using namespace std;

//���������� 
//���ַ����л�ȡ��Ҫ���Ӵ�
//����ԭ�ͣ�
//string substr(int pos = 0, int n = npos) const;    //������pos��ʼ��n���ַ���ɵ��ַ���

//�Ӵ�
void test9(){
	string str = "abcdefg";
	string subStr = str.substr(0, 3);
	cout << "subStr = " << subStr << endl;
	string email = "hello@sina.com";
	int pos1 = email.find("@");
	int pos2 = email.find(".");
	string username = email.substr(0, pos1);
	string emailname = email.substr(pos1+1, pos2-pos1+3);
	cout << "username: " << username << endl;
	cout << "username: " << emailname << endl;
};

int main() {
	test9();
	system("pause");
	return 0;
};

//�ܽ᣺�����������Ӵ����ܣ�������ʵ�ʿ����л�ȡ��Ч����Ϣ