#include<iostream>
using namespace std;
//���ã� ͨ�����ص����������ʵ���Լ�����������
/*
class MyInteger {
	friend ostream &operator<<(ostream &out, MyInteger myint);

private:
	int m_Num;
public:
	MyInteger() {
		m_Num = 0;
	}
	//ǰ��++
	MyInteger &operator++() {//����������Ϊ��һֱ��һ�����ݽ��е�������
		m_Num++;//��++
		return *this;//�ٷ���
	}
	//����++
	MyInteger operator++(int ) {//�ȷ���
		MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
		m_Num++;
		return temp;
	}
	//����ֵ��������Ϊ����������int��Ϊռλ��������������ǰ�ú���
};
ostream &operator<<(ostream &cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}

//ǰ��++ ��++ �ٷ���
void test01() {
	MyInteger myInt;
	cout << (++myInt) << endl;
	cout << myInt << endl;
}
//����++ �ȷ��� ��++
void test02() {
	MyInteger myInt;
	cout << (myInt++)<< endl;
	cout << myInt << endl;
}
int main() {
	test01();
	cout << "myInt" << endl;
	test02();
	system("pause");

	return 0;
}
//�ܽ᣺ ǰ�õ����������ã����õ�������ֵ
*/