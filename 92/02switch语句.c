#include<stdio.h>
int main03()
{
	int score;
	scanf_s("%d", &score);
	switch (score / 10)
	{
	case 9:
		printf("����\n");
		break;
	case 8:
		printf("����\n");
		break;
	case 7:
		printf("����\n");
		break;
	case 6:
		printf("����\n");
		break;
	default:
	printf("������\n");
		break;
	}
	return 0;
}