#include <iostream>
using namespace std;

int func(int a, int) {//Ŀǰ�׶�ռλ�����ò���
	return a ;
}
int func2(int a, int =10) {//ռλ����Ĭ�ϲ���
	return a;
}

int main02() {
	cout << func(10, 20) << endl;


	system("pause");
	return 0;
}