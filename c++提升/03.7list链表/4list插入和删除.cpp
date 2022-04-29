#include<iostream>
using namespace std;

//list �����ɾ��
//��list�����������ݵĲ����ɾ��
//����ԭ�ͣ�
//push_back(elem);      //������β������һ��Ԫ��
//pop_back();           //ɾ�����������һ��Ԫ��
//push_front(elem);     //��������ͷ����һ��Ԫ��
//pop_front();          //��������ͷ�Ƴ���һ��Ԫ��
//insert(pos, elem);    //��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos, n, elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear();              //�Ƴ���������������
//erase(beg, end);      //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos);           //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//remove(elem);         //ɾ��������������elemֵƥ���Ԫ�ء�

#include <list>

void printList4(const list<int>&L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//�����ɾ��
void test4(){
	list<int> L;
	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//ͷ��
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList4(L);

	//βɾ
	L.pop_back();
	printList4(L);

	//ͷɾ
	L.pop_front();
	printList4(L);

	//����
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	printList4(L);

	//ɾ��
	it = L.begin();
	L.erase(++it);
	printList4(L);

	//�Ƴ�
	L.push_back(10000);
	L.push_back(1000);
	L.push_back(10000);
	printList4(L);
	L.remove(10000);
	printList4(L);
	//���
	L.clear();
	printList4(L);
};

int main4() {
	test4();
	system("pause");
	return 0;
};

//�ܽ᣺
//β��-- - push_back
//βɾ-- - pop_back
//ͷ��-- - push_front
//ͷɾ-- - pop_front
//����-- - insert
//ɾ��-- - erase
//�Ƴ�-- - remove
//���-- - clear