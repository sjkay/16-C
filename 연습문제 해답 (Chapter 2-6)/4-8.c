
/*
#include<stdio.h>

int main()
{
	int a,b,c,d;

	printf("세 개의 정수 : ");
	scanf("%d%d%d",&a,&b,&c);

	// 방법 1
	printf(">> 가장 큰 수(방법 1) = %d\n",(a=(a>b)?a:b)>c?a:c);

	// 방법 2
	d = (a >= b)? a:b;
	d = (d >= c)? d: c;
	printf(">> 가장 큰 수(방법 2) = %d\n", d);

	fflush(stdin);
	getchar();
	return 0;
}

*/