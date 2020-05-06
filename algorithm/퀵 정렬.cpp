#include <stdio.h>

//o(N * logN)
//상황에따라서 다르지만 왠만한경우 퀵정렬이 제일 빨름 
//이미 정렬이 되어있는 경우는 o(N ^ 2)에 가까움  

int number = 10;
int data[10] = {1, 6, 4, 8, 7, 2, 3, 10, 5, 9};

void qucksrot(int *data, int start, int end) { //start는 정렬을 시작하는 첫번째, end는 마지막 
	if (start >= end) { // 원소가 1개인 경우
		return; 
		
	}
	
	int key = start; //첫번째 원소
	int i = start + 1; // 왼쪽->오른쪽 출발지점 key보다 큰 값 
	int j = end; // 왼쪽(역방향) 출발지점 key보다 작은 값 
	int temp; //교체 용도 
	
	while (i <= j) { // 엇갈릴때까지 반복, 엇갈리게되면 이부분 탈출, 값말고 위치를 의미  
		while(i <= end && data[i] <= data[key]) { // 키(처음원소) 값보다 큰 값을 만날때까지  
			i++;
		} 
		while(j > start && data[j] >= data[key]) { // 키(처음원소) 값보다 작은 값을 만날때까지 
			j--;                                   // j > start는 j가 왼쪽에 있는 값을 침범할 수 없도록 
		}
		if (i > j) { // 현재 엇갈린 상태면 키값과 교체, 값이 아니라 현재 위치 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp; 
		} else {  // 엇갈리지 않았다면 큰값과 작은 값을 바꿈  
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}  
	// 숫자가 가운데에서 정렬이 되면 양쪽으로 숫자가 왼쪽 작은수 오른쪽 큰수로 나누어 졌으니까  양쪽을 각각 따로 퀵정렬을 하겠다라는 의미  
	qucksrot(data, start, j - 1); // 기준점으로 왼쪽,  // data에서 start 부터 j - 1 까지  
	qucksrot(data, j + 1, end);  // 기준점으로 오른쪽  // 재귀  , 각각 다시 퀵정렬을 실행 ??
}

int main() 
{
	qucksrot(data, 0, number - 1); // ??
	for(int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	} 
	
	return 0;
}
