#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Strlen(const char*str)
{
	if (*str == '\0')
	return 0;
	else return 1 + Strlen(str + 1);
}
void print(int n)
{
	if (n>9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	char *p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	printf("======================\n");
	int num = 1234;
	print(num);
	return 0;
}