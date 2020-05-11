#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void)
{
	int i, max, min, index; // i=배열 위치, max=최댓값, min=최솟값, index= 값의 위치 
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : 총 5개가 들어갈 수 있는 크기의 배열 선언 
	// array[0] = 30, array[1] = 23, array[2] = 31, array[3] = 73, array[4] = 83 -> 총 5개 
	for(i = 0; i < NUMBER; i++) // NUMBER가 5이므로 5번 실행( 배열도 5개) 
	{
		scanf("%d", &array[i]);
		if(max < array[i]) //max의 값이 현재 정해진 값보다 크다면 아래 식 실행 (초기에 정해진 값이 0이기때문에 array[0]번째의 값은 처음에는 최댓값으로 지정  
		{
			max = array[i]; //max의 값을 현재의 값으로 바꾸고, 
			index = i;     //index는 현재 값의 위치(i)를  저장 
		}
	 } 
	 printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index +1 ); // 배열은 0부터 시작을 하기때문에 +1을 붙여야 맞는 값이 나옴  
	 min = INT_MAX; //int값중에 가장 큰 값 2억~~ 
	 for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i]) // INT_MAX가 들어가 있으므로 array[0]번째 값을 처음에는 최솟값으로 지정 
		{
			min = array[i]; //위와 똑같이 min의 값을 현재에 있는(?)검토중인 값으로 바꾸고, 
			index = i;     // index가 현재의 위치를 저장 
		}
	 } 
	 printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index +1 ); // index에 +1을 해야지만 우리가 아는 값으로 나옴 (위와 동일 ) 
	 
	return 0;
}

