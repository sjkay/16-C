
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 6
char name[N][7] = {"", "��Ʈ", "����", "���찳", "��", "����"};
int unit_cost[N] = {0, 1000, 500, 300, 800, 1500};
int number[N] = {0};

void print_menu();
void print_item();
void ordering();
void order_sheet();

int main()
{
	int answer;
	
	do
	{
		print_menu();
		scanf("%d", &answer);
		system("cls");

		switch(answer)
		{
			case 1: ordering(); break;
			case 2: order_sheet(); break;
			case 3: exit(0); break;
		}

		printf("\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������.");
		getch();
		system("cls");
	
	}while(answer != 3);

	fflush(stdin);
	getchar();
	return 0;
}

void print_menu()
{
	printf(">> ȯ���մϴ�. \n");
	printf("==========================\n");
	printf("==1. ��ǰ �ֹ��ϱ� =======\n");
	printf("==2. �ֹ��� Ȯ���ϱ� =====\n");
	printf("==3. �����ϱ� ============\n");
	printf("==========================\n");
	printf("���ϴ� ���񽺸� �����ϼ���. ");
}

void print_item()
{
	printf(">> ��ǰ �ֹ� �����Դϴ�. \n");
	printf("==========================\n");
	printf("==1 ��Ʈ\t1000\n");
	printf("==2 ����\t500\n");
	printf("==3 ���찳\t300\n");
	printf("==4 ��\t\t800\n");
	printf("==5 ����\t1500\n");
	printf("==========================\n");
}

void ordering()
{
	int item, n;
	print_item();
	printf("���ϴ� ��ǰ�� ��ȣ��? "); scanf("%d", &item);
	printf("%s��(��) �ֹ��� ������? ", name[item]); scanf("%d", &n);

	number[item] += n;
	printf("\n�ֹ��Ͻ� %s %d���� �� %d���Դϴ�. \n", name[item], n, n * unit_cost[item]);
}

void order_sheet()
{
	int i, cost, total_cost = 0;
	printf(">> ��ǰ �ֹ� ������ \n");
	printf("==========================\n");
	printf("��ǰ��     ����     ����\n");
	printf("--------------------------\n");
	
	for(i = 1; i < N; i++)
	{
		if(number[i] != 0)
		{
			cost = unit_cost[i] * number[i];
			printf("%s\t%4d\t%9d\n", name[i], number[i], cost);
			total_cost += cost;
		}
	}

	printf("==========================\n");
	printf("�Ѿ�               %d��\n", total_cost);
}


*/