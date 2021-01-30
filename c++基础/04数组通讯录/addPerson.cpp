#include"ahead.h"

void addPerson(Addressbooks* abs) {
	//判断电话本是否满了
	if (abs->m_Size >= MAX) {
		cout << "通讯录已满，无法添加" << endl;
		return;g
	}
	else {
		//姓名
		cout << "请输入姓名：";
		cin >> abs->personArray[abs->m_Size].m_Name;
		cout << "请输入性别：";
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		//性别

		while (true){
			cin >> abs->personArray[abs->m_Size].m_Sex;
			if (abs->personArray[abs->m_Size].m_Sex == 1 || abs->personArray[abs->m_Size].m_Sex == 2){
				break;
			}
			cin.clear(); 			//错误位重置
			cin.ignore(100, '\n'); 	//忽略100个字符，直到遇到'\n'
			cout << "输入有误，请重新输入:";
		}

		//年龄
		cout << "请输入年龄：";
		cin >> abs->personArray[abs->m_Size].m_Age;

		//联系电话
		cout << "请输入联系电话：";
		cin >> abs->personArray[abs->m_Size].m_Phone;
		
		//家庭住址
		cout << "请输入家庭住址：";
		string address;
		cin >> abs->personArray[abs->m_Size].m_Addr;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
