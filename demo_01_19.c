#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 10
//void loveYou(int n){
//	int i = 1;
//	while (i <= n){
//		printf("I Love You %d\n", i);
//		i++;
//	}
//	printf("I Love You More Than %d\n", n);
//}
//int main(){
//	int mount = 0;
//	printf("���������\n");
//	scanf("%d", &mount);
//	loveYou(mount);
//}
int global = 2021;
int num1 = 0;
int num2 = 0;
int sum = 0;
void test()
{
	printf("test()-- %d\n", global);
}
Add(int x, int y)//����
{
	int z = x + y;
	return z;
}
enum Sex//ö�����ͳ���
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	test();
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };
	printf("%d\n", strlen(arr1));//strlen -- string length -- �����ַ�������
	printf("%d\n", strlen(arr2));
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//����Ľ����һ��
	const int num = 2;	//const����
	//const���εĳ�����
	//num�Ǳ������������г����ԣ���������˵n�ǳ�����
	printf("num = %d\n", num);
	printf("��ֱ�����������num1,num2\n");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("num1 + num2 = %d\n", sum);
	printf("%d\n", num);
	int arr[MAX] = { 0 };//#define  ����ı�ʶ������
	printf("%d\n", MAX);
	enum Sex s = FEMALE;//ö�ٳ���
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	printf("%d\n", strlen("c:\test\32\test.c"));//��������13
	printf("===================\n");
	//ѡ�����
	int input = 0;
	printf("�����̴��\n");
	printf("��Ҫ��������\n");
	printf("����1�����棩��0�������棩\n");
	scanf("%d", &input);
	if (input == 1)
		printf("�õ���offer��\n");
	else
		printf("�ؼ�ι��\n");
	printf("=====================\n");
	int line = 0;
	printf("��ʼ�ô���\n");
	while (line < 100)
	{
		line++;
		printf("����һ�д���\n");
	}
	if (line >= 100)
		printf("��Ϣһ�����ô���\n");
	printf("==================\n");
	int num3 = 10;//����������
	int num4 = 20;
	int sum2 = 0;
	sum2 = Add(num3, num4);
	printf("sum2 = %d\n", sum2);
	printf("=================\n");
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ�����10���������ֵ�����
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr3[i]);
		i++;
	}
	printf("===============\n");
	int a = 1;
	int b = a << 2;//��λ�����
	printf("%d\n", b);
	printf("===============\n");
	/*
	�������ƣ�λ������
	& �� ��λ ��
	| �� ��λ ��
	^ �� ��λ ���
	*/
	int a1 = 3;
	int a2 = 5;
	int a3 = a1 & a2;//011��101   ��
	printf("%d\n", a3);
	printf("==================\n");
	int arr4[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr4) / sizeof(arr4[0]);
	printf("%d\n", sizeof(arr4));
	printf("%d\n", sz);
	printf("==================\n");
	int b1 = 0;
	int b2 = ~b1;//��λȡ����2���ƣ�
	//Դ�롢���롢����
	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
	printf("%d\n", b2);//������  ��  -1
	//ʹ�õģ���ӡ�����������ԭ��
	printf("==================\n");
	int a5 = 10;
	int a6 = a5++;//��++�� ��ʹ�ã� ��++
	int a7 = ++a5;//ǰ++�� ��++�� ��ʹ��
	printf("a5 = %d, a6 = %d, a7 = %d\n", a5, a6, a7);
	printf("==================\n");
	int m1 = 10;
	int m2 = 20;
	int max = (m1 > m2 ? m1 : m2);//����������
	printf("%d\n", max);
	printf("==================\n");
	register int n1 = 10;//�����n1����ɼĴ�������
	typedef unsigned int u_int;//���Ͷ���
	u_int num6 = 20;
	return 0;
}