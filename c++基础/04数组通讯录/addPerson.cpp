#include"ahead.h"

void addPerson(Addressbooks* abs) {
	//�жϵ绰���Ƿ�����
	if (abs->m_Size >= MAX) {
		cout << "ͨѶ¼�������޷����" << endl;
		return;g
	}
	else {
		//����
		cout << "������������";
		cin >> abs->personArray[abs->m_Size].m_Name;
		cout << "�������Ա�";
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		//�Ա�

		while (true){
			cin >> abs->personArray[abs->m_Size].m_Sex;
			if (abs->personArray[abs->m_Size].m_Sex == 1 || abs->personArray[abs->m_Size].m_Sex == 2){
				break;
			}
			cin.clear(); 			//����λ����
			cin.ignore(100, '\n'); 	//����100���ַ���ֱ������'\n'
			cout << "������������������:";
		}

		//����
		cout << "���������䣺";
		cin >> abs->personArray[abs->m_Size].m_Age;

		//��ϵ�绰
		cout << "��������ϵ�绰��";
		cin >> abs->personArray[abs->m_Size].m_Phone;
		
		//��ͥסַ
		cout << "�������ͥסַ��";
		string address;
		cin >> abs->personArray[abs->m_Size].m_Addr;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
