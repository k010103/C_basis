#include <stdio.h>

// x = *y , &x = y

int main(void)
{
	int i = 10;
	int *p;
	p = &i;                  // p의 값을 i와 동일하여 pointer  &는 값의 주소를 불러옴 
	printf("i = %d\n", i);
	*p = 20;                // *p의 값을 바꾸어도 i의 값이 바뀌게 됨  
	printf("i = %d\n", i); 
	return 0;
}

