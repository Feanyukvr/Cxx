//�Լ���ͨ�õ�������
#pragma once 
#include <iostream>
using namespace std;

template<class t>
class myArray {
private:
	t* padDress;  //ָ��ָ��������ٵ���ʵ����
	int m_Capacity; //��������
	int m_Size; //�����С
public:
	//�вι���  ���� ����
	myArray(int capacity) {
		//cout << "myArray�вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->padDress = new t[this->m_Capacity];
	};
	//��������
	myArray(const myArray &arr) {
		//cout << "myArray�����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->padDress = arr.padDress;
		//���
		this->padDress = new t[arr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++) {
			this->padDress[i] = arr.padDress[i];
		};
	};

	//operator= ��ֹǳ��������   
	myArray &operator=(const myArray&arr) {
		//cout << "myArray  �� operator=����" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->padDress != NULL) {
			delete[] this->padDress;
			this->padDress = NULL;
		};
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->padDress = new t[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->padDress[i] = arr.padDress[i];
		};
		return *this;
	};

	//β�巨
	void push_Back(const t &val) {
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size) {
			return;
		};
		this->padDress[this->m_Size] = val; //������ĩβ��������
		this->m_Size++; //���������С
	};

	//βɾ��
	void pop_Back() {
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0) {
			return;
		};
		this->m_Size--;
	};

	//ͨ���±귽ʽ���������е�Ԫ��  arr[0] = 100
	t &operator[](int index) {
		return this->padDress[index];
	};

	//������������
	int getCapacity() {
		return this->m_Capacity;
	};

	//���������С
	int getSize() {
		return this->m_Size;
	};

	//��������
	~myArray() {
		if (this->padDress != NULL){
			//cout << "myArray������������" << endl;
			delete[] this->padDress;
			this->padDress = NULL;
		};
	};
};