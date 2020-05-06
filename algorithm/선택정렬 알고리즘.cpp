#include <stdio.h>

// 가장 작은걸 선택해서 제일 앞으로 보낸다. 
// O(N ^ 2)

int main()
{
	int i, j, min, index, temp;
	//      min 작은값,index 가장작은원소가 존재하는 위치,temp 숫자를 바꾸기 위해서 
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9}; 
	for(i = 0; i < 10; i++){ 
		min = 9999;
		for(j = i; j < 10; j++){ // 왼쪽 값을 확정시키면서 진행  
			if(min > array[j]) { // min값이 변경이 되어서  예를 들어 5인값을 가지고있고 7인값을 만났다면 만난 값이 더 크기때문에 실행이 되지 않음  
				min = array[j]; //min값은 계속해서 변경이 된다 
				index = j; //현재 저장된 값보다 큰값이 오면 변하지않지만 작은 값이 오면 현재의 위치를 저장  
			}
		}
	temp = array[i]; // array[i]는 확정이 된것을 제외한 가장 오른쪽것을 의미 
	array[i] = array[index];
	array[index] = temp;      //가장 앞에있는 값과 최소값을 바꾸어 주겠다라는 의미 
    }
	for(i = 0; i < 10; i++){
	printf("%d ", array[i]); // 총 10번 출력  
    } 
	return 0;
}
