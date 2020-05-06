#include <stdio.h>

int number= 8;
int sorted[8]; // 정렬된 결과 배열을 담을 수 있는 공간, 정렬 배열은 반드시 전역변수로 선언  

void merge(int a[], int m, int middle, int n) {
	int i = m; // 1번째 배열 시작지점 
	int j = middle + 1; // 2번째 배열 시작지점  
	int k = m; // 배열이 합쳐져서 생기는 배열, m이 똑같이 들어감  
	// 작은 순서대로 배열에 삽입 
	while (i <= middle && j <= n) { //작은 부분 집합들을 의미 i는 1번째 마지막까지 j는 2번째 마지막까지  
		if (a[i] <= a[j]) { // k첫번째에 뭘 넣을지 선택하는 과정  
			sorted[k] = a[i]; 
			i++;
		} else {
			sorted[k] = a[j];
			j++;
		} 
		k++; // 배열이 찻으니 다음 공간으로 이동  
	} 
	// 남은 데이터도 삽입, i가 먼저 끝이 나거나 j가 먼저 끝이나거나 그러면 
    // 한쪽에 데이터는 남기때문에 남은 데이터를 삽입해주는 과정이 필요
	if (i > middle) { // i가 먼저 끝이났다면  
		for(int t = j; t <= n; t++) { //남은 j값을 넣는 과정  
			sorted[k] = a[t];
			k++;
		}
	} else { // j가 먼저 끝이 났다면  
		for(int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	// 정렬된 배열을 삽입 
	for(int t = m; t <= n; t++) {
		a[t] = sorted[t]; //정렬이 된 배열의 값을 실제 값에 넣는 과정 
	}
}

void mergeSort(int a[], int m, int n) {
	//크기가 1보다 큰 경우
	if (m < n) {
		int middle = (m + n) / 2; // 정중앙을 나누는 방법
		mergeSort(a, m, middle); // 왼쪽으로 병합정렬 수행 
		mergeSort(a, middle + 1, n); // 오른쪽으로 병합정렬 수행  
		merge(a, m, middle, n); // 정렬된 배열을 나중에 합침  
	} 
}

int main(void) {
	int array[number] = {7, 6, 5, 8, 3, 5, 9, 1};
	mergeSort(array, 0, number - 1);
	for(int i = 0; i < number; i++) {
		printf("%d ", array[i]);
	}
	
}
