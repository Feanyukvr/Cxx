#include"ahead.h"
void modifyPerson(Addressbooks* abs) {
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "������������" << endl;
		cin >> abs->personArray[ret].m_Name;
		//����
		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		//�Ա�
		while (true) {
			cin >> abs->personArray[ret].m_Sex;
			if (abs->personArray[ret].m_Sex == 1 || abs->personArray[ret].m_Sex == 2){
				break;
			}
			cout << "������������������";
		}
		//����
		cout << "���������䣺" << endl;
		cin >> abs->personArray[ret].m_Age;
		
		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		cin >> abs->personArray[ret].m_Phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		cin >> abs->personArray[ret].m_Addr;

		cout << "�޸ĳɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}