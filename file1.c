#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a + b;
	printf("%d", a);

	return 0;
}