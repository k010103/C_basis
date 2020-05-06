#include <iostream>
#include <vector>
#include <queue>
#define MAX 10

// 진입차수 : 노드에 들어오는 선의 갯수 

using namespace std;

int n, inDegree[MAX]; // 진입차수 
vector<int> a[MAX];

void topologySort() {
	int result[MAX]; // 결과값
	queue<int> q;
	// 진입 차수가 0인 노드를 큐에 삽입합니다.
	for(int i = 1; i <= n; i++) {
		if(inDegree[i] == 0) q.push(i);
	} 
	// 위상 정렬이 완전히 수행되려면 정확히 N개의 노드를 방문합니다.
	for(int i = 1; i <= n; i++) {
		// n개를 방문하기 전에 큐가 빈다면 사이클이 발생한 것 입니다. 
		if(q.empty()) { // q가 비어있다면  
			printf("사이클이 발생했습니다.");
			return; 
		} 
		int x = q.front(); // 가장위에 있는 것  
		q.pop();
		result[i] = x; 
		// q 에서 꺼낸 순서가 위상정렬을 수행한 순서 
		for(int i = 0; i < a[x].size(); i++) {
			int y = a[x][i]; // 연결된 노드  
			// 새롭게 진입차수가 0이 된 정점을 큐에 삽입합니다. 
			if(--inDegree[y] == 0) { // 연결된 진입차수가 없다면  
				q.push(y); 
			}
		}
	} 
	for(int i = 1; i <= n; i++) {
		printf("%d ", result[i]);
	}
} 

int main(void)
{
	n = 7;
	a[1].push_back(2);
	inDegree[2]++;
	a[1].push_back(5);
	inDegree[5]++;
	a[2].push_back(3);
	inDegree[3]++;
	a[3].push_back(4);
	inDegree[4]++;
	a[4].push_back(6);
	inDegree[6]++;
	a[5].push_back(6);
	inDegree[6]++;
	a[6].push_back(7);
	inDegree[7]++;
	topologySort();
	
	return 0;
}
