/*
#include <stdio.h>
#define SIZE 10

int main()
{
	int index, i;
	int quiz[SIZE] = {15, 4, 8, 9, 6, 13, 12, 10, 9, 11};
	
	index = index_of_max(quiz);

	printf("퀴즈 점수 목록: ");
	for(i = 0; i < SIZE; i++)
		printf("%d ", quiz[i]);
	
	printf("\n퀴즈 최고 점수: quiz[%d] = %d", index, quiz[index]);

	fflush(stdin);
	getchar();
	return 0;
}

int index_of_max(int *arr)
{
	int index = 0, i;
	int max = arr[0];

	for(i = 0; i < SIZE; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}
*/