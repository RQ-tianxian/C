#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//结构体  --  我们自己创造出来的一种类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	int a = 10;//申请4个字节
	printf("%p\n", &a);
	int* p = &a;//p是一个变量  --  指针变量
	printf("%p\n", p);
	*p = 20;//*  --  解引用操作符/间接访问操作符
	printf("a = %d\n", a);
	printf("%d\n", sizeof(p));//32位 -- 4    64位  --  8
	printf("================\n");
	struct Book b1 = { "C语言程序设计", 55 };//利用结构体类型 - 创建一个该类型的结构体变量
	struct Book* pb = &b1;
	printf("书名：《%s》\n", b1.name);
	printf("价格：%d元\n", b1.price);
	printf("修改后的价格：%d元\n", b1.price);
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	strcpy(b1.name, "C++");
	//strcpy - string copy - 字符串拷贝 - 库函数 - string.h
	printf("%s\n", pb->name);
	printf("===================\n");
	int age = 20;
	if (age > 200 || age <= 0)
		printf("输入有误\n");
	else if (age > 0 && age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	else if (age >= 18 && age <= 28)
		printf("青年\n");
	else
		printf("成年\n");
	printf("===================\n");
	int num1 = 0;
	scanf("%d", &num1);//输入一个数
	if (num1 % 2 == 0)
		printf("这个数是偶数\n");
	else
		printf("这个数是奇数\n");
	printf("===================\n");
	for (int i = 1; i <= 100; i++)
	if (i % 2 == 0)
		printf("%d是偶数\n", i);
	else
		printf("%d是奇数\n", i);
	printf("===================\n");
	int day = 0;
	printf("请输入星期几（输入1~7）\n");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误\n");
	}
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	}
	printf("===================\n");
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;//终止本次循环
		else if (i == 8)
			break;//终止所有循环
		printf("第%d行代码\n",i);
	
	}
	printf("==================\n");
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>\n");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N）:>\n");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");
	printf("====================\n");
	for (int i = 1; i <= 10; i++)
		printf("%d\n", i);
	return 0;
}
