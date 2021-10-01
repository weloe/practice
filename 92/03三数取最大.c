#include<stdio.h>
int main04()
{
	int a,b,c;
	printf("请输入a，b，c\n");
	scanf_s("%d,%d,%d", &a,&b,&c);
	if (a > b)
	{
		if (a > c)
			printf("a最大\n");
		else
			printf("c最大\n");

	}
	if (a < b)
	{
		if (b < c)
			printf("c最大\n");
		else
			printf("b最大\n");
	}
	return 0;
}