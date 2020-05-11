#include <stdio.h>
#include <string.h>
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
	struct student s; //s는 변수를 의미 
	s.number = 20150001;
	strcpy(s.name ,"홍길동"); // strcpy 사용 시에는 #include <string.h> 꼭! 적기 (복제 함수) s.name이 홍길동이라는 값으로 복사가 됨  
	s.grade = 4.5;            // 홍길동이라는 값이 char의 배열을 가지고 있기때문에 strcpy 사용  
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	return 0;
}

