#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*
	������ n�Ľ׳ˡ�
		˼·��
		��һ��������һ������n������һ����ֵ��ʾn��
		�ڶ�����ͨ��forѭ����䣬ʵ����ֵ���۳�
	*/
	int n = 0;
	int num = 1;//�����۳��Ժ����
	printf("������n����ֵ��\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		num = num * i;
		printf("%d�Ľ׳��ǣ�%d\n", i, num);
	}
	if (n == 0)
		printf("0�Ľ׳��ǣ�0\n");
	printf("=====================\n");
	return 0;
}