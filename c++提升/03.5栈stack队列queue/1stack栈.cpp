#include<iostream>
using namespace std;

//��� * *stack��һ�� * *�Ƚ���� * *(First In Last Out, FILO)�����ݽṹ����ֻ��һ������
//ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ
//ջ�н������ݳ�Ϊ-- - **��ջ * *`push`
//ջ�е������ݳ�Ϊ-- - **��ջ * *`pop`

//3.5.2 stack ���ýӿ�
//����������ջ�������õĶ���ӿ�
//���캯����
//stack<T > stk;                   //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
//stack(const stack& stk);         //�������캯��
//��ֵ������
//stack& operator=(const stack& stk);     //���صȺŲ�����
//���ݴ�ȡ��
//push(elem);                      //��ջ�����Ԫ��
//pop();                           //��ջ���Ƴ���һ��Ԫ��
//top();                           //����ջ��Ԫ��
//��С������
//empty();                         //�ж϶�ջ�Ƿ�Ϊ��
//size();                          //����ջ�Ĵ�С


#include <stack>

//ջ�������ýӿ�
void test1() {
	//����ջ���� ջ������������Ƚ����
	stack<int> s;
	//��ջ�����Ԫ�أ����� ѹջ ��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	while (!s.empty()) {
		//���ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
		//����ջ��Ԫ��
		s.pop();
	};
	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
};

int main1() {
	test1();
	system("pause");
	return 0;
};


//�ܽ᣺
//��ջ-- - push
//��ջ-- - pop
//����ջ��-- - top
//�ж�ջ�Ƿ�Ϊ��-- - empty
//����ջ��С-- - size



//����������