
/*
#include <stdio.h>
#define SIZE 5

// 4��
struct employee_info
{
	char no[8]; // �����ȣ
	char name[9]; // �̸�
	int children; // �ڳ��
	int pay; // �⺻��
	int extra_pay; //�ڳ����
	int total; // ���� �޿�
};

int main()
{
	// 4-1��. ������ ���� �Է� (�����ȣ, �̸�, �ڳ��, �⺻��)
	struct employee_info employee[SIZE], max; // ����ü �迭 & �ְ�޿��� ���� ���� ����ü ����
	int i;

	for(i = 0; i < SIZE; i++)
	{
		printf("\n<%d��° ���>\n", i+1);
		printf(">> �����ȣ? "); scanf("%s", employee[i].no);
		printf(">> �̸�? "); scanf("%s", employee[i].name);
		printf(">> �ڳ��? "); scanf("%d", &employee[i].children);
		printf(">> �⺻��? "); scanf("%d", &employee[i].pay);
	}
	
	// 4-2 & 4-3. ���� 5���� �ڳ���� ��� �� ���� �޿� ���, �޿� ���� ���
	printf("�����ȣ      �̸�        �⺻��     �ڳ��   �ڳ����       �޿�  \n");
	printf("--------------------------------------------------------------------\n");

	for(i = 0; i < SIZE; i++)
	{
		if(employee[i].children == 1)
			employee[i].extra_pay = 100000;
		else if (employee[i].children >= 2)
			employee[i].extra_pay = 200000;
		else
			employee[i].extra_pay = 0;

		employee[i].total = employee[i].pay + employee[i].extra_pay;
		
		printf("%-7s      %-8s %9d��    %2d��   %9d��  %10d�� \n", 
			employee[i].no, employee[i].name, employee[i].pay, employee[i].children, employee[i].extra_pay, employee[i].total); 

	}

	// 4-4. �ְ�޿��� ��� �ڵ�
	max = employee[0];
	for(i = 1; i < SIZE; i++)
		if(max.total < employee[i].total)
			max = employee[i];
	
	printf("�ְ� �޿���: %s  %d�� \n", max.name,  max.total); 

	fflush(stdin);
	getchar();
	return 0;
}
*/