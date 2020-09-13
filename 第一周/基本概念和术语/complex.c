#include<stdio.h>

//定义复数结构体
typedef struct {
	float realpart;		//实部
	float imagpart;		//虚部
}Complex;

//C语言中，函数的定义部分出现在被调用的函数之后,需要在前面声明

/*
void assign(Complex* A, float real, float imag); //赋值声明
void add(Complex* A, float real, float imag); //加法
void minus(Complex* A, float real, float imag); //减法
void multiply(Complex* A, float real, float imag); //乘法
void divide(Complex* A, float eal, float imag); //除法
*/
void assign(Complex* A, float real, float imag) { 
	A->realpart = real;		//实部赋值
	A->imagpart = imag;		//虚部赋值
}


void add(Complex* C, Complex A, Complex B) {
	C->realpart = A.realpart + B.realpart;	//实部相加
	C->imagpart = A.imagpart + B.imagpart;	//虚部相加
}

void multiply(Complex* C, Complex A, Complex B) {
	C->realpart = (A.realpart * B.realpart) - (A.imagpart * B.realpart);	//实部相加
	C->imagpart = (A.realpart * B.imagpart )+ (B.realpart*A.imagpart);	//虚部相加
}

void  divide(Complex* C, Complex A, Complex B) {
	C->realpart = ((A.realpart * B.realpart) + (A.imagpart * B.imagpart)) / ((B.realpart * B.realpart) + (B.imagpart * B.imagpart));
	C->imagpart = ((A.imagpart * B.realpart) - (A.realpart * B.imagpart)) / ((B.realpart * B.realpart) + (B.imagpart * B.imagpart));
}
main()
{
	
	
	Complex z1, z2, z_jia, z_chen,z_chu;
	float a,b,c,d;//realpart,imagpart
	printf("输入第一复数的实部a=");
	scanf(&a);
	printf("输入第一复数的虚部b=");
	scanf(&b);
	printf("输入第二复数的实部c=");
	scanf(&c);
	printf("输入第二复数的虚部d=");

	scanf(&d);
	assign(&z1, a, b);//定义第一个复数 8+6i
	assign(&z2, c, d);//定义第二个复数 4+3i
	add(&z_jia, z1, z2);
	multiply(&z_chen, z1, z2);
	divide(&z_chu, z1, z2);
	
	printf("复数相加的结果为 = %f+%f\i",z_jia.realpart,z_jia.imagpart);
	printf("复数相乘的结果为 = %f+%f\i", z_chen.realpart, z_chen.imagpart);
	printf("复数相除的结果为 = %f+%f\i", z_chu.realpart, z_chu.imagpart);

	return 0;
}

