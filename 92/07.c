#include<stdio.h>
#include<time.h>
int main09()
{
	srand((unsigned int)time(NULL));//��������ӣ���ȥ�������ɵ������ÿ����ͬ
	
	for (int i = 0;i < 10;i++)
	{
		int value = rand() % 10;
		
		printf("%d\n", value);
	}
	return 0;
}


