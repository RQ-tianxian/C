#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//for (;;)//��ѭ��
	//{
	//	printf("C����\n");
	//}
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("��ϲ�����\n");
	}
	int i = 0;
	do
	{
		printf("�ô���\n");
		i++;
	}
	while (i < 10);
	printf("==================\n");
	int n = 0;
	int num = 1;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		num = num * i;
		sum = sum + num;
	}
	printf("%d", sum);
	printf("================\n");
	//��дһ�����룺��arr���飨�������ҵ�7���±�
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 11;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");
	//���۰���ҷ�����
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k > arr[mid])
			right = mid - 1;
		else if (k < arr[mid])
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
			
	}
	if (right < left)
		printf("�Ҳ��������\n");
	printf("==========================\n");
	char arr1[] = "welcome to xiangtan!";
	char arr2[] = "####################";
	left = 0;
	//right = sizeof(arr1) / sizeof(arr1[0] - 2);
	right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	return 0;
}