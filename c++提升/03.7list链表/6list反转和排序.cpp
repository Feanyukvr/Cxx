#include<iostream>
using namespace std;

//list ��ת������
//�������е�Ԫ�ط�ת���Լ��������е����ݽ�������
//����ԭ�ͣ�
//reverse();    //��ת����
//sort();         //��������
#include <list>

void printList6(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};

bool myCompare6(int val1, int val2) {
	return val1 >val2;
};

//��ת������
void test6() {
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList6(L);

	//��ת������Ԫ��
	L.reverse();
	printList6(L);

	//����
	L.sort(); //Ĭ�ϵ�������� ��С����
	printList6(L);

	L.sort(myCompare6); //ָ�����򣬴Ӵ�С
	printList6(L);
};

int main6() {
	test6();
	system("pause");
	return 0;
};

//�ܽ᣺
//��ת-- - reverse
//����-- - sort ����Ա������