#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//����һ����stdio.h���ļ�
//std-��׼ standard
//i-input
//o-output
int main()//������-��������-main�������ҽ���һ��
{
	//int�����ε���˼
	//mainǰ���int��ʾmain�������÷���һ������
	printf("Hello World!\n");//����-print function - printf - ��ӡ����
	/*
	char -- �ַ�����
	%d -- ��ӡ����
	%c -- ��ӡ�ַ�
	%f -- ��ӡ������-��С��
	%p -- �Ե�ַ����ʽ��ӡ
	%o -- ��ӡ16��������
	*/
	//e.g
	printf("haha\n");
	char ch = 'A';//�ڴ�
	printf("%c\n", ch);//%c -- ��ӡ�ַ���ʽ������
	int age = 20;//int -- ������
	printf("%d\n", age);//%d -- ��ӡ����ʮ��������
	long num = 100;//long -- ������
	printf("%d\n", num);
	float f = 5.0;//float -- ������
	printf("%f\n", f);//%f -- ��ӡ�����ʽ������
	double d = 3.14;//double -- ˫���ȸ�����
	printf("%lf\n", d);//%lf -- ��ӡ˫���ȸ����͸�ʽ������
	printf("=====================\n");
	printf("%d\n", sizeof(char));//1�ֽ�
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4��8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("===================\n");
	int
	return 0;//����
}