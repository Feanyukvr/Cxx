#include<iostream>
using namespace std;

//功能描述： 
//从字符串中获取想要的子串
//函数原型：
//string substr(int pos = 0, int n = npos) const;    //返回由pos开始的n个字符组成的字符串

//子串
void test9(){
	string str = "abcdefg";
	string subStr = str.substr(0, 3);
	cout << "subStr = " << subStr << endl;
	string email = "hello@sina.com";
	int pos1 = email.find("@");
	int pos2 = email.find(".");
	string username = email.substr(0, pos1);
	string emailname = email.substr(pos1+1, pos2-pos1+3);
	cout << "username: " << username << endl;
	cout << "username: " << emailname << endl;
};

int main() {
	test9();
	system("pause");
	return 0;
};

//总结：灵活的运用求子串功能，可以在实际开发中获取有效的信息