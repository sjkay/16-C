/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define ESC 0X1B
#define SIZE 6

void random_no(int *arr);
void remove_dup(int *arr);
void sort(int *arr);
void print_lotto(int *arr);

int main()
{
	char ch;
	int no[SIZE];

	do
	{
		random_no(no);
		remove_dup(no);
		sort(no);
		print_lotto(no);

		printf("\n그만하려면 <Esc>키를, 새 로또 번호를 보려면 다른 키를 누르세요.\n");
		ch = getch();

		if(ch == ESC) exit(0);
	}while(ch != ESC);


	fflush(stdin);
	getchar();
	return 0;
}

void random_no(int *arr)
{
	int i;
	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 45 + 1;
	}
}

void remove_dup(int *arr)
{
	int i , j;
	for(i = 0; i < SIZE; i++)
		for(j = 0; j < SIZE; j++)
			if((i != j) && (arr[i] == arr[j]))
			{
				arr[i] = rand() % 45 + 1;
				i--;
			}
}


void sort(int *arr)
{
	int i, j, temp;

	for(i = 0; i < SIZE; i++)
		for(j = i+1; j < SIZE; j++)
			if(*(arr + i) > *(arr + j))
			{
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
}

void print_lotto(int *arr)
{
	int i;
	printf("\n***로또 번호 생성 완료!***\n");
	for(i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
}
*/