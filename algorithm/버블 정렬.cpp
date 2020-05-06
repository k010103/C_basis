#include <stdio.h>

// 코드를 쓰기에는 매우 짧고 편하지만 매우 비효율적인 방법  
// O(N ^ 2) 작업의 수행시간을 비교해봤을때는 선택정렬보다 훨씬 더 오래걸림  

int main(void){
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++){
		for(j = 0; j < 9 - i; j++){
			if(array[j] > array[j + 1]) { //더 작은것을 앞으로 옮긴다 
				temp = array[j];
				array[j] = array[j + 1];  // 큰값을 작은값으로 변경  
				array[j + 1] = temp;      // 작은값을 큰값으로 변경  
			}                              // 그리고 다시 검토  
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]); // 위에 for문에서 i를 넣었으니 밑에 printf값에도 i가 들어가야함  
	}
	return 0;
} 
