#include <stdio.h>

int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main(void) {
	// 힙을 구성 
	for(int i = 1; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2; // 특정한 원소의 부모를 의미함  
			if(heap[root] < heap[c]) { // 부모값 < 자식값  
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		}while (c != 0); // do while문은 먼저 처리를 하고 비교  
	} 
	// 크기를 줄여가며 반복적으로 힙을 구성 
	// 루트에 있는 값을 뒤로 보내면서 힙트리에서 1씩 빼줌  
	for (int i = number - 1; i >= 0; i--) {
		int temp = heap[0]; // heap[0] : 루트  
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1; // 다시한번 힙을 구성  
		do {
			c = 2 * root + 1; // c : 루트의 자식  
			// 자식 중에 더 큰 값을 찾기
			if(c < i - 1 && heap[c] < heap[c + 1]) { // 범위를 벗어나지 않도록 막고 자식중에 더 큰 값 찾기 
				c++;    // 왼쪽과 오른쪽중에서 더 큰 값을 c에 담음 ?
			} 			// 오른쪽이 더 크다면 c++을 해줘서 오른쪽으로 이동
			
			// 루트보다 자식이 크다면 교환 
			if(c < i && heap[root] < heap[c]) {  // 자식값이 c를 벗어나지않고 루트보다 더 크다면 교환  
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c; // 재귀적으로 힙구조를 만듬 ? 
		} while (c < i);
		// 큰 값을 뒤로 보내고 다시 힙 구조 만들고를 반복실행  
	} 
	for(int i = 0; i < number; i++) {
		printf("%d ", heap[i]);
	}
	return 0;
}
