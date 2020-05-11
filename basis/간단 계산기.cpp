#include <stdio.h>

int main()
{
	char o; // +,-같은 식도 char에 포함 
	int x, y;
	while(1)
	{
		printf("수식을 입력하세요:");
		scanf("%d %c %d", &x, &o, &y); // 입력을 받을때에는 & 붙이기 , 식에 ,꼭 붙이기 
		if(o == '+') // 식을 적을때에는 '' 붙이기 
		{
			printf("%d %c %d = %d\n", x, o, y, x+y);
		 } 
		else if(o == '-') // else if는 해당하는 식이 있을때, 나머지 식들을 포괄할때는 else 사용 
		{
			printf("%d %c %d = %d\n", x, o, y, x-y);
		}
		else if(o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x*y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x/y);
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x%y);
		}
		else
		{
			printf("입력이 잘못되었습니다.\n");
		}
		getchar(); // 버퍼의 공백 
		printf("프로그램을 종료하시겠습니까?(y/n)\n");
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;
		}
		else if(o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("입력이 잘못되었습니다.\n");
		}
	}
	return 0;
}
