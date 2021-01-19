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
//	printf("请输入次数\n");
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
Add(int x, int y)//函数
{
	int z = x + y;
	return z;
}
enum Sex//枚举类型常量
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
	printf("%d\n", strlen(arr1));//strlen -- string length -- 计算字符串长度
	printf("%d\n", strlen(arr2));
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//输出的结果不一样
	const int num = 2;	//const常量
	//const修饰的常变量
	//num是变量，但是又有常属性，所以我们说n是常变量
	printf("num = %d\n", num);
	printf("请分别输入两个数num1,num2\n");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("num1 + num2 = %d\n", sum);
	printf("%d\n", num);
	int arr[MAX] = { 0 };//#define  定义的标识符常量
	printf("%d\n", MAX);
	enum Sex s = FEMALE;//枚举常量
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	printf("%d\n", strlen("c:\test\32\test.c"));//输出结果是13
	printf("===================\n");
	//选择语句
	int input = 0;
	printf("加入编程大队\n");
	printf("你要认真编程吗？\n");
	printf("输入1（认真），0（不认真）\n");
	scanf("%d", &input);
	if (input == 1)
		printf("拿到好offer。\n");
	else
		printf("回家喂猪。\n");
	printf("=====================\n");
	int line = 0;
	printf("开始敲代码\n");
	while (line < 100)
	{
		line++;
		printf("再敲一行代码\n");
	}
	if (line >= 100)
		printf("休息一下再敲代码\n");
	printf("==================\n");
	int num3 = 10;//函数的引用
	int num4 = 20;
	int sum2 = 0;
	sum2 = Add(num3, num4);
	printf("sum2 = %d\n", sum2);
	printf("=================\n");
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个存放10个整数数字的数组
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr3[i]);
		i++;
	}
	printf("===============\n");
	int a = 1;
	int b = a << 2;//移位运算符
	printf("%d\n", b);
	printf("===============\n");
	/*
	（二进制）位操作符
	& → 按位 与
	| → 按位 或
	^ → 按位 异或
	*/
	int a1 = 3;
	int a2 = 5;
	int a3 = a1 & a2;//011、101   与
	printf("%d\n", a3);
	printf("==================\n");
	int arr4[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr4) / sizeof(arr4[0]);
	printf("%d\n", sizeof(arr4));
	printf("%d\n", sz);
	printf("==================\n");
	int b1 = 0;
	int b2 = ~b1;//按位取反（2进制）
	//源码、反码、补码
	//负数在内存中存储的时候，存储的是二进制的补码
	printf("%d\n", b2);//输出结果  →  -1
	//使用的，打印的是这个数的原码
	printf("==================\n");
	int a5 = 10;
	int a6 = a5++;//后++， 先使用， 再++
	int a7 = ++a5;//前++， 先++， 再使用
	printf("a5 = %d, a6 = %d, a7 = %d\n", a5, a6, a7);
	printf("==================\n");
	int m1 = 10;
	int m2 = 20;
	int max = (m1 > m2 ? m1 : m2);//条件操作符
	printf("%d\n", max);
	printf("==================\n");
	register int n1 = 10;//建议把n1定义成寄存器变量
	typedef unsigned int u_int;//类型定义
	u_int num6 = 20;
	return 0;
}