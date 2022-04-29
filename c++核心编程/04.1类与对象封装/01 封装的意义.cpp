#include <iostream>
using namespace std;

const double PI = 3.1415926;

//设计一个圆类，求圆的周长
//圆求周长的公式
class Circle{
//访问权限：公共权限
public:
	//属性：半径
	int m_r;
	//行为：获取圆周长
	double calculateZC() {
		return 2 * PI * m_r;
	}
};

int main01() {
	//通过圆类创建圆
	//实例化一个对象（通过类，创建一个对象）
	Circle cl;
	//给圆对象的属性进行赋值
	cl.m_r = 10;
	cout << "圆的周长为："<<cl.calculateZC()<<endl;

	system("pause");
	return 0;
}