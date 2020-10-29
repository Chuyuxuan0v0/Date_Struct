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
//创立数据结构类型
int InitList(Sqlist& L) {
	L.arr = new int[MAXSIZE];
	L.length = 0;
	cout << "节点创建成功" << endl << endl;
	return OK;
}//节点创立

int ListInsert(Sqlist& L, int i, int value) {
	if ((i <= 0) || (i > L.length + 1))
	{
		cout << "i的值输入不合法" << endl << endl;
		return ERROR;
	}
	if (L.length == MAXSIZE)
	{
		cout << "空间满了" << endl << endl;
		return ERROR;
	}
	else {
		for (int j = L.length - 1; j >= i - 1; --j) {
			L.arr[j + 1] = L.arr[j];//插入点后面的元素后移,腾出空间
		}
		L.arr[i - 1] = value;
		++L.length;
		cout << "数据插入成功" << endl  << endl;
		
	}
	return OK;
}


int ShowList(Sqlist& L) {
	for (int j = L.length;j>0; --j) {
		cout << "[" << L.arr[L.length - j] << "]";
	}
	cout << endl;
	cout << "数据输出成功" << endl << endl;
	return OK;
}

int DeleteList(Sqlist& L,int i) {
	if ((i < 1) || (i > L.length))
	{
		cout << "i的值输入不合法" << endl << endl;
		return ERROR;
	}
	else{for (int j = i; j <= L.length - 1; ++j) {
		L.arr[j - 1] = L.arr[j];
	}
	--L.length;
	cout << "数值删除成功" << endl << endl;
	return OK;
	}
}

int main() {
	Sqlist L;
	int value, i,option;
	while (true)
	{
		cout << "=============线性表相关操作================" << endl;
		cout << "" << endl;
		cout << "1.线性表节点创建 " << endl;
		cout << "2.线性表数值插入 " << endl;
		cout << "3.线性表数值删除 " << endl;
		cout << "4.线性表数值输出 " << endl;
		cout << "5.退出 " << endl;
		cout << ""<<endl;
		cout << "===========================================" << endl;

		cout << "请输入数值相关操作：                        " << endl;
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
			cout << "请输入要删除的位置：";
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