#include <iostream>
using namespace std;

const double PI = 3.1415926;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ
class Circle{
//����Ȩ�ޣ�����Ȩ��
public:
	//���ԣ��뾶
	int m_r;
	//��Ϊ����ȡԲ�ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}
};

int main01() {
	//ͨ��Բ�ഴ��Բ
	//ʵ����һ������ͨ���࣬����һ������
	Circle cl;
	//��Բ��������Խ��и�ֵ
	cl.m_r = 10;
	cout << "Բ���ܳ�Ϊ��"<<cl.calculateZC()<<endl;

	system("pause");
	return 0;
}