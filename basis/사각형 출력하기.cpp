#include <stdio.h>
#define N 10 

int main()
{
	int i, j;
	for(i = 0; i < N; i++) // i가 n보다 작을때에 한해서 i를 증가
	 // 초기문;비교문;증감문 
	{
		for(j=0; j<N; j++) // i가 1번 반복될때마다 j는 전체반복이므로 j는 열번 반복  -> i= 1, j= 100
		{                 // i * j = 10 * 10 -> 100번 반복
			printf("★");  
		}
	    printf("\n");  // 10개씩 단위를 나눔  
	 } 
	return 0;
}
