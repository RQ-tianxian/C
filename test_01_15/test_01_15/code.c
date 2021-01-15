#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//库函数-C语言本身提供给我们使用的函数
//包含一个叫stdio.h的文件
//std-标准 standard
//i-input
//o-output
int main()//主函数-程序的入口-main函数有且仅有一个
{
	//int是整形的意思
	//main前面的int表示main函数调用返回一个整形
	printf("Hello World!\n");//函数-print function - printf - 打印函数
	/*
	char -- 字符类型
	%d -- 打印整形
	%c -- 打印字符
	%f -- 打印浮点数-打小数
	%p -- 以地址的形式打印
	%o -- 打印16进制数字
	*/
	//e.g
	printf("haha\n");
	char ch = 'A';//内存
	printf("%c\n", ch);//%c -- 打印字符格式的数据
	int age = 20;//int -- 短整型
	printf("%d\n", age);//%d -- 打印整形十进制数据
	long num = 100;//long -- 长整型
	printf("%d\n", num);
	float f = 5.0;//float -- 浮点型
	printf("%f\n", f);//%f -- 打印浮点格式的数据
	double d = 3.14;//double -- 双精度浮点型
	printf("%lf\n", d);//%lf -- 打印双精度浮点型格式的数据
	printf("=====================\n");
	printf("%d\n", sizeof(char));//1字节
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4或8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("===================\n");
	return 0;//返回
}
