
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

	fp1 = fopen("survey.txt", "r"); // �����͸� �о�� survey.txt ���� ����
	if(fp1 == NULL)
	{
		printf("\n���� ���� ����...\n");
		exit(0);
	}

	fp2 = fopen("result.txt", "w"); // ����� ����� result.txt ���� ����
	if(fp2 == NULL)
	{
		printf("\n���� ���� ����...\n");
		fclose(fp1); // ���� �ݱ�
		exit(0);
	}
	
	// �����ڰ� ���� �������� ��ǥ���� 1 ����
	for(i = 0; i < PERSONS; i++)
	{
		fscanf(fp1, "%d", &survey);
		vote[survey]++;
	}
	
	// ��� ����
	printf("������ ��ǥ���� ����մϴ�. ����Ϸ��� �ƹ�Ű�� ��������...\n\n");
	getch();

	fprintf(fp2, "������ ��ǥ��\n");
	fprintf(fp2, "================\n");
	for(i = 1; i < STARS; i++)
		fprintf(fp2, "   %d��    %dǥ \n", i, vote[i]);

	fflush(stdin);
	getchar();
	return 0;
}
*/