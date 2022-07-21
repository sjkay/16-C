
/*
#include <stdio.h>
#define SIZE 5

// 4번
struct employee_info
{
	char no[8]; // 사원번호
	char name[9]; // 이름
	int children; // 자녀수
	int pay; // 기본급
	int extra_pay; //자녀수당
	int total; // 최종 급여
};

int main()
{
	// 4-1번. 직원의 정보 입력 (사원번호, 이름, 자녀수, 기본급)
	struct employee_info employee[SIZE], max; // 구조체 배열 & 최고급여자 정보 저장 구조체 변수
	int i;

	for(i = 0; i < SIZE; i++)
	{
		printf("\n<%d번째 사원>\n", i+1);
		printf(">> 사원번호? "); scanf("%s", employee[i].no);
		printf(">> 이름? "); scanf("%s", employee[i].name);
		printf(">> 자녀수? "); scanf("%d", &employee[i].children);
		printf(">> 기본급? "); scanf("%d", &employee[i].pay);
	}
	
	// 4-2 & 4-3. 직원 5명의 자녀수당 계산 및 최종 급여 계산, 급여 명세서 출력
	printf("사원번호      이름        기본급     자녀수   자녀수당       급여  \n");
	printf("--------------------------------------------------------------------\n");

	for(i = 0; i < SIZE; i++)
	{
		if(employee[i].children == 1)
			employee[i].extra_pay = 100000;
		else if (employee[i].children >= 2)
			employee[i].extra_pay = 200000;
		else
			employee[i].extra_pay = 0;

		employee[i].total = employee[i].pay + employee[i].extra_pay;
		
		printf("%-7s      %-8s %9d원    %2d명   %9d원  %10d원 \n", 
			employee[i].no, employee[i].name, employee[i].pay, employee[i].children, employee[i].extra_pay, employee[i].total); 

	}

	// 4-4. 최고급여자 출력 코드
	max = employee[0];
	for(i = 1; i < SIZE; i++)
		if(max.total < employee[i].total)
			max = employee[i];
	
	printf("최고 급여자: %s  %d원 \n", max.name,  max.total); 

	fflush(stdin);
	getchar();
	return 0;
}
*/