
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
		
		printf("������һ������\n");
		scanf_s("%d", &num);
		if (num > value)
		{
			printf("�������ϴ�\n");
		}
		else if (value > num)
		{
			printf("��������С\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}

	}
	return 0;
}