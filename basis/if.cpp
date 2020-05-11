#include <stdio.h>

// 조건문  
int main()
{
	int x = -150;
	if(x < 0) x = -x;
	printf("x의 절댓값은 %d입니다.\n", x);
	return 0;
}
