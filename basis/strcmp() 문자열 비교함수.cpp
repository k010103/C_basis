#include <stdio.h> 
#include <string.h>

// strcmp() 문자열 비교함수 

int main(void) 
{
	char inputOne[5] = "B";
	char inputTwo[5] = "A";
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
	return 0;
}
//           앞       뒤  
// strcmp(inputOne, inputTwo) 앞에 있는것이 사전적으로 앞에 있다면 -1 출력  strcmp(A, B) = -1
//                            뒤에 있는것이 사전적으로 앞에 있다면  1 출력  strcmp(B, A) =  1
//                            앞과 뒤에 사전적 위치가 같다면 0 출력         strcmp(A, A) =  0
