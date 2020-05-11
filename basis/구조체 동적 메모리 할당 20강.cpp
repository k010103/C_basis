#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
	
	int number;
	char title[100];
};

void showBook(struct Book *p, int n) // *p 동적메모리를 할당한 포인터 변수 자제를 넣어준 것 	 
{
	int i;
	for( i = 0; i < n; i++)
	{
		printf("번호 %d : %s\n", (p + i)->number, (p + i)->title);
	}
}

int main()
{
	struct Book *p;
	p = (struct Book *)malloc(2 * sizeof(struct Book));  //2 * 는 2개의 공간을 만들겠다라는 의미 
	if(p == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	
	p->number = 1;
	strcpy(p->title, "C Porgramming"); // strcpy : 문자열 복제 함수, p->title 에  C Porgramming을 넣겠다라는 의미  
	
	(p + 1)->number = 2;
	strcpy((p + 1)->title, "Data Structure");
	
	showBook(p, 2);
	free(p);
	
	return 0;
}
