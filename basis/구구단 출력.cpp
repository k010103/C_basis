#include <stdio.h>

int main()
{
	int x, i;
	printf("정수를 입력하세요:");
	scanf("%d", &x);
	for(i = 1; i<=9; i++) // 1단 ~9단까지 출력 
	{
		printf("%d X %d = %d\n", x, i, x * i);  // x X 1, x X 2, x X 3 ... x X 9까지 출력 
	 }                                          
	return 0;
}
