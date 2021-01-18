#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char ch = 'w';
	char* pc = &ch;
	*pc = 'q';
	printf("%c\n", ch);
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(double *));
	return 0;
}