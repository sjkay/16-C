/*
#include <stdio.h>
int main()
{
	int max, i, idx = 0;
	int freeze[10] = {15, 0, -20, -30, 50, -5, -120, -5, 10, -12};

	max = freeze[0];
	
	printf("��� �� ���: ");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", freeze[i]);
		if(max < freeze[i])
		{
			idx = i;
			max = freeze[i];
		}
	}

	printf("\n���� ���� ��� ��: freeze[%d] = %d\n", idx, max);

	fflush(stdin);
	getchar();
	return 0;
}

*/