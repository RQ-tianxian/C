#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int num1 = 2021;//ȫ�ֱ���--�����ڴ����( { } )֮��ı���
int a = 100;
int main()
{
	int a = 10;
	//�ֲ�������ȫ�����������ֽ��鲻Ҫ��ͬ - ������ᣬ����bug
	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
	int num2 = 2021;//�ֲ�����--�����ڴ����( { } )�ڲ��ı���
	int x = 0;
	int y = 0;
	printf("����������������\n");
	scanf("%d%d",&x,&y);//�������� -- ʹ�����뺯��scanf
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	int sum = x + y;
	printf("sum = %d\n", sum);
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", a);
	return 0;
}