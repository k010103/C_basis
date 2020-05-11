#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student // struct 구조체 사용시에는 #include <stdlib.h> 꼭! 적기  
{
	int number;              //학번 
	char name[10];           //이름   (구조체를 활용하면 이것들을 한번에 묶어서 사용하는것이 가능) 
	double grade;            //학점    배열이나 정수의 개념을 쉽고 간단하게 묶어서 사용 가능 
};

int main(void) 
{
	struct student s; //s는 변수를 의미 
	
	printf("학번을 입력해주세요 :");
	scanf("%d", &s.number);
	printf("이름을 입력해주세요 :");
	scanf("%s", &s.name);
	printf("학점을 입력해주세요 :");
	scanf("%.1f", &s.grade); 
 
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade); // lf라고 적어야함 (double)
	return 0;
}
