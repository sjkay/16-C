

/*
// 순위 구하기
#include <stdio.h>
#define SIZE 10

int rank(int ary[SIZE], int value);

int main()
{
	int quiz[SIZE] = {10, 8, 7, 9, 6, 10, 9, 8, 7};
	int i, score;

	printf("%d명의 퀴즈 점수: ", SIZE); 
	for (i=0; i<SIZE; i++)
		printf("%d, ", quiz[i]);
	printf("\b\b  \n\n");	// 마지막 ‘,’와 빈칸 지우기
	
	printf("순위를 구할 점수는?"); 
	scanf("%d", &score);
		
	// 입력된 score의 순위를 구하기 위해 rank 함수 호출
	printf("%d점은 %d등입니다 \n", score, rank(quiz, score));

	fflush(stdin);
	getchar();
	return 0;
}

// ary 배열의 점수로부터 value 점수의 순위를 구하는 함수
int rank(int ary[SIZE], int value)
{
	int count, i;

	count = 0;
	for (i=0; i<SIZE; i++)
	{
		// 순위를 구할 점수 value가 배열 원소의 값보다 작을 때 마다 count를 1 증가
		if (value < ary[i])
			count++;
	}
	
	return count+1;	// 실제 순위는 value보다 높은 점수 개수 + 1
}

*/