
/*
#include<stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	char str[80];
	char fname1[] = "movie.txt";
	char fname2[] = "movie(copy).txt";

	// txt 파일 열기
	fp1 = fopen(fname1, "r");
	if(fp1 == NULL)
	{
		printf("\n파일 열기 에러...\n");
		exit(0);
	}

	// 복사할 txt파일 열기
	fp2 = fopen(fname2, "w");
	if(fp2 == NULL)
	{
		printf("\n파일 열기 에러...\n");
		fclose(fp1);
		exit(0);
	}
	
	printf("원본 %s를 사본 %s로 복사합니다...\n", fname1, fname2); 

	while(!feof(fp1))
	{
		fgets(str, 80, fp1);
		fputs(str, fp2);
	}
	fclose(fp1);
	fclose(fp2);


	fflush(stdin);
	getchar();
	return 0;
}
*/