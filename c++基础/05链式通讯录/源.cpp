#include <iostream>
#include <string>
using namespace std;
#define MAX 5

typedef struct Node { //������Ľ��
	int data;
	struct Node *next;
} LinkList;

void InitList(LinkList *&head) { //����� 
	head = (LinkList*)malloc(sizeof(LinkList));
	head->next = NULL;
}

void ListInsert(LinkList *head, int i) {  //�ڵ�i��λ���ϲ����µ�Ԫ��
	int j=0;
	int k=0;
	LinkList *p, *s;
	p = head;
	while (p != NULL) {
		p = p->next;
		j++;
	}
	if (j == MAX) {
		cout << "����" << endl;
	}
	else {
		p = head;
		j = 0;
		while (p != NULL && j < i - 1) {
			p = p->next;
			j++;
		}
		if (p == NULL || i < 1)
			cout << "������" << i << "λ�ϲ���" << k << endl;
		else {
			s = (LinkList*)malloc(sizeof(LinkList));
			cin >> k;
			s->data = k;
			s->next = p->next;
			p->next = s;
			cout << "�ɹ���" << i << "λ�ϲ���" << k << endl;
		}
	}
}

void Insert(LinkList *head) {  //β����Ԫ��
	int i=0;                                        //�������⣡������
	LinkList *p, *s;
	p = head;
	while (p->next!= NULL) {
		p = p->next;
		i++;
	}
	if (i < MAX) {
		s = (LinkList*)malloc(sizeof(LinkList));
		cin >> s->data;
		s->next = p->next;
		p->next = s;
	}
	else {
		cout << "����" << endl;
	}
}



void print(LinkList *head) {   //���������е�Ԫ��
	LinkList *p;
	int i = 1;
	p = head->next;
	while (p != NULL) {
		cout << i<<"== " << p->data << endl;
		p = p->next;
		i++;
	}
}
int main() {
	LinkList *c;
	InitList(c);
	ListInsert(c, 2);
	ListInsert(c, 1);
	ListInsert(c, 2);
	ListInsert(c, 3);
	ListInsert(c, 4);

	print(c);
	Insert(c);
	print(c);
	Insert(c);
}