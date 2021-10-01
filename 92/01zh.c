#include<stdio.h>
int main01()
{
	int weight;
	int value;
	scanf_s("%d", &weight);
	value = weight * 9;
	
	printf("%d", value);
	return 0;
}

int main02()
{
	int score;
	scanf_s("%d", &score);
	if (score > 700)
	{
		printf("上清华\n");
		if (score > 720)
		{
			printf("我要学计算机\n");

		}
		else if (score > 710)
		{
			printf("学挖掘机");
		}
		else
		{
			printf("学考古");
		}
	}
	else if (score > 680)
	{
		printf("shang北大");
	}
	else
	{
		printf("上");
	}
	return 0;
}