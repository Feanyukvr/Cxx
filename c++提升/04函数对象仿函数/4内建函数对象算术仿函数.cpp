#include<iostream>
using namespace std;

//�ڽ���������
//STL�ڽ���һЩ��������
//* *����:**
//�����º���
//��ϵ�º���
//�߼��º���
//�÷��� * *
//��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//ʹ���ڽ�����������Ҫ����ͷ�ļ�#include<functional>

//����������
//ʵ����������
//����negate��һԪ���㣬�������Ƕ�Ԫ����
//�º���ԭ�ͣ�
//template<class T > T plus<T>             //�ӷ��º���
//template<class T > T minus<T>            //�����º���
//template<class T > T multiplies<T>       //�˷��º���
//template<class T > T divides<T>          //�����º���
//template<class T > T modulus<T>          //ȡģ�º���
//template<class T > T negate<T>           //ȡ���º���

#include <functional>
//negate

void test41() {
	negate<int> n;
	cout << n(50) << endl;
};

//plus
void test42(){
	plus<int> p;
	cout << p(10, 20) << endl;
};

int main4() {
	test41();
	test42();
	system("pause");
	return 0;
};

//�ܽ᣺ʹ���ڽ���������ʱ����Ҫ����ͷ�ļ� `#include <functional>`