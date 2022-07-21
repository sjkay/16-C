/*
#include <stdio.h>
int main()
{
	int max, i, idx = 0;
	int freeze[10] = {15, 0, -20, -30, 50, -5, -120, -5, 10, -12};

	max = freeze[0];
	
	printf("어는 점 목록: ");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", freeze[i]);
		if(max < freeze[i])
		{
			idx = i;
			max = freeze[i];
		}
	}

	printf("\n가장 높은 어는 점: freeze[%d] = %d\n", idx, max);

	fflush(stdin);
	getchar();
	return 0;
}

*/