#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) // 이 프로그램에서는 윤년을 감안하지 않습니다 
		{         // 2월은 평균적으로 28일 까지 있으니 i가 2일경우 28을 더함 
			sum += 28;
		}
	
	    else if(i % 2 == 0) // i가 2의 배수인 경우 30을 더함 ( 실제로는 2의 배수인 달이 31일까지 인 경우도 있음) 
	    {
		    sum += 30;
	     } 
	    else 
	    {
	 	   sum += 31;
	    }
    }
	 return sum + day;
}

int main()
{
	int month, day;
	printf("현재의 날짜를 입력해주세요 :"); 
	scanf("%d %d", &month, &day);
	printf("1월 1일부터 해당 날짜까지의 거리는 %d입니다.",getDays(month, day));
	return 0;
}
