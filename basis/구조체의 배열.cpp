#include <stdio.h>
#define SIZE 5 // 5명의 학점을 받음  

struct student {
	int number;
	char name[20];
	double grade; // GPS -> 학점 
};

int main(void)
{
	struct student list[SIZE];
	int i;
	
	for(i=0; i < SIZE; i++)
	{
		printf("학번을 입력하세요 : ");
		scanf("%d", list[i].number);
		printf("이름을 입력하세요 : ");
		scanf("%c", list[i].name);
		printf("학점을 입력하세요 : ");
		scanf("%lf", list[i].grade);
	}
	
	for(i = 0; i < SIZE; i++)
	{
		printf("학번 : %d 이름 : %d 학점 : %d", list[i].number, list[i].name, list[i].grade);
	}
	
	 
	return 0;
}
