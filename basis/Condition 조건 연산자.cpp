#include <stdio.h>
// 조건 연산자 
int main()
{
	int x = -50, y = 30;
	int absoluteX = (x>0) ? x : -x;
	//참이라면 왼쪽, 거짓이라면 오른쪽 
	int max = (x>y) ? x : y;
	int min = (x<y) ? x : y;
	printf("x의 절댓값은 %d입니다.\n", absoluteX);
	printf("x와 y중에서 최댓값은 %d입니다.\n", max);
	printf("x와 y중에서 최솟값은 %d입니다.\n", min);
	return 0;
}
