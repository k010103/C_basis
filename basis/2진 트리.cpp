#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int a[n] = {0}, i;
	int num = 1, x = 1, sum;
	for(i = 1; i <= n; i++) {
		a[i] = a[i/2]+1;
	}
	for(i = 1; i <= n; i++) {
		if(num != x) {
			printf("%d ", a[i]);
			num++;
		}
		else {
			printf("%d ", a[i]);
			printf("\n");
			num = 1;
			x *= 2;
		}
	}
	
	return 0;
}
