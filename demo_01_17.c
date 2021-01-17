#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ADD(x, y) ((x) + (y))
void test()
	{
		int i = 0;
		i++;
		printf("%d\n", i);
	}
int main(){
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	int sum = ADD(2, 3);
	printf("sum = %d\n", sum);
	sum = 10 * ADD(2, 3);
	printf("sum = %d\n", sum);
	return 0;
}