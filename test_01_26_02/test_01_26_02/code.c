#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
	������ 1!+2!+3!+����+10��
		˼·��
		��һ��������һ������n = 10�� ��for���ʵ��1~10֮�ڵ����Ľ׳�
		�ڶ���������һ������sum�������1~10�Ľ׳˵ĺ�
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
	printf("1!+2!+3!+����+10�� = %d\n", sum);
	return 0;
}