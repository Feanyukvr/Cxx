#include <iostream>
#include <string>
using namespace std;

//ͨ��4.3.1����֪����C++�г�Ա�����ͳ�Ա�����Ƿֿ��洢��
//ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ�����
//��ô�����ǣ���һ���������������Ǹ���������Լ����أ�

//c++ͨ���ṩ����Ķ���ָ�룬thisָ�룬�����������.*thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��!!��̬û�У�������ĳ������
//thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

//thisָ�����;��
//���βκͳ�Ա����ͬ��ʱ������thisָ��������
//����ķǾ�̬��Ա�����з��ض�������ʹ��return * this


//1.������Ƴ�ͻ

/*
class Person{
public:
	int age;
	//Person(int age) {//����age����
	//   age = age;
	//}
	Person(int age){
		//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
		this->age = age;
	}
	void PersonAddage(Person p) {
		this->age += p.age;
	}
	Person &PersonAddPerson(Person p) {//���ر��壬�ͷ���ֵ
		this->age += p.age;
		//���ض�����
		return *this;
	}
};
void test01(){
	Person p1(2);
	cout << "p1.age = " << p1.age << endl;

	Person p2(18);
	p2.PersonAddage(p1);
	cout << "p2.age = " << p2.age << endl;

	//��ʽ���˼��
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout << "p2.��ʽage = " << p2.age << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}*/