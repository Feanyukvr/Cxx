#include <iostream>;
using namespace std;
#include<string>;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//constʹ�ó���
void printStudent(const student *stu) //��const��ֹ�������е������   ��const��ֻ���������д��
{
	//stu->age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}

void printSt(student stu) //��const��ֻ���������д��,ʹ��ԭ�������벻��ָ�룬���������Ҫ���const�����
{
	stu.age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu.name << " ���䣺" << stu.age << " ������" << stu.score << endl;
}

int main06() {

	student stu = { "����",18,100 };

	printStudent(&stu);
	printSt(stu);
	cout << "������" << stu.name << " ���䣺" << stu.age << " ������" << stu.score << endl;

	system("pause");

	return 0;
}