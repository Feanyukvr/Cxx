#include<iostream>
using namespace std;

//deque������������
//˫�����飬���Զ�ͷ�˽��в���ɾ������
//
//deque��vector����
//vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
//deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻر�vector��
//vector����Ԫ��ʱ���ٶȻ��deque��, ��������ڲ�ʵ���й�
//
//deque�ڲ�����ԭ��:
//deque�ڲ��и��п�����ά��ÿ�λ������е����ݣ��������д����ʵ����
//�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�
//* deque�����ĵ�����Ҳ��֧��������ʵ�

//deque��������
//����ԭ�ͣ�
//deque<T > deqT;                  //Ĭ�Ϲ�����ʽ
//deque(beg, end);                 //���캯����[beg, end)�����е�Ԫ�ؿ���������
//deque(n, elem);                  //���캯����n��elem����������
//deque(const deque& deq);          //�������캯��
#include <deque>
void printDeque2(const deque<int>& d) {//ֻ���������޸�
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
		//*it = 100;
	};
	cout << endl;
};
//deque����
void test2() {
	deque<int> d1; //�޲ι��캯��
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	};
	printDeque2(d1);
	deque<int> d2(d1.begin(), d1.end());//����
	printDeque2(d2);

	deque<int>d3(10, 100);
	printDeque2(d3);

	deque<int>d4 = d3;                  //����
	printDeque2(d4);
};

int main2() {
	test2();
	system("pause");
	return 0;
};

//�ܽ�:deque������vector�����Ĺ��췽ʽ����һ�£����ʹ�ü���