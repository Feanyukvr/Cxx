#include <iostream>
using namespace std;
//ͬһ���������£�������ͬ���������Ͳ�ͬ��������ͬ��˳��ͬ


void funca() {
	cout << "hhhhhh21"<< endl;
}
//int funca()//����ֵ��ͬ������

void funca(int a) {
	cout << "int a1" << endl;
}
void funca(double a) {
	cout << "doublea1" << endl;
}
void funca(double a,int b) {//˳����
	cout << "dint 222" << endl;
}
void funca(int a, double b) {
	cout << "dint ab" << endl;
}
int main03() {
	funca();
	funca(10);
	funca(10.34);
	funca(1, 2.33);
	funca(1.232, 233);


	system("pause");
	return 0;
}