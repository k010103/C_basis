#include <stdio.h>
#define NUMBER 5

int main(void)
{

	int array[NUMBER];
	int i, oddMax, evenMax;
	oddMax = 0;
	evenMax = 0;
	printf("5개의 장수를 입력해주세요 :"); //입력 예제를 적고싶으면 for문 위에다가 적기 밑에 적으면 적용이 안됨 
	for(i=0; i<NUMBER; i++)
	{
	
	    scanf("%d", &array[i]);
	    if(array[i] % 2 == 0) // 배열 i값이 2로 나누어진다면 시행  
	    {
		    if(evenMax < array[i]) // 이 함수식은 최대값일경우에만 적용 array[0]번째 값은 처음에는 무조건 최댓값으로 지정되는 형식  
		    {                     // -> 이해가 안되면 5개의 정수중에서 최댓값과 최솟값의 위치출력 확인 
		    	evenMax = array[i];
		    }
	    }
		else // i의 값이 2로 나누어지지 않으면 밑에 값을 실행  
		{
			if(oddMax < array[i]) //위에와 동일 
			{                    // ※홀수도 최댓값을 구하는 것이므로 꺽쇠의 방향은 바뀔 필요가 없음         
				oddMax = array[i];
			}
		}
	}
	
	printf("5개의 정수 중에 짝수 최댓값은 %d이고 홀수 최댓값은 %d입니다.", evenMax, oddMax);
	return 0;
}
