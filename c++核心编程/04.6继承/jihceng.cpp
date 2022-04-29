#include<iostream>
using namespace std;

class Animal {
public:
	int a;
};

class Sheep : virtual public Animal {
public:
	int b;
	Sheep(int a, int b) {
		this->a = a;
		this->b = b;
	};
	void show() {
		cout << a<<" " << b << endl;
	};
};

void test01() {
	Sheep st(1,2);
	st.show();

}
int main() {
	test01();
	system("pause");
	return 0;
}