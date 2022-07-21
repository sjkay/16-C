
/*

#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

#define PERSONS 30
#define STARS 6

int main()
{
	int survey;
	int vote[STARS] = {0};
	int i;
	FILE *fp1, *fp2;

	fp1 = fopen("survey.txt", "r"); // 데이터를 읽어올 survey.txt 파일 열기
	if(fp1 == NULL)
	{
		printf("\n파일 열기 에러...\n");
		exit(0);
	}

	fp2 = fopen("result.txt", "w"); // 결과를 출력할 result.txt 파일 열기
	if(fp2 == NULL)
	{
		printf("\n파일 열기 에러...\n");
		fclose(fp1); // 파일 닫기
		exit(0);
	}
	
	// 응답자가 답한 연예인의 득표수를 1 증가
	for(i = 0; i < PERSONS; i++)
	{
		fscanf(fp1, "%d", &survey);
		vote[survey]++;
	}
	
	// 결과 저장
	printf("파일의 득표수를 기록합니다. 계속하려면 아무키나 누르세요...\n\n");
	getch();

	fprintf(fp2, "연예인 득표수\n");
	fprintf(fp2, "================\n");
	for(i = 1; i < STARS; i++)
		fprintf(fp2, "   %d번    %d표 \n", i, vote[i]);

	fflush(stdin);
	getchar();
	return 0;
}
*/