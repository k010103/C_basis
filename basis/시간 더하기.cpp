#include <stdio.h>

// 전역 변수 
int hour; // 시
int minute; // 분 
int minuteAdd;  // 더할 분 

void counter() // void는 return값 없이 사용가능 
{
	minute += minuteAdd; //현재 분에 더해질 분 추가 
	hour += minute / 60; // 분이 60이 넘는경우 1로하여 시에 추가  
	minute %= 60; // 분이 60이 넘는경우 결과값을 버리고 나머지값만 출력(넘는경우는 시에 이미 더해짐) 
	hour %= 24; // 시도 마찬가지로 24가 넘는경우 값을 버리고 나머지 값만 출력 
}

int main()
{
	printf("시를 입력하세요 :");
	scanf("%d", hour);
	printf("분을 입력하세요 :");
	scanf("%d", minute);
	printf("더할 분을 입력하세요 :");
	scanf("%d", minuteAdd);
	counter(); //counter를 사용하여 위에 식을 바로 사용 가능 
	printf("더해진 시간은 %d시 %d분 입니다.\n", hour, minute);
	return 0;
}
