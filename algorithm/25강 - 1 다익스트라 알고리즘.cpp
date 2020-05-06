#include <stdio.h>

int INF = 1000000000;
int number = 6;

int a[6][6] = {
	{0, 2, 5, 1, INF, INF}, // 0
	{2, 0, 3, 2, INF, INF}, // 1
	{5, 3, 0, 3, 1, 5}, // 2
	{1, 2, 3, 0, 1, INF}, // 3
	{INF, INF, 1, 1, 0, 2}, // 4
	{INF, INF, 5, INF, 2, 0}, // 5
};

bool v[6]; // 방문한 노드입니다.
int d[6]; // 거리입니다.

// 가장 최소 거리를 가지는 정점을 반환합니다. 
int getSmallIndex() {
	int min = INF;
	int index = 0;
	for(int i = 0; i < number; i++) {
		if(d[i] < min && !v[i]) {
			min = d[i]; 
			index = i; 
		} 
	} 
	return index; 
} 

// 다익스트라를 실행하는 함수입니다.  
void dijkstra(int start) {
	for(int i = 0; i < number; i++) {
		d[i] = a[start][i]; // 정렬기준노드 현재의 정보를 담음 
	}
	v[start] = true; // 시작점  
	for(int i = 0; i < number - 2; i++) { // number - 시작 - 끝  
		int current = getSmallIndex(); // 최소값(위치)을 기준  
		v[current] = true; // 방문했으니 true 
		for(int j = 0; j < number; j++) { 
			if(!v[j]) { // 방문을 안했다면 (최소값이 아니라면) 
				if(d[current] + a[current][j] < d[j]) {
		// 방문한 노드를 기준으로 노드를 거쳐서 다른 노드까지의 최소값
					d[j] = d[current] + a[current][j];
				}
			}
		}
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	dijkstra(n); // n을 기준으로 1~6이 n까지의 최소거리 
	for(int i = 0; i < number; i++) {
		printf("%d ", d[i]);
	}
	
	return 0;
}
