#include<iostream>
using namespace std;

//map / multimap����
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey����ֵ�������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//����Ԫ�ض������Ԫ�ص�key��ֵ                    �Զ�����!!
//map / multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//�ŵ㣺 
//���Ը���keyֵ�����ҵ�valueֵ
//map��multimap����                  !!
//map���������������ظ�keyֵԪ��
//multimap�������������ظ�keyֵԪ��
//
//map����͸�ֵ
//����������
//��map�������й���͸�ֵ����
//����ԭ�ͣ�
//���죺
//map<T1, T2 > mp;                   //mapĬ�Ϲ��캯��: 
//map(const map& mp);                //�������캯��
//map& operator=(const map& mp);     //���صȺŲ�����
#include <map>

void printMap1(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	};
	cout << endl;
};

void test1() {
	map<int, int>m1; //Ĭ�Ϲ���
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 20));
	m1.insert(pair<int, int>(2, 30));
	printMap1(m1);

	map<int, int>m2(m1); //��������
	printMap1(m2);

	map<int, int>m3;
	m3 = m2; //��ֵ
	printMap1(m3);
};

int main1() {
	test1();
	system("pause");
	return 0;
};
//�ܽ᣺map������Ԫ�ض��ǳɶԳ��֣���������ʱ��Ҫʹ�ö���