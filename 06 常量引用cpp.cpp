#include <iostream>
using namespace std;

void showValue(int& val) {
	val = 1000;
	cout << "val=" << val << endl;
}
void showValue2(const int& val) {
	//val = 1000;//�޷��޸�
	cout << "val=" << val << endl;
}
int main06() {//���������βη�ֹ�����

	//const int &ref = 10;//int temp=10;const int &reef =temp;
	//int &ref = 10;//���ñ�������һ��Ϸ����ڴ�ռ�
	//��const��ֻ�������޸�
	int a = 10;
	showValue(a);
	cout << "a=" << a << endl;



	system("pause");
	return 0;
}