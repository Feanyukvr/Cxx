#include"ahead.h"

int main() {
	int t = 0;
	int select = 0;

	Addressbooks abs;
	//��ʼ��ͨѶ¼������
	abs.m_Size = 0;
	while (true) {
		showMeau();
		if (t == 1) {
			cout << "���������������:";
		}
		else {
			cout << "���������:";
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
			modifyPerson(&abs);//�޸�
			break;
		case 6:
			cleanPerson(&abs);
			t = 0;
			break;
		case 7:
			system("cls");
			cout << "��лʹ�ã�";
			system("pause");
			return 0;
		default:
			system("cls");
			t = 1;
			break;
		}
		cin.clear(); 			//����λ����
		cin.ignore(100, '\n'); 	//����100���ַ���ֱ������'\n'
	}
}