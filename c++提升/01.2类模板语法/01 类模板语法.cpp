#include<iostream>
using namespace std;

#include <string>

//ÀàÄ£°å
template<typename NameType, class AgeType>
class Person1{
public:
	NameType m_Name;
	AgeType m_Age;
	Person1(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	void showPerson1() {
		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
	};
};

void test10() {
	Person1<string, int> p1("ËïÎò¿Õ", 999);
	p1.showPerson1();
	Person1<string,double > p2("ËïÎò¿Õ",22.3);
	p2.showPerson1();
};

int main1() {
	test10();
	system("pause");
	return 0;
};