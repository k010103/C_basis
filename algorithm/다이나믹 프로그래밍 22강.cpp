#include <stdio.h>

// 3 * n
// 2 = 3 , 4 = 3 * 3 + 2 = 11

int d[1001];

int dp(int x) {
	if(x == 0) return 1;
	if(x == 1) return 0;
	if(x == 2) return 3;
	if(d[x] != 0) return d[x];
	int result = 3 * dp(x - 2); // 2 일때 3가지  
	for(int i = 3; i <= x; i++) {
		if(i % 2 == 0) // 2의 배수마다 고유의 모양이 2개씩 나옴 
			result += 2 * dp(x-i); // ?
	}
	return d[x] = result;
}

int main(void)
{
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));
	
	return 0;
}
