#include<stdio.h>
int main04()
{
	int a,b,c;
	printf("������a��b��c\n");
	scanf_s("%d,%d,%d", &a,&b,&c);
	if (a > b)
	{
		if (a > c)
			printf("a���\n");
		else
			printf("c���\n");

	}
	if (a < b)
	{
		if (b < c)
			printf("c���\n");
		else
			printf("b���\n");
	}
	return 0;
}