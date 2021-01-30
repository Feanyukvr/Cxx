#include"ahead.h"
void modifyPerson(Addressbooks* abs) {
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "请输入姓名：" << endl;
		cin >> abs->personArray[ret].m_Name;
		//姓名
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		//性别
		while (true) {
			cin >> abs->personArray[ret].m_Sex;
			if (abs->personArray[ret].m_Sex == 1 || abs->personArray[ret].m_Sex == 2){
				break;
			}
			cout << "输入有误，请重新输入";
		}
		//年龄
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[ret].m_Age;
		
		//联系电话
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[ret].m_Phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[ret].m_Addr;

		cout << "修改成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}