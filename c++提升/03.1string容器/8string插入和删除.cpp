#include<iostream>
using namespace std;

//��string�ַ������в����ɾ���ַ�����
//����ԭ�ͣ�
//string& insert(int pos, const char* s);             //�����ַ���
//string& insert(int pos, const string& str);         //�����ַ���
//string& insert(int pos, int n, char c);             //��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos);               //ɾ����Pos��ʼ��n���ַ� 

//�ַ��������ɾ��
void test8() {
	string str = "hello";
	str.insert(0, "111");
	cout << str << endl;
	str.erase(0, 3);  //��1��λ�ÿ�ʼ3���ַ�
	cout << str << endl;
};

int main8() {
	test8();
	system("pause");
	return 0;
};

//�ܽ�:�����ɾ������ʼ�±궼�Ǵ�0��ʼ
