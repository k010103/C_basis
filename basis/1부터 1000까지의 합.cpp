#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0;
	while(i <= 1000) // 오른쪽에 있는 식이 참일때 식이 실행 , 코드가 돌아도 식이 참일경우 반복실행 
	{
		sum += i;
		i++; 
	 } 
	printf("1부터 1000까지의 합은 %d입니다\n", sum);
	return 0;
}
