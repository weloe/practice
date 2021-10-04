#include<stdio.h>
int main06()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 100);
	return 0;
}


#include<stdio.h>
int main07()
{
	int i = 10;
	do
	{
		
		int a = i / 100;
		int b = i % 10;
		int c = i % 100 / 10;

		if (a*a*a+b*b*b+c*c*c==i)
		{
			printf("%d\n", i);
		}
		i++;
	} while (i < 999);
}