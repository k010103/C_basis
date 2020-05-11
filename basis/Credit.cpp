#include <stdio.h>

int main()
{
	int score = 70; //학생의 점수를 의미합니다.
	if(score >= 90)
	{
		printf("당신의 학점은 A입니다\n");
	 } 
	else if(score >= 80) // if와 다른 경우 
	{
		printf("당신의 학점은 B입니다.\n");
	}
	else if(score >= 70)
	{
		printf("당신의 학점은 C입니다.\n");
	}
	else // 위에 전부 포함되지않다면  
	{
		printf("당신의 학점은 F입니다\n");
	}
	return 0;
}
