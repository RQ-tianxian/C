#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 100//#define �����ʶ������
			   //#define ���Զ���� - ������
void test()
{
	//static���ξֲ��������ֲ��������������ڱ䳤
	//static ����ȫ�ֱ���
	//�ı��˱�����������  --  �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
	//����Դ�ļ���û����ʹ����
	//static���κ����ı��˺�������������
	//�ⲿ�������� ��  �ڲ���������
	static int a = 1;//a��1����̬�ľֲ�����
	a++;
	printf("a = %d\n", a);//2 3 4 5 6
}
#define MAX(X, Y) (X > Y ? X : Y)
extern Add(int, int);
extern Max(int, int);
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	printf("===============\n");
	extern int g_val;//extern  --  �����ⲿ���ŵ�
	printf("g_val = %d\n", g_val);
	printf("===============\n");
	int num1 = 10;
	int num2 = 20;
	int sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	printf("===============\n");
	int a = 20;
	int b = 30;
	int max = Max(a, b);
	printf("max = %d\n", max);//�����ķ�ʽ
	int max2 = MAX(a, b);
	printf("max = %d\n", max);//��ķ�ʽ
	printf("==============\n");
	int m = 10;//�ĸ��ֽ�
	printf("%p\n", &m);//&m  ��  ȡ��ַ
	int* p = &m;
	printf("%p\n", p);
	//��һ�ֱ�����������ŵ�ַ��  --  ָ�����
	*p = 20;// *  --  �����ò�����
	printf("%d\n", m);
	char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("%c\n", ch);
	printf("==============\n");
	return 0;
}