#include<iostream>
using namespace std;
//�̳������������������֮һ
//�������ǿ����ܶ���վ�У����й�����ͷ���������ĵײ�����������������б�ֻ���������ݲ�ͬ
//���������Ƿֱ�������ͨд���ͼ̳е�д����ʵ����ҳ�е����ݣ���һ�¼̳д��ڵ������Լ��ô�
/*
//Javaҳ��
class Java{
public:
	void header(){
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer(){
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(���������б�)" << endl;
	}
	void content(){
		cout << "JAVAѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python{
public:
	void header(){
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer(){
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(���������б�)" << endl;
	}
	void content(){
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP{
public:
	void header(){
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer(){
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(���������б�)" << endl;
	}
	void content(){
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test01(){
	//Javaҳ��
	cout << "Java������Ƶҳ�����£� " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;
	//Pythonҳ��
	cout << "Python������Ƶҳ�����£� " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;
	//C++ҳ��
	cout << "C++������Ƶҳ�����£� " << endl;
	CPP cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();
}


//�̳�ʵ�֣�
//����ҳ��
class BasePage{
public:
	void header(){
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer(){
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(���������б�)" << endl;
	}
};
//Javaҳ��
class Java1 : public BasePage{//�̳з�ʽ�������̳�
public:
	void content(){
		cout << "JAVAѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python1 : public BasePage{
public:
	void content(){
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP1 : public BasePage{
public:
	void content(){
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test02(){
	//Javaҳ��
	cout << "Java������Ƶҳ�����£� " << endl;
	Java1 ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;

	//Pythonҳ��
	cout << "Python������Ƶҳ�����£� " << endl;
	Python1 py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;

	//C++ҳ��
	cout << "C++������Ƶҳ�����£� " << endl;
	CPP1 cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();


}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
*/

//�ܽ�
//�̳еĺô��� == ���Լ����ظ��Ĵ��� ==
//class A : public B;
//class ���ࣺ�̳з�ʽ ����
//A ���Ϊ���� �� ������
//B ���Ϊ���� �� ����
//�������еĳ�Ա���������󲿷�
//һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա��
//�ӻ���̳й������ı����乲�ԣ��������ĳ�Ա����������ԡ�