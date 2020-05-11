#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char)); // malloc = 메모리를 할당해라. char형의 크기만큼 x 100을 할당 
	if(pc == NULL)
	{
		printf("동적 메모리 할당에 실패하였습니다.");
		exit(1); 
	}
	// pc가 가르키는 포인터를 1씩 증가시키면서 알파벳 소문자를 삽입시킵니다. 
	for(i = 0; i < 26; i++) // 알파벳 갯수 : 26개  
	{
		*(pc + i) = 'a' + i; //아스키 코드 이용 a = 97번째 b = 98번째 ... z 까지  
	}
	// 아스키코드 0은 NULL을 의미, for문을 탈출해서 나오면 마지막문자로 NULL을 만나서 문자열의 끝을 의미 
	*(pc + i) = 0;  // pc(주소)라는 문자열 포인터의 종료를 의미 
	
	
	printf("%s", pc);
	free (pc);
	
	return 0;
 } 
