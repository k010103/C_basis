#include <iostream>
#include <Queue>
#include <vector>

// 은행창구  

using namespace std;

int number = 7;
int c[7]; // 방문처리  
vector<int> a[8];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	c[start] = true; // 초기 시작지점 설정  
	while(!q.empty()) { // 비어있지 않다면  
		int x = q.front(); // 앞에 있는거  
		q.pop();
		printf("%d ", x);
		for(int i = 0; i < a[x].size(); i++) { // q에서 꺼낸값과 인접한 노드 (x)
			int y = a[x][i]; // 인접한 노드를 y에 담음  
			                 //	방문처리가 되어 있다면 무시  
			if(!c[y]) {
				q.push(y); // q에 담고 
				c[y] = true; // 방문처리  
			}
		}
	}
}

int main(void) {
	// 1과 2를 연결합니다. 
	a[1].push_back(2);
	a[2].push_back(1);
	// 1과 3을 연결합니다. 
	a[1].push_back(3);
	a[3].push_back(1);
	// 2와 3을 연결합니다. 
	a[2].push_back(3);
	a[3].push_back(2);
	// 2와 4를 연결합니다. 
	a[2].push_back(4);
	a[4].push_back(2);
	// 2와 5를 연결합니다. 
	a[2].push_back(5);
	a[5].push_back(2);
	// 3과 6을 연결합니다. 
	a[3].push_back(6);
	a[6].push_back(3);
	// 3과 7을 연결합니다. 
	a[3].push_back(7);
	a[7].push_back(3);
	// 4와 5를 연결합니다. 
	a[4].push_back(5);
	a[5].push_back(4);
	// 6과 7을 연결합니다. 
	a[6].push_back(7);
	a[7].push_back(6);
	// BFS를 수행합니다. 
	bfs(1);
	
	return 0;
}
