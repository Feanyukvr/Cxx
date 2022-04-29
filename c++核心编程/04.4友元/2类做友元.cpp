#include <iostream>
using namespace std;
/*
class Building;

class goodGay{
private:
	Building* building;//对象指针
public:
	goodGay();
	void visit();
};

class Building{
	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
	friend class goodGay;
public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom;//卧室
public:
	Building() {};
};

goodGay::goodGay() {//类外实现成员函数。构造函数
	building = new Building;
}
void goodGay::visit() {
	cout << "好基友正在访问" << building->m_SittingRoom << endl;
	cout << "好基友正在访问" << building->m_BedRoom << endl;
}
Building::Building(){
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}


void test01(){
	goodGay gg;
	gg.visit();
}
int main() {
	test01();
	system("pause");
	return 0;
}
*/