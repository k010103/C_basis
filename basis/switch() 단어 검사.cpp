#include <stdio.h>

//switch 는 적어둔 단어에 알맞는 답변을 주는 형식
// case를 쓸때에는 : 사용 , case를 겹쳐서 여러게 사용 가능  
// 밑에 계절찾는 예제 있음. 
 

int main()
{
	char a;
	scanf("%c", &a);
	switch(a) {
		case 'D':
			printf("slowly~");
			break;
		case 'C':
			printf("run!");
			break;
		case 'B':
			printf("good!!");
			break;
		case 'A':
			printf("best!!!");
			break;
		default:
			printf("what?");
	}
	
	return 0;
}
/*
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch(a) {
		case 12:
		case 1:
		case 2:
		printf("winter");
		break;
		case 3:
		case 4:
		case 5:
		printf("spring");
		break;
		case 6:
		case 7:
		case 8:
		printf("summer");
		break;
		case 9:
		case 10:
		case 11:
		printf("fall");
	} 
	
	return 0;
}
*/
