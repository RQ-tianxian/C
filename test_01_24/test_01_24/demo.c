#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	/*
	算法的实现
	a中放最大值，b次之，c中放最小值
	*/
	if (a < b)
	{
		int num = a;
		a = b;
		b = num;
	}
	
	if (a < c)
	{
		int num = a;
		a = c;
		c = num;
	}
	if (b < c)
	{
		int num = b;
		b = c;
		c = num;
	}
	printf("%d %d %d\n", a, b, c);
	printf("===================\n");
	int num1 = 0;
	scanf("%d", &num1);
	printf("%d以内3的倍数有：\n", num1);
	for (int i = 0; i <= num1; i++)
	if (i % 3 == 0)
	{
		printf("%d\n", i);
	}
	printf("===================\n");
	////辗转相除法求最大公约数
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	printf("===================\n");
	int count = 0;
	for (int i = 0; i <= 200; i++)
	{
		//判断i是否为素数
		//素数判断的规则
		/*
		1、试除法
		   产生i→i-1
		*/
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i %j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("0~200的素数一共有：%d个\n", count);
	printf("=====================\n");
	/*素数算法优化
	sqrt -- 开平方的数学库函数*/
	count = 0;
	for (int i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("100~200的素数一共有：%d个\n", count);
	printf("=====================\n");
	return 0;
}