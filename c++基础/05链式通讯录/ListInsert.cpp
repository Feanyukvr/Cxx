/*void ListInsert(LinkList *head, int i, int x) {  //�ڵ�i��λ���ϲ����µ�Ԫ��
	int j;
	LinkList *p, *s;
	p = head;
	j = 0;
	while (p != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p == NULL || i < 1)
		cout << "������" << i << "λ�ϲ���" << x << endl;
	else {
		s = (LinkList*)malloc(sizeof(LinkList));
		s->data = x;
		s->next = p->next;
		p->next = s;
		cout << "�ɹ���" << i << "λ�ϲ���" << x << endl;
	}
}*/