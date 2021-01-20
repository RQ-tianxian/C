#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 100//#define 定义标识符常量
			   //#define 可以定义宏 - 带参数
void test()
{
	//static修饰局部变量，局部变量的生命周期变长
	//static 修饰全局变量
	//改变了变量的作用域  --  让静态的全局变量只能在自己所在的源文件内部使用
	//出了源文件就没法再使用了
	//static修饰函数改变了函数的链接属性
	//外部链接属性 →  内部链接属性
	static int a = 1;//a是1个静态的局部变量
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
	extern int g_val;//extern  --  声明外部符号的
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
	printf("max = %d\n", max);//函数的方式
	int max2 = MAX(a, b);
	printf("max = %d\n", max);//宏的方式
	printf("==============\n");
	int m = 10;//四个字节
	printf("%p\n", &m);//&m  →  取地址
	int* p = &m;
	printf("%p\n", p);
	//有一种变量是用来存放地址的  --  指针变量
	*p = 20;// *  --  解引用操作符
	printf("%d\n", m);
	char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("%c\n", ch);
	printf("==============\n");
	return 0;
}