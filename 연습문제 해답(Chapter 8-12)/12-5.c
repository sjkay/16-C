
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 3

struct student // 구조체 정의 부분
{ 
		char name[20]; // 이름
		char phone[20]; // 전화번호
		int time; // 시수
		int money; // 시급
		int pay; // 총임금
}; 

int i, j, k;
// 임금 비교하여 자리 교환하는 함수
void swap(struct student *x, struct student *y)
{
	struct student temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// 임금 비교하는 함수
void bubble(struct student *arr)  
{
	for(i=0 ; i<SIZE ; i++)// 반복 횟수
	{  
		for(j=0 ; j<SIZE-1 ; j++) // 배열 요소 간의 비교
		{
			if((arr+j)->pay < (arr+j+1)->pay)
				swap(&arr[j], &arr[j+1]);
		}
	}
}

int main()
{
	int total=0;
	struct student st[SIZE]; // 구조체 배열 선언
	FILE *fp1,  *fp2;  // 파일 포인터 선언	 
	  
	fp1 = fopen("arbeit.txt", "r");  // 데이터를 읽어올 input.txt 파일 열기
	if(fp1 == NULL) // 파일이 없을 때
	{ 
		printf("\n File Open Error...\n"); 
		exit(0); 
	} 

  	fp2 = fopen("arbeit_pay.txt", "w");  // 결과를 출력할 output.txt 파일 열기
	if(fp2 == NULL) // 파일이 없을 때
	{ 
		printf("\n File Open Error...\n"); 
		fclose(fp1); // 파일 닫기
		exit(0);
	}

	for ( i = 0; i < SIZE; i++ )  
	{
		fscanf(fp1, "%s %s %d %d", st[i].name, st[i].phone, &st[i].time, &st[i].money);
		st[i].pay = st[i].time * st[i].money;
		total += st[i].pay;
	}

	bubble(st); // 정렬 함수 호출

	fprintf(fp2, "이름 \t 전화번호 \t 시수\t 시급 \t 총임금 \n");
	fprintf(fp2, "===============================================\n");

	for ( i = 0; i < SIZE; i++ ) 
	{
		fprintf(fp2,"%s\t%s\t%d\t%d\t%d\n", st[i].name, st[i].phone, st[i].time, st[i].money, st[i].pay);
	}

	fprintf(fp2, "===============================================\n");
	fprintf(fp2, "                           최고(%s) %d\n", st[0].name, st[0].pay);
	fprintf(fp2, "                                 총임금 %d\n", total);

	printf("\n파일 출력을 완료, 다음은 화면의 출력결과 입니다 \n");

	// 화면 출력
	printf("\n***  정렬한 Output_File  ***\n");
	printf("----------------------------------------------------\n");
	printf(" 이름 \t 전화번호 \t 시수\t 시급 \t 총임금 \n");
	printf("----------------------------------------------------\n");

	for ( i = 0; i < SIZE; i++ ) 
	{
		printf("%s\t%s\t%d\t%d\t%d\n", st[i].name, st[i].phone, st[i].time, st[i].money, st[i].pay);
	}

	printf("-----------------------------------------------------\n");
	printf("                           최고(%s) %d\n", st[0].name, st[0].pay);
	printf("                                 총임금 %d\n", total);

	fclose(fp1);   // 파일 닫기
	fclose(fp2);   // 파일 닫기
  

	fflush(stdin);
	getchar();
	return 0;
}
*/