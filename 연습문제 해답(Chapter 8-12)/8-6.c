

/*
// ���� ���ϱ�
#include <stdio.h>
#define SIZE 10

int rank(int ary[SIZE], int value);

int main()
{
	int quiz[SIZE] = {10, 8, 7, 9, 6, 10, 9, 8, 7};
	int i, score;

	printf("%d���� ���� ����: ", SIZE); 
	for (i=0; i<SIZE; i++)
		printf("%d, ", quiz[i]);
	printf("\b\b  \n\n");	// ������ ��,���� ��ĭ �����
	
	printf("������ ���� ������?"); 
	scanf("%d", &score);
		
	// �Էµ� score�� ������ ���ϱ� ���� rank �Լ� ȣ��
	printf("%d���� %d���Դϴ� \n", score, rank(quiz, score));

	fflush(stdin);
	getchar();
	return 0;
}

// ary �迭�� �����κ��� value ������ ������ ���ϴ� �Լ�
int rank(int ary[SIZE], int value)
{
	int count, i;

	count = 0;
	for (i=0; i<SIZE; i++)
	{
		// ������ ���� ���� value�� �迭 ������ ������ ���� �� ���� count�� 1 ����
		if (value < ary[i])
			count++;
	}
	
	return count+1;	// ���� ������ value���� ���� ���� ���� + 1
}

*/