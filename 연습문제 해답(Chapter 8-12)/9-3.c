

/*
#include <stdio.h>

void static_sum(int end);

int main()
{	
	int i;

	for(i=1; i<=10; i++)
		static_sum(i);

	getchar();
	return 0;
}
 
// ������ ������ �հ迡 ���� ȣ��� �������� ���� ��� �����ϱ�
void static_sum(int end)
{
	static int sum = 0;
	static int count = 0;
	int i;

	count++;
	printf("%2d��° ȣ��, sum =%3d + 1~%2d������ ��: ", count, sum, end);

	for(i=1; i<=end; i++)
		sum += i;
	printf("%3d \n", sum);
}
*/