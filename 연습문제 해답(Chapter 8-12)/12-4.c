
/*
#include<stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	char str[80];
	char fname1[] = "movie.txt";
	char fname2[] = "movie(copy).txt";

	// txt ���� ����
	fp1 = fopen(fname1, "r");
	if(fp1 == NULL)
	{
		printf("\n���� ���� ����...\n");
		exit(0);
	}

	// ������ txt���� ����
	fp2 = fopen(fname2, "w");
	if(fp2 == NULL)
	{
		printf("\n���� ���� ����...\n");
		fclose(fp1);
		exit(0);
	}
	
	printf("���� %s�� �纻 %s�� �����մϴ�...\n", fname1, fname2); 

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