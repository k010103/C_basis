#include <iostream>
#include <vector>
#include <queue>

// 용량(Capacity)에 맞게 유량(Flow)를 흘려보내는 알고리즘

#define MAX 100
#define INF 1000000000

using namespace std;

int n = 6, result;
int c[MAX][MAX], f[MAX][MAX], d[MAX];
// c = 용량 , f = 유량 , d = 노드를 방문을 했는지
vector<int> a[MAX];

void maxFlow(int start,int end) {
	while(1) {
		fill(d, d + MAX, -1);
		queue<int> q;
		q.push(start);
		while(!q.empty()) {
			int x = q.front();
			q.pop();
			for(int i = 0; i < a[x].size(); i++) {
				int y = a[x][i];
				// 방문하지 않은 노드 중에 용량이 남은경우 
				if(c[x][y] - f[x][y] > 0 && d[y] == -1) {
					q.push(y);  
					d[y] = x; // 경로를 기억합니다.
					if(y == end) break; 
				} 
			}
		} 
		// 모든 경로를 다 찾은 뒤에 탈출합니다. 
		if(d[end] == -1) break;
		int flow = INF; 
		// 거꾸로 최소 유량을 탐색합니다.
		for(int i = end; i != start; i = d[i]) {
			flow = min(flow, c[d[i]][i] - f[d[i]][i]); 
		}
		// 최소 유량만큼 추가합니다.
		for(int i = end; i != start; i = d[i]) {
			f[d[i]][i] += flow;
			f[i][d[i]] -= flow;
		}		 
		result += flow;
	}
} 

int main(void) {
	a[1].push_back(2);
	a[2].push_back(1);
	c[1][2] = 12;
	
	a[1].push_back(4);
	a[4].push_back(1);
	c[1][4] = 11;
	
	a[2].push_back(3);
	a[3].push_back(2);
	c[2][3] = 6;
	
	a[2].push_back(4);
	a[4].push_back(2);
	c[2][4] = 3;
	
	a[2].push_back(5);
	a[5].push_back(2);
	c[2][5] = 5;
	
	a[2].push_back(6);
	a[6].push_back(2);
	c[2][6] = 9;
	
	a[3].push_back(6);
	a[6].push_back(3);
	c[3][6] = 8;
	
	a[4].push_back(5);
	a[5].push_back(4);
	c[4][5] = 9;
	
	a[5].push_back(3);
	a[3].push_back(5);
	c[5][3] = 3;
	
	a[5].push_back(6);
	a[6].push_back(5);
	c[5][6] = 4;
	
	maxFlow(1, 6); // 1에서 6으로 갈때  
	printf("%d", result);
}
