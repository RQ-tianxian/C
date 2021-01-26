#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
	·计算 1!+2!+3!+……+10！
		思路：
		第一步，定义一个变量n = 10， 用for语句实现1~10之内的数的阶乘
		第二步，定义一个变量sum用来存放1~10的阶乘的和
*/
int main()
{
	int n = 10;
	int num = 1;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		num = num * i;
		sum = sum + num;
	}
	printf("1!+2!+3!+……+10！ = %d\n", sum);
	return 0;
}