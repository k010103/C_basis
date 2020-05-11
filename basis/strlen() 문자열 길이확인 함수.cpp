#include <stdio.h>
#include <string.h>

// strlen() 문자열 길이확인 함수  

int main(void)
{
	char input[5] = "Love"; // 5개의 문자열이 들어갈 수 있는 공간 
	printf("문자열의 길이 : %d\n", strlen(input));
	return 0;
}
