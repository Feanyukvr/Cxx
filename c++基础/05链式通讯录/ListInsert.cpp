/*void ListInsert(LinkList *head, int i, int x) {  //在第i个位置上插入新的元素
	int j;
	LinkList *p, *s;
	p = head;
	j = 0;
	while (p != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p == NULL || i < 1)
		cout << "不能在" << i << "位上插入" << x << endl;
	else {
		s = (LinkList*)malloc(sizeof(LinkList));
		s->data = x;
		s->next = p->next;
		p->next = s;
		cout << "成功在" << i << "位上插入" << x << endl;
	}
}*/