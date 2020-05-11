#include <stdio.h>

//반복함수를 이용하여 숫자계단을 출력합니다.
//반복함수같은 경우에는 오직 for문과 while문으로 구성이 됩니다.

int print(int a) // 여기서 print는 print의 개념으로 사용되지않고 그냥 함수 자체로 사용 
{
	int i, j;
	for(i = 0; i < a; i++) // i는 a만큼 반복 
	{
	    for(j = 0; j <= i; j++) // j도 i만큼 반복 (숫자형태로 적는것은 여기서 적용) 
	    {
		    printf("%d ", j + 1); // 1부터~ a만큼 피라미드 생성 
	    }
	    printf("\n");
    }
 } 
 
 int main(void)
 {
 	int a;
 	scanf("%d", &a);
 	print(a);
 	return 0;
 }
