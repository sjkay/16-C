

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
 
// 이전에 누적된 합계에 새로 호출된 값까지의 합을 계속 누적하기
void static_sum(int end)
{
	static int sum = 0;
	static int count = 0;
	int i;

	count++;
	printf("%2d번째 호출, sum =%3d + 1~%2d까지의 합: ", count, sum, end);

	for(i=1; i<=end; i++)
		sum += i;
	printf("%3d \n", sum);
}
*/