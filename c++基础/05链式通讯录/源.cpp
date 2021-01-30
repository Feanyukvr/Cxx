#include <iostream>
#include <string>
using namespace std;
#define MAX 5

typedef struct Node { //创建表的结点
	int data;
	struct Node *next;
} LinkList;

void InitList(LinkList *&head) { //创造表 
	head = (LinkList*)malloc(sizeof(LinkList));
	head->next = NULL;
}

void ListInsert(LinkList *head, int i) {  //在第i个位置上插入新的元素
	int j=0;
	int k=0;
	LinkList *p, *s;
	p = head;
	while (p != NULL) {
		p = p->next;
		j++;
	}
	if (j == MAX) {
		cout << "满表" << endl;
	}
	else {
		p = head;
		j = 0;
		while (p != NULL && j < i - 1) {
			p = p->next;
			j++;
		}
		if (p == NULL || i < 1)
			cout << "不能在" << i << "位上插入" << k << endl;
		else {
			s = (LinkList*)malloc(sizeof(LinkList));
			cin >> k;
			s->data = k;
			s->next = p->next;
			p->next = s;
			cout << "成功在" << i << "位上插入" << k << endl;
		}
	}
}

void Insert(LinkList *head) {  //尾插新元素
	int i=0;                                        //核心问题！！！！
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
		cout << "满表" << endl;
	}
}



void print(LinkList *head) {   //输出表的所有的元素
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