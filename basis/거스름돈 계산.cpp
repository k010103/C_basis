#include <stdio.h>

// 특정한 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 함수
int smallest(int number)
{
	int count = 0;
	while(number >= 50000) // 식이 참일경우 반복 실행, number가 50000보다 클경우 계속 실행 
	{                     // 50000이 넘으면 식을 멈추고 다음으로 넘어감 (다음: 10000) 
		number -= 50000; // number에서 50000을 차감하고 
		count++;        // count로 넘어가서 1을 더함 ( 1개 추가 ) 
	}
	while(number >= 10000) 
	{
		number -= 10000;
		count++;
	}
	while(number >= 5000)
	{
		number -= 5000;
		count++;
	}
	while(number >= 1000)
	{
		number -= 1000;
		count++;
	}while(number >= 500)
	{
		number -= 500;
		count++;
	}
	while(number >= 100)
	{
		number -= 100;
		count++;
	}
	while(number >= 50)
	{
		number -= 50;
		count++;
	}
	while(number >= 10)
	{
		number -= 10;
		count++;
	}
	return count;
}

 

int main(void)
{
	int number;
	printf("금액을 입력하세요 :");
	scanf("%d", &number);  
	printf("최소로 줄 수 있는 화폐의 개수는 %d개 입니다.", smallest(number)); 
	return 0;
}
