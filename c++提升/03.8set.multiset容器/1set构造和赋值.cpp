#include<iostream>
using namespace std;

//set.multiset ����
//����Ԫ�ض����ڲ���ʱ�Զ�������
//set / multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//set��multiset����!
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��

//set����͸�ֵ
//��������������set�����Լ���ֵ
//���죺
//set<T > st;                        //Ĭ�Ϲ��캯����
//set(const set& st);                //�������캯��
//��ֵ��
//set& operator=(const set& st);     //���صȺŲ�����
#include <set>
void printSet1(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};

//����͸�ֵ
void test1() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(40);//�ظ�����ʾ
	printSet1(s1);
	cout << s1.size() << endl;//��СΪ��
	//��������
	set<int>s2(s1);
	printSet1(s2);
	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet1(s3);
};

int main1() {
	test1();
	system("pause");
	return 0;
};


//�ܽ᣺
//set������������ʱ��insert
//set�����������ݵ����ݻ��Զ�����