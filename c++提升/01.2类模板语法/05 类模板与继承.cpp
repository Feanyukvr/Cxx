#include<iostream>
using namespace std;

//类模板与继承
template<class T>
class Base5{
public:
	T m;
};

//class Son51 :public Base5 //错误，必须要知道父类中的T类型，不然不能知道继承多少空间
class Son51:public Base5<int>{
};

void test51() {
	Son51 s1;
};

//如果想灵活指定父类中T类型，子类也需要变类模板
template<class T1,class T2>
class Son52 :public Base5<T2>{
public:
	T1 n;
	Son52(T1 n1,T2 m1) {
		 this->n = n1;
		 this->m = m1;
		cout << n<<" " << this->m << endl;
		cout << "T1的类型为： " << typeid(T1).name() << endl;
		cout << "T2的类型为： " << typeid(T2).name() << endl;
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

//cl /d1 reportSingleClassLayoutSon52 "05 类模板与继承.cpp"