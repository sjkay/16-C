
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 5

int main()
{
	FILE *fp;
	int i, quiz;

	printf("���Ͽ��� ���� ������ �о� �ɴϴ�. ��� �Ϸ��� �ƹ�Ű�� ��������...\n\n");
	getch();

	fp = fopen("quiz.txt", "r");
	if(fp == NULL)
	{
		printf("\n���� ���� ����\n");
		exit(0);
	}
	
	for(i = 0; i < N; i++)
	{
		fscanf(fp, "%d", &quiz);
		printf("%d���� ���� ������? %d\n", i+1, quiz);
	}

	fflush(stdin);
	getchar();
	return 0;
}
*/