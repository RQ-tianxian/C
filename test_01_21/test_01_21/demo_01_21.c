#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ṹ��  --  �����Լ����������һ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	int a = 10;//����4���ֽ�
	printf("%p\n", &a);
	int* p = &a;//p��һ������  --  ָ�����
	printf("%p\n", p);
	*p = 20;//*  --  �����ò�����/��ӷ��ʲ�����
	printf("a = %d\n", a);
	printf("%d\n", sizeof(p));//32λ -- 4    64λ  --  8
	printf("================\n");
	struct Book b1 = { "C���Գ������", 55 };//���ýṹ������ - ����һ�������͵Ľṹ�����
	struct Book* pb = &b1;
	printf("��������%s��\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	strcpy(b1.name, "C++");
	//strcpy - string copy - �ַ������� - �⺯�� - string.h
	printf("%s\n", pb->name);
	printf("===================\n");
	int age = 20;
	if (age > 200 || age <= 0)
		printf("��������\n");
	else if (age > 0 && age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	else if (age >= 18 && age <= 28)
		printf("����\n");
	else
		printf("����\n");
	printf("===================\n");
	int num1 = 0;
	scanf("%d", &num1);//����һ����
	if (num1 % 2 == 0)
		printf("�������ż��\n");
	else
		printf("�����������\n");
	printf("===================\n");
	for (int i = 1; i <= 100; i++)
	if (i % 2 == 0)
		printf("%d��ż��\n", i);
	else
		printf("%d������\n", i);
	printf("===================\n");
	int day = 0;
	printf("���������ڼ�������1~7��\n");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������\n");
	}
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	}
	printf("===================\n");
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;//��ֹ����ѭ��
		else if (i == 8)
			break;//��ֹ����ѭ��
		printf("��%d�д���\n",i);
	
	}
	printf("==================\n");
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������:>\n");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��:>\n");
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");
	printf("====================\n");
	for (int i = 1; i <= 10; i++)
		printf("%d\n", i);
	return 0;
}
