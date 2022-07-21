
/*
#include <stdio.h>


struct date {
	int year, month, day; 	// 년, 월, 일
};
struct person {
	int no, level; 			// 회원 번호, 게임 등급
	struct date birthday; 	// 생일 멤버가 date형 구조체
	int score[4];			// 4회 게임 점수
};

void output_value(struct person m);
void output_adress(struct person *m);

int main() {
	struct person member = {123, 5, {1992, 9, 7}, 200, 250, 270, 300};
	struct date update = {1993, 11, 3};
	struct person *ptr = &member;

	int i;

	printf("회원 번호: %d \n", member.no);
	printf("생일: %d년 %d월 %d일 \n", member.birthday.year, member.birthday.month, member.birthday.day);
	printf("4차전 점수 %d \n\n", member.score[3]);

	member.birthday = update;
	printf("수정된 생일: %d년 %d월 %d일 \n", member.birthday.year, member.birthday.month, member.birthday.day);
	printf("최종 게임 등급: %d \n", ptr->level);

	// 3-1. 1-4차전 점수 출력
	printf("\n1~4차전 점수\n");
	for(i = 0; i < 4; i++)
		printf("%d차전: %d점\n", i+1, member.score[i]);

	// 3-2. output_value(member) 함수 호출
	output_value(member);
	
	// 3-3. output_adress 호출
	output_adress(&member);


	fflush(stdin);
	getchar();
	return 0;
}

// 3-2. output_value(member) 함수 정의
void output_value(struct person m)
{
	int i;
	printf("\n<회원 정보 출력>\n");
	printf("회원 번호: %d \n", m.no);
	printf("생일: %d년 %d월 %d일 \n", m.birthday.year, m.birthday.month, m.birthday.day);
	printf("최종 게임 등급: %d \n", m.level);
	
	printf("\n1~4차전 점수\n");
	for(i = 0; i < 4; i++)
		printf("%d차전: %d점\n", i+1, m.score[i]);

}

// 3-3. output_adress(&member) 함수 정의
void output_adress(struct person *m)
{
	int i;
	printf("\n<회원 정보 출력>\n");
	printf("회원 번호: %d \n", m->no);
	printf("생일: %d년 %d월 %d일 \n", m->birthday.year, m->birthday.month, m->birthday.day);
	printf("최종 게임 등급: %d \n", m->level);
	
	printf("\n1~4차전 점수\n");
	for(i = 0; i < 4; i++)
		printf("%d차전: %d점\n", i+1, m->score[i]);

}

*/