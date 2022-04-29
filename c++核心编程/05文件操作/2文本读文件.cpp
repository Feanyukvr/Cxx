#include<iostream>;
using namespace std;
#include <fstream>
/*
#### 5.1.
���ļ���д�ļ��������ƣ����Ƕ�ȡ��ʽ����ڱȽ϶�
���ļ��������£�
1. ����ͷ�ļ�
\#include <fstream\>
2. ����������
ifstream ifs;
3. ���ļ����ж��ļ��Ƿ�򿪳ɹ�
ifs.open("�ļ�·��", �򿪷�ʽ);
4. ������
���ַ�ʽ��ȡ
5. �ر��ļ�
ifs.close();
*/


void test01(){
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()){
		cout << "�ļ���ʧ��" << endl;
		return;
	}


	//�����ַ�ʽ
	char c;
	while ((c = ifs.get()) != EOF){
		cout << c ;
	}
	ifs.close();
}

int main() {
	test01();
	system("pause");
	return 0;
}

/*
�ܽ᣺
- ���ļ��������� ifstream  ������fstream��
- ����is_open���������ж��ļ��Ƿ�򿪳ɹ�
- close �ر��ļ�
*/
/*
//��һ�ַ�ʽ
char buf[1024] = { 0 };
while (ifs >> buf){
	cout << buf << endl;
}
//�ڶ���
char buf[1024] = { 0 };
while (ifs.getline(buf,sizeof(buf))){
	cout << buf << endl;
}
������
string buf;
while (getline(ifs, buf)){
	cout << buf << endl;
}
*/