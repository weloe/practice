#include<stdio.h>
#include<time.h>
int main09()
{
	srand((unsigned int)time(NULL));//随机数种子，若去掉则生成的随机数每次相同
	
	for (int i = 0;i < 10;i++)
	{
		int value = rand() % 10;
		
		printf("%d\n", value);
	}
	return 0;
}


