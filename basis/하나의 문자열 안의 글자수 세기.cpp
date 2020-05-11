// char : 1byte
// 영어 : 1개 크기 (1byte)
// 한글 : 2개 크기 (2byte)
//array[10]; = 영어 10, 한글 5 

#include <stdio.h>

int main(void)
{
	char input[1001];  // 1001개의 문자열이 들어갈 수 있는 공간  
	gets(input);       //이 예제를 실행하면 input안에 문자열을 저장 
	int count = 0;
	while(input[count] != '\0' ) // '\0'은 nul이라는 값 의미 (nul이라는 값은 문자열을 저장하고 남은 공간을 채움)
	{
		count++; //count의 값이 5가 되었을때 반복함수 종료  
	} 
	printf("입력한 문자열의 길이는 %d입니다.\n", count);
	printf("입력한 문자열 : %s", input); // %s는 하나의 문자열을 의미  
	return 0;
 } 
