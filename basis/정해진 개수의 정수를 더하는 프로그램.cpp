#include <stdio.h>

int main()
{
	int number, x, i, sum = 0;
	printf("정수의 개수를 입력하세요:");
	scanf("%d", &number);
	for(i = 0; i < number; i++) // 적힌 number의 값만큼 정수의 값 생성 
	{
		printf("정수의 값을 입력하세요:");
		scanf("%d", &x); 
		sum += x; // 다음 값에 x를 더함  
	 } 
	 printf("전체 정수의 값은 %d입니다.\n", sum);
	return 0;
}
