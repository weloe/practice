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
		printf("���廪\n");
		if (score > 720)
		{
			printf("��Ҫѧ�����\n");

		}
		else if (score > 710)
		{
			printf("ѧ�ھ��");
		}
		else
		{
			printf("ѧ����");
		}
	}
	else if (score > 680)
	{
		printf("shang����");
	}
	else
	{
		printf("��");
	}
	return 0;
}