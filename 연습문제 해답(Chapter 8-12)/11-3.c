
/*
#include <stdio.h>


struct date {
	int year, month, day; 	// ��, ��, ��
};
struct person {
	int no, level; 			// ȸ�� ��ȣ, ���� ���
	struct date birthday; 	// ���� ����� date�� ����ü
	int score[4];			// 4ȸ ���� ����
};

void output_value(struct person m);
void output_adress(struct person *m);

int main() {
	struct person member = {123, 5, {1992, 9, 7}, 200, 250, 270, 300};
	struct date update = {1993, 11, 3};
	struct person *ptr = &member;

	int i;

	printf("ȸ�� ��ȣ: %d \n", member.no);
	printf("����: %d�� %d�� %d�� \n", member.birthday.year, member.birthday.month, member.birthday.day);
	printf("4���� ���� %d \n\n", member.score[3]);

	member.birthday = update;
	printf("������ ����: %d�� %d�� %d�� \n", member.birthday.year, member.birthday.month, member.birthday.day);
	printf("���� ���� ���: %d \n", ptr->level);

	// 3-1. 1-4���� ���� ���
	printf("\n1~4���� ����\n");
	for(i = 0; i < 4; i++)
		printf("%d����: %d��\n", i+1, member.score[i]);

	// 3-2. output_value(member) �Լ� ȣ��
	output_value(member);
	
	// 3-3. output_adress ȣ��
	output_adress(&member);


	fflush(stdin);
	getchar();
	return 0;
}

// 3-2. output_value(member) �Լ� ����
void output_value(struct person m)
{
	int i;
	printf("\n<ȸ�� ���� ���>\n");
	printf("ȸ�� ��ȣ: %d \n", m.no);
	printf("����: %d�� %d�� %d�� \n", m.birthday.year, m.birthday.month, m.birthday.day);
	printf("���� ���� ���: %d \n", m.level);
	
	printf("\n1~4���� ����\n");
	for(i = 0; i < 4; i++)
		printf("%d����: %d��\n", i+1, m.score[i]);

}

// 3-3. output_adress(&member) �Լ� ����
void output_adress(struct person *m)
{
	int i;
	printf("\n<ȸ�� ���� ���>\n");
	printf("ȸ�� ��ȣ: %d \n", m->no);
	printf("����: %d�� %d�� %d�� \n", m->birthday.year, m->birthday.month, m->birthday.day);
	printf("���� ���� ���: %d \n", m->level);
	
	printf("\n1~4���� ����\n");
	for(i = 0; i < 4; i++)
		printf("%d����: %d��\n", i+1, m->score[i]);

}

*/