#include<iostream>
using namespace std;

//���� 
//�㷨��Ҫ����ͷ�ļ�<algorithm > <functional > <numeric > ��ɡ�
//<algorithm >������STLͷ�ļ�������һ������Χ�漰���Ƚϡ� ���������ҡ��������������ơ��޸ĵȵ�
//<numeric >�����С��ֻ��������������������м���ѧ�����ģ�庯��
//<functional >������һЩģ����, ����������������

//���ñ����㷨
//for_each     //��������
//transform    //������������һ��������

//����������
//ʵ�ֱ�������
//����ԭ�ͣ�
//for_each(iterator beg, iterator end, _func); 

// �����㷨 ��������Ԫ��
// beg ��ʼ������
// end ����������
// _func �������ߺ�������

#include <algorithm>
#include <vector>

//��ͨ����
void print01(int val){
	cout << val << " ";
}
//��������
class print02{
public:
	void operator()(int val){
		cout << val << " ";
	}
};

//for_each�㷨�����÷�
void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
	}

	//�����㷨
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

int main1() {
	test01();
	system("pause");
	return 0;
}
//�ܽ�:for_each��ʵ�ʿ���������ñ����㷨����Ҫ��������