#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi; //pointer Integer, *pi -> 포인터 변수 (주소저장) 
	pi = (int *)malloc(sizeof(int)); // malloc = 메모리를 할당해라.  malloc(sizeof(크기)) -> int형의 크기만큼 할당해라 4bvte
	   //(int *)형변환 용도  
	if(pi == NULL)                  // malloc(4) == malloc(sizeof(int))
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); //프로그램을 종료합니다. 
	}
	*pi = 100; //pi 포인터가 가지고 있는 그 주소의 값에 100을 넣어라. 
	printf("%d\n", *pi);
	//동적 메모리 사용한 이후에는 무조건 해당 메모리를 반환합니다. 
	free(pi); // 메모리의 안전성을 높이고 효율성을 높이기 위해서 필요  
	return 0;
}
