#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int num1 = 2021;//全局变量--定义在代码块( { } )之外的变量
int a = 100;
int main()
{
	int a = 10;
	//局部变量和全部变量的名字建议不要相同 - 容易误会，产生bug
	//当局部变量和全局变量的名字相同的时候，局部变量优先
	int num2 = 2021;//局部变量--定义在代码块( { } )内部的变量
	int x = 0;
	int y = 0;
	printf("请依次输入两个数\n");
	scanf("%d%d",&x,&y);//输入数据 -- 使用输入函数scanf
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	int sum = x + y;
	printf("sum = %d\n", sum);
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", a);
	return 0;
}