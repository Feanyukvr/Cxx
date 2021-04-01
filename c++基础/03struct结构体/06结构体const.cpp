#include <iostream>;
using namespace std;
#include<string>;

//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//const使用场景
void printStudent(const student *stu) //加const防止函数体中的误操作   加const后只能输出不能写回
{
	//stu->age = 100; //操作失败，因为加了const修饰
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

void printSt(student stu) //加const后只能输出不能写回,使用原函数导入不用指针，完美解决需要添加const的情况
{
	stu.age = 100; //操作失败，因为加了const修饰
	cout << "姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
}

int main06() {

	student stu = { "张三",18,100 };

	printStudent(&stu);
	printSt(stu);
	cout << "姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;

	system("pause");

	return 0;
}