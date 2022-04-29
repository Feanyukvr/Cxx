#include <iostream>
using namespace std;

//浅拷贝：堆区指针拷贝
//深拷贝：堆区新建拷贝
class person {
public:
	int m_age; 
	int* m_height;
	person() {
		cout << "无参构造函数的调用" << endl;
	};
	person(int age, int height) {
		m_age = age;
		m_height = new int(height);
		cout << "参数构造函数的调用" << endl;
	};
	person(const person& p) {    //深拷贝操作
		cout << "拷贝构造函数的调用" << endl;
		m_age = p.m_age;
		m_height = new int(*p.m_height);
		//编译器默认拷贝    //浅拷贝
	};
	~person() {
		if (m_height != NULL) {//销毁堆区数据
			delete m_height;//删除堆区数据
			m_height = NULL;//删除指针        //浅拷贝 堆区内存反复释放
		};
		cout << "析构析构函数的调用" << endl;
	};
};

void test01() {
	person p1(18, 120);
	person p2(p1);//复制时堆区数据不变，复制粘贴指针
	cout << "p2=" << p2.m_age << "  p2身高=" << *p2.m_height << endl;
};

int main() {
	test01();
	system("pause");
	return 0;
};