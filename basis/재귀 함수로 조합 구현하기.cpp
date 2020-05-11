#include <stdio.h>

int nCr(int n, int r)
{
	if(r == 0 || r == n) // r이 0이거나 r이 n일경우 1 return 
	{
		return 1;
	}
	else
	{
		return nCr(n - 1, r - 1) + nCr(n - 1, r); // 조합 공식 (손쉽게 수학적 공식 접목 가능 )
	}
}

int main(void)
{
	int n,r;
	scanf("%d %d", &n, &r); // 입력 함수에는 꼭 , 붙이기  
	printf("%d", nCr(n, r)); 
	return 0;
}
