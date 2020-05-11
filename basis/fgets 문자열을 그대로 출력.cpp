#include <stdio.h>

// 입력받은 문자열을 그대로 출력함  
// fgets(fopen변수, 한줄에서 읽어올 글자수); 
int main()
{
	char s[100];
	while (fgets(s,100,stdin)) { // s 함수, 100 문자열, stdin 키보드로 
		printf("%s", s);
	}
	return 0;
}
