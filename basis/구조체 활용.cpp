#include <stdio.h>
#include <stdlib.h>

//구조체 

struct student // struct 구조체 사용시에는 #include <stdlib.h> 꼭! 적기  
{
	int number;              //학번 
	char name[10];           //이름 
	double grade;            //학점 
};

int main(void) 
{
	struct student s;
	
	printf("학번을 입력해주세요 :");
	scanf("%d", &s.number);
	printf("이름을 입력해주세요 :");
	scanf("%s", s.name);                 //s.name 배열 자체에 주소의 뜻을 가지고 있음 (&를 적으면 오류 발생) 
	printf("학점을 입력해주세요 :");
	scanf("%lf", &s.grade);             // double 을 입력 ☆받을때에는 %lf라는 입력예제를 써야함      
 
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	return 0;
}
