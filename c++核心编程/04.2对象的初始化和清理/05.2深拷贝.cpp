#include <iostream>
using namespace std;

//ǳ����������ָ�뿽��
//����������½�����
class person {
public:
	int m_age; 
	int* m_height;
	person() {
		cout << "�޲ι��캯���ĵ���" << endl;
	};
	person(int age, int height) {
		m_age = age;
		m_height = new int(height);
		cout << "�������캯���ĵ���" << endl;
	};
	person(const person& p) {    //�������
		cout << "�������캯���ĵ���" << endl;
		m_age = p.m_age;
		m_height = new int(*p.m_height);
		//������Ĭ�Ͽ���    //ǳ����
	};
	~person() {
		if (m_height != NULL) {//���ٶ�������
			delete m_height;//ɾ����������
			m_height = NULL;//ɾ��ָ��        //ǳ���� �����ڴ淴���ͷ�
		};
		cout << "�������������ĵ���" << endl;
	};
};

void test01() {
	person p1(18, 120);
	person p2(p1);//����ʱ�������ݲ��䣬����ճ��ָ��
	cout << "p2=" << p2.m_age << "  p2���=" << *p2.m_height << endl;
};

int main() {
	test01();
	system("pause");
	return 0;
};