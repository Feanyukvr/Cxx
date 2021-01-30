#include"ahead.h"

int main() {
	int t = 0;
	int select = 0;

	Addressbooks abs;
	//初始化通讯录中人数
	abs.m_Size = 0;
	while (true) {
		showMeau();
		if (t == 1) {
			cout << "输入错误，重新输入:";
		}
		else {
			cout << "请输入操作:";
		}
		cin >> select;
		switch (select) {
		case 1:
			addPerson(&abs);
			t = 0;
			break;
		case 2:
			showPerson(&abs);
			t = 0;
			break;
		case 3:
			deletePerson(&abs);
			t = 0;
			break;
		case 4:
			findPerson(&abs);
			t = 0;
			break;
		case 5:
			modifyPerson(&abs);//修改
			break;
		case 6:
			cleanPerson(&abs);
			t = 0;
			break;
		case 7:
			system("cls");
			cout << "感谢使用！";
			system("pause");
			return 0;
		default:
			system("cls");
			t = 1;
			break;
		}
		cin.clear(); 			//错误位重置
		cin.ignore(100, '\n'); 	//忽略100个字符，直到遇到'\n'
	}
}