#include<iostream>
using namespace std;

//��ģ����̳�
template<class T>
class Base5{
public:
	T m;
};

//class Son51 :public Base5 //���󣬱���Ҫ֪�������е�T���ͣ���Ȼ����֪���̳ж��ٿռ�
class Son51:public Base5<int>{
};

void test51() {
	Son51 s1;
};

//��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class Son52 :public Base5<T2>{
public:
	T1 n;
	Son52(T1 n1,T2 m1) {
		 this->n = n1;
		 this->m = m1;
		cout << n<<" " << this->m << endl;
		cout << "T1������Ϊ�� " << typeid(T1).name() << endl;
		cout << "T2������Ϊ�� " << typeid(T2).name() << endl;
	};

};

void test52() {
	Son52<int, int>S2(2,2);
};

int main5() {
	test51();
	test52();
	system("pause");
	return 0;
}

//cl /d1 reportSingleClassLayoutSon52 "05 ��ģ����̳�.cpp"