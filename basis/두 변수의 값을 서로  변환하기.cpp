#include <stdio.h>

// x = *y , &x = y
// c언어의 강점  
// 두 변수의 값을 서로 변환하는 pointer 함수 
// *y는 *x를 가르키게 되고 *x는 *y를 가르키게 됨(?)  

void swap(int *x, int *y) //포인터를 사용할때에는 *을 붙임 
{
	int temp;
	temp = *x;     // x의 값을 바꾸거나 *y의 값을 바꾸면 둘이 같이 공유가 되어 값이 둘다 바뀌게됨 
	*x = *y;       // x = *y , &x = y   
	*y = temp;     //x와 y의 값이 서로 공유가 되어서 값을 서로 바꾸어 출력함
}

int main(void)
{
	int x = 1;
	int y = 2;
	printf("x = %d\ny = %d\n", x, y);
	swap(&x, &y); // &의 역할은 주소를 불러옴 
	printf("x = %d\ny = %d\n", x, y); // 값을 출력하면 x와 y의 값이 서로 바뀌게됨  
	return 0;
}

