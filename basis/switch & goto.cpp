#include <iostream>

int main(void)
{
	int a;
	
	makef:
	puts("");
	printf("1~5중에 숫자 1개를 입력해주세요 : \n");
	scanf("%d", &a);
	
	switch (a) {
		case 1:
			printf("1이 입력되었습니다.\n");
			break;
		case 2:
			printf("2가 입력되었습니다.\n");
			break;
		case 3:
			printf("3이 입력되었습니다.\n");
			break;
		case 4:
			printf("4가 입력되었습니다.\n");
			break;
		case 5:
			printf("5가 입력되었습니다.\n");
			break;
		default:
			printf("입력값이 잘못되었습니다.\n");
			goto makef;
			break; 
	}
	
	return 0;
}
