
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main010()
{
	int num;
	srand((unsigned int)time(NULL));
	int value = rand() % 10;
	
	
	for (;;)
	{
		
		printf("请输入一个数字\n");
		scanf_s("%d", &num);
		if (num > value)
		{
			printf("输入数较大\n");
		}
		else if (value > num)
		{
			printf("输入数较小\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}

	}
	return 0;
}