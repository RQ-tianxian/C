#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*
	·计算 n的阶乘。
		思路：
		第一步，定义一个变量n，键入一个数值表示n！
		第二步，通过for循环语句，实现数值的累乘
	*/
	int n = 0;
	int num = 1;//用于累乘以后叠加
	printf("请输入n的数值。\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		num = num * i;
		printf("%d的阶乘是：%d\n", i, num);
	}
	if (n == 0)
		printf("0的阶乘是：0\n");
	printf("=====================\n");
	return 0;
}