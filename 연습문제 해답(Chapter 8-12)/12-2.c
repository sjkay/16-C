
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 5

int main()
{
	FILE *fp;
	int i, quiz;

	printf("파일에서 퀴즈 점수를 읽어 옵니다. 계속 하려면 아무키나 누르세요...\n\n");
	getch();

	fp = fopen("quiz.txt", "r");
	if(fp == NULL)
	{
		printf("\n파일 열기 에러\n");
		exit(0);
	}
	
	for(i = 0; i < N; i++)
	{
		fscanf(fp, "%d", &quiz);
		printf("%d번의 퀴즈 점수는? %d\n", i+1, quiz);
	}

	fflush(stdin);
	getchar();
	return 0;
}
*/