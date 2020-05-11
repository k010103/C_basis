#include <stdio.h>

int main()
{
	int i,j,N;
	scanf("%d", &N);
	for( i = 0; i < N; i++) // 1, 2, 3 ... 20
	{      //초기문;증감문;반복문 
		for(j = N - i - 1; j > 0; j--) // 19, 18, 17 ... 0
		{
			printf("  ");
		}
	    for(j = 0; j < i; j++) // 1, 2, 3 ... 20
		{
			printf("□");
		}	 
		for(j = 0; j < i - 1; j++) // 1, 2, 3 ... 19
		{
			printf("■");
		}
		printf("\n"); 
	 } 
	return 0;
 } 
