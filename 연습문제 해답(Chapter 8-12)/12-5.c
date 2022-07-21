
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 3

struct student // ����ü ���� �κ�
{ 
		char name[20]; // �̸�
		char phone[20]; // ��ȭ��ȣ
		int time; // �ü�
		int money; // �ñ�
		int pay; // ���ӱ�
}; 

int i, j, k;
// �ӱ� ���Ͽ� �ڸ� ��ȯ�ϴ� �Լ�
void swap(struct student *x, struct student *y)
{
	struct student temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// �ӱ� ���ϴ� �Լ�
void bubble(struct student *arr)  
{
	for(i=0 ; i<SIZE ; i++)// �ݺ� Ƚ��
	{  
		for(j=0 ; j<SIZE-1 ; j++) // �迭 ��� ���� ��
		{
			if((arr+j)->pay < (arr+j+1)->pay)
				swap(&arr[j], &arr[j+1]);
		}
	}
}

int main()
{
	int total=0;
	struct student st[SIZE]; // ����ü �迭 ����
	FILE *fp1,  *fp2;  // ���� ������ ����	 
	  
	fp1 = fopen("arbeit.txt", "r");  // �����͸� �о�� input.txt ���� ����
	if(fp1 == NULL) // ������ ���� ��
	{ 
		printf("\n File Open Error...\n"); 
		exit(0); 
	} 

  	fp2 = fopen("arbeit_pay.txt", "w");  // ����� ����� output.txt ���� ����
	if(fp2 == NULL) // ������ ���� ��
	{ 
		printf("\n File Open Error...\n"); 
		fclose(fp1); // ���� �ݱ�
		exit(0);
	}

	for ( i = 0; i < SIZE; i++ )  
	{
		fscanf(fp1, "%s %s %d %d", st[i].name, st[i].phone, &st[i].time, &st[i].money);
		st[i].pay = st[i].time * st[i].money;
		total += st[i].pay;
	}

	bubble(st); // ���� �Լ� ȣ��

	fprintf(fp2, "�̸� \t ��ȭ��ȣ \t �ü�\t �ñ� \t ���ӱ� \n");
	fprintf(fp2, "===============================================\n");

	for ( i = 0; i < SIZE; i++ ) 
	{
		fprintf(fp2,"%s\t%s\t%d\t%d\t%d\n", st[i].name, st[i].phone, st[i].time, st[i].money, st[i].pay);
	}

	fprintf(fp2, "===============================================\n");
	fprintf(fp2, "                           �ְ�(%s) %d\n", st[0].name, st[0].pay);
	fprintf(fp2, "                                 ���ӱ� %d\n", total);

	printf("\n���� ����� �Ϸ�, ������ ȭ���� ��°�� �Դϴ� \n");

	// ȭ�� ���
	printf("\n***  ������ Output_File  ***\n");
	printf("----------------------------------------------------\n");
	printf(" �̸� \t ��ȭ��ȣ \t �ü�\t �ñ� \t ���ӱ� \n");
	printf("----------------------------------------------------\n");

	for ( i = 0; i < SIZE; i++ ) 
	{
		printf("%s\t%s\t%d\t%d\t%d\n", st[i].name, st[i].phone, st[i].time, st[i].money, st[i].pay);
	}

	printf("-----------------------------------------------------\n");
	printf("                           �ְ�(%s) %d\n", st[0].name, st[0].pay);
	printf("                                 ���ӱ� %d\n", total);

	fclose(fp1);   // ���� �ݱ�
	fclose(fp2);   // ���� �ݱ�
  

	fflush(stdin);
	getchar();
	return 0;
}
*/