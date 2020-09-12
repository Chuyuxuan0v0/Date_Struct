
#include <iostream>
#include<stdio.h>
#define PI 3.14159

using namespace std;


// 定义一个圆的数据结构，包含(x,y)圆心，r半径
typedef struct Circle {

    double r;
};



double Area(double r ) {//创建一个圆的面积函数，返回
    return r * PI;
}

double Circumference(double r) {//创建一个圆的周长函数，返回
    return PI * 2 * r;
}

int main()
{
    Circle _yuan0;//创建一个Circle数据类型的变量为_yuan0,类似于 int a;
    cout << "请输入圆的半径r=";
    cin >> _yuan0.r ;
    cout << "圆的面积为" << Area(_yuan0.r) << endl;
    cout << "圆的周长为" << Circumference(_yuan0.r) << endl;
    return 0;
  
}

