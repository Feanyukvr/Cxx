#include "Person7.h"

template<class T1, class T2>
Person7<T1, T2>::Person7(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<class t1, class t2>
void Person7<t1, t2>::showPerson() {
	cout << "ÐÕÃû£º " << this->m_Name << " ÄêÁä£º " << this->m_Age << endl;
};