#include<stdio.h>
#include <iostream>
#define MAXSIZE 5
#define OK 1 
#define ERROR 0
#include<stdlib.h>
using namespace std;
typedef struct {
	int* arr;
	int length;
}Sqlist;
//�������ݽṹ����
int InitList(Sqlist& L) {
	L.arr = new int[MAXSIZE];
	L.length = 0;
	cout << "�ڵ㴴���ɹ�" << endl << endl;
	return OK;
}//�ڵ㴴��

int ListInsert(Sqlist& L, int i, int value) {
	if ((i <= 0) || (i > L.length + 1))
	{
		cout << "i��ֵ���벻�Ϸ�" << endl << endl;
		return ERROR;
	}
	if (L.length == MAXSIZE)
	{
		cout << "�ռ�����" << endl << endl;
		return ERROR;
	}
	else {
		for (int j = L.length - 1; j >= i - 1; --j) {
			L.arr[j + 1] = L.arr[j];//���������Ԫ�غ���,�ڳ��ռ�
		}
		L.arr[i - 1] = value;
		++L.length;
		cout << "���ݲ���ɹ�" << endl  << endl;
		
	}
	return OK;
}


int ShowList(Sqlist& L) {
	for (int j = L.length;j>0; --j) {
		cout << "[" << L.arr[L.length - j] << "]";
	}
	cout << endl;
	cout << "��������ɹ�" << endl << endl;
	return OK;
}

int DeleteList(Sqlist& L,int i) {
	if ((i < 1) || (i > L.length))
	{
		cout << "i��ֵ���벻�Ϸ�" << endl << endl;
		return ERROR;
	}
	else{for (int j = i; j <= L.length - 1; ++j) {
		L.arr[j - 1] = L.arr[j];
	}
	--L.length;
	cout << "��ֵɾ���ɹ�" << endl << endl;
	return OK;
	}
}

int main() {
	Sqlist L;
	int value, i,option;
	while (true)
	{
		cout << "=============���Ա���ز���================" << endl;
		cout << "" << endl;
		cout << "1.���Ա�ڵ㴴�� " << endl;
		cout << "2.���Ա���ֵ���� " << endl;
		cout << "3.���Ա���ֵɾ�� " << endl;
		cout << "4.���Ա���ֵ��� " << endl;
		cout << "5.�˳� " << endl;
		cout << ""<<endl;
		cout << "===========================================" << endl;

		cout << "��������ֵ��ز�����                        " << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			InitList(L); break;
		case 2: 
		{
			for (int j = MAXSIZE; j > 0; --j)
			{
				cin >> i >> value;
				ListInsert(L, i, value);
			}break;
		}
		case 3:
		{
			cout << "������Ҫɾ����λ�ã�";
			cin >> i ;
		DeleteList(L, i);
		break; }
		case 4:
			ShowList(L); break;
		case 5:
			break;

		}
		if (option==5)
		{
			break;
		}

	}
}