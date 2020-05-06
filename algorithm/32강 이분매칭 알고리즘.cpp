#include <iostream>
#include <vector>
#define MAX 101

using namespace std;

vector<int> a[MAX]; // 각 정점과 연결된 간선정보 
int d[MAX]; // 점류하고 있는 노드의 정보  
bool c[MAX]; // 특정한 정점 여부
int n = 3, m;

// 매칭에 성공한 경우 true, 실패한경우 false
bool dfs(int x) {
	// 연결된 모든 노드에 대해서 들어갈 수 있는지 시도 
	for(int i = 0; i < a[x].size(); i++) {
		int t = a[x][i];
		// 이미 처리한 노드는 더 이상 볼 필요가 없음 
		if(c[t]) continue;
		c[t] = true;
		// 비어 있거나 점유 노드에 더 들어갈 공간이 있는경우
		if(d[t] == 0 || dfs(d[t])) { 
// 2번째같은경우는 점유하고 있는 노드가 다른 경우가 있는경우  
			d[t] = x;
			return true; 
		} 
	} 
	return false;
} 

int main(void) 
{
	a[1].push_back(1);
	a[1].push_back(2);
	a[1].push_back(3);
	a[2].push_back(1);
	a[3].push_back(2);
	int count = 0;
	for(int i = 1; i <= n; i++) {
		fill(c, c+MAX, false); 
// 점거하고 있는경우를 초기화, 추가적으로 다른경우가 있는경우   
		if(dfs(i)) count++;
	}
	printf("%d개의 매칭이 이루어졌습니다.\n", count);
	for(int i = 1; i < MAX; i++) {
		if(d[i] != 0) printf("%d -> %d\n", d[i], i);
	}
	
	return 0;
}

