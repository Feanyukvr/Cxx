#include"boss.h"

boss::boss(int id, string name, int dId) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
};

void boss::showInfo() {
	cout << "职工编号：" << this->m_Id << "\t职工名字：" << this->m_Name << "\t职工岗位：" << this->getDeptName() << "\t岗位职责：找单子" << endl;
};

string boss::getDeptName() {
	return string("老板");
};