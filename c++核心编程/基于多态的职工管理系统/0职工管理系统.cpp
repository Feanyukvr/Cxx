#include"workermanager.h"
void test() {
	worker *worker = NULL;
	worker = new employee(1, "����", 1);
	worker->showInfo();
	delete worker;
	worker = new boss(2, "����45", 1);
	worker->showInfo();
	delete worker;
	worker = new manager(3, "����4", 1);
	worker->showInfo();
	delete worker;
};
int main() {
	//test();
	workermanager wm;
	string choice = "0";
	while (true) {
		wm.show_Menu();
		cout << "����ְ��" <<wm.m_EmpNum<<"��" <<endl;
		cout << "��ѡ�������" ;
		cin >> choice;
		if (choice == "0" || choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7") {
			int a = stoi(choice);
			switch (a) {
			case 0://���沢�˳�
				wm.exitSystem();
				break;
			case 1://���Ա��
				wm.Add_Emp();
				break;
			case 2://չʾԱ��
				wm.show_Emp();
				break;
			case 3://ɾ��Ա��
				wm.del_Emp();
				break;
			case 4://�޸�Ա��
				wm.mod_Emp();
				break;
			case 5://����Ա��
				wm.find_Emp();
				break;
			case 6://����
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