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
	�㷨��ʵ��
	a�з����ֵ��b��֮��c�з���Сֵ
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
	printf("%d����3�ı����У�\n", num1);
	for (int i = 0; i <= num1; i++)
	if (i % 3 == 0)
	{
		printf("%d\n", i);
	}
	printf("===================\n");
	////շת����������Լ��
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
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		/*
		1���Գ���
		   ����i��i-1
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
	printf("0~200������һ���У�%d��\n", count);
	printf("=====================\n");
	/*�����㷨�Ż�
	sqrt -- ��ƽ������ѧ�⺯��*/
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
	printf("100~200������һ���У�%d��\n", count);
	printf("=====================\n");
	return 0;
}