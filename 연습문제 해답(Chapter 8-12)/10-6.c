/*
#include <stdio.h>

void sort(int *arr, int n);
int main()
{
	int n, i;
	int sales[10] = {203, 105, 302, 200, 289, 175, 130, 120, 267, 312};

	printf("상위 몇 개의 판매량을 구할까요? ");
	scanf("%d", &n);
	
	sort(sales, n);

	printf("============\n");
	printf("판매량 top %d \n", n);
	printf("============\n");
	for (i=0; i<n; i++)
		printf("   %d   \n", sales[i]);
	printf("============\n");
	
	fflush(stdin);
	getchar();
	return 0;
}

void sort(int *arr, int n)
{
	int i, j, temp;

	for(i = 0; i < n; i++)
		for(j = i+1; j < 10; j++)
			if(*(arr + i) < *(arr + j))
			{
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
}
*/