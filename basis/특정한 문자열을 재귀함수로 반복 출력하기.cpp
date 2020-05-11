#include <stdio.h>

//재귀 함수(Recursive Function)
void print(int count) // 함수를 만들고 그 함수안에서 함수 사용 
{                    // ex) print라는 함수를 만들고 print라는 함수를 바로 사용 
	if(count == 0) // count가 0이 될때까지 출력 
	{
		return;
	}
	else // count가 0이 아니라면 실행 
	{
		printf("문자열을 출력합니다.\n");
		print(count - 1); // 문자열을 출력하고 count에서 -1 실행  
	}
}

int main(void)
{
	int number;
	printf("문자열을 몇개 출력할까요?");
	scanf("%d", &number);
	print(number); 
	return 0;
}
