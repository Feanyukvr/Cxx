#include <iostream>
using namespace std;


//��������
void fun(int&a) { //int &a=10,���Ϸ�
	cout << "hhhhhh21" << endl;
}
void fun(const int&a) {//const int &a=10,�Ϸ�
	cout << "22222221" << endl;
}
//Ĭ�ϲ�����������
void fun2(int a,int b=10) {//const int &a=10,�Ϸ�
	cout << "22222221" << endl;
}
void fun2(int a) {//const int &a=10,�Ϸ�
	cout << "22222221" << endl;
}
int main() {
	int a = 10;
	fun(a);
	const int b=10;
	fun(b);

	fun(10);//����const����Ϊconst int &a=10,�Ϸ���int &a=10,���Ϸ�

	//fun2(a);//�������������룬�ᱨ��
	fun2(1, 2);//ֻ���ߵ�һ�����������

	system("pause");
	return 0;
}