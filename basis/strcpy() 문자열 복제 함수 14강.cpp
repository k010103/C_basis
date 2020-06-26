#include <stdio.h>
#include <string.h>

// strcpy() 문자열 복제 함수 
// 포인터를 다루는 함수  
// 복사를 한 뒤에는 복사한값이 바뀌어도 값이 그래도 유지  

int main(void)
{
	char input[11] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); // 앞에 적힌것을 뒤에 적힌내용에 복사  
	printf("문자열 복사 : %s\n", result); //result라는 함수가 [5]의 공간을 다 할당 했음에도 불구하고 "I Love You"출력 가능  
	return 0;
}
