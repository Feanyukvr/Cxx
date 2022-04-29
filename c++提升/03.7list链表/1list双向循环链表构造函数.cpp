#include<iostream>
using namespace std;

//list��������
//���ܣ������ݽ�����ʽ�洢
//���� ��list����һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�

//�������ɣ�������һϵ�н�����
//������ɣ�һ���Ǵ洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ���� 
//STL�е�������һ��˫��ѭ������
//��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������

//list���ŵ㣺
//���ö�̬�洢���䣬��������ڴ��˷Ѻ����
//����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��
//list��ȱ�㣺
//���������ǿռ�(ָ����) �� ʱ�䣨����������ķѽϴ�

//List��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ������ġ�
//�ܽ᣺STL��List��vector���������ʹ�õ�������������ȱ��

//list���캯��
//����������
//����list����
//list<T > lst;                               //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
//list(beg, end);                             //���캯����[beg, end)�����е�Ԫ�ؿ���������
//list(n, elem);                              //���캯����n��elem����������
//list(const list& lst);                      //�������캯����

#include <list>

void printList1(const list<int>&L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test1(){
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList1(L1);

	list<int>L2(L1.begin(), L1.end());
	printList1(L2);

	list<int>L3(L2);
	printList1(L3);

	list<int>L4(10, 1000);
	printList1(L4);
}

int main1() {
	test1();
	system("pause");
	return 0;
};

//�ܽ᣺list���췽ʽͬ��������STL�����������������ռ���