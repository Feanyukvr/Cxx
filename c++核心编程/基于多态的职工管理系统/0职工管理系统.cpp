#include"workermanager.h"
void test() {
	worker *worker = NULL;
	worker = new employee(1, "张三", 1);
	worker->showInfo();
	delete worker;
	worker = new boss(2, "张三45", 1);
	worker->showInfo();
	delete worker;
	worker = new manager(3, "张三4", 1);
	worker->showInfo();
	delete worker;
};
int main() {
	//test();
	workermanager wm;
	string choice = "0";
	while (true) {
		wm.show_Menu();
		cout << "现有职工" <<wm.m_EmpNum<<"人" <<endl;
		cout << "请选择操作：" ;
		cin >> choice;
		if (choice == "0" || choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7") {
			int a = stoi(choice);
			switch (a) {
			case 0://储存并退出
				wm.exitSystem();
				break;
			case 1://添加员工
				wm.Add_Emp();
				break;
			case 2://展示员工
				wm.show_Emp();
				break;
			case 3://删除员工
				wm.del_Emp();
				break;
			case 4://修改员工
				wm.mod_Emp();
				break;
			case 5://查找员工
				wm.find_Emp();
				break;
			case 6://排序
				wm.sort_Emp();
				break;
			case 7:
				wm.clean_Emp();
				break;
			default:
				break;
			}
			system("cls");
		}
		else {
			cout << "fuck";
			system("pause");
			system("cls");
		};
	}
	system("pause");
	return 0;
}