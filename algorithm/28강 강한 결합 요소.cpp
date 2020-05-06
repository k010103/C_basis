#include <iostream>
#include <vector>
#include <stack>
#define MAX 10001

using namespace std;

int id, d[MAX]; // 각 노드마다 고유한 번호 할당  
bool finished[MAX]; // 특정한 노드에 대한 dfs가 끝이났는지 확인 
vector<int> a[MAX]; // 인접한 노드 
vector<vector<int> > SCC;
stack<int> s;

// DFS는 총 정점의 갯수만큼 실행됩니다.
int dfs(int x) {
	d[x] = ++id; // 노드마다 고유한 번호 할당 
	s.push(x); // 스택에 자기 자신을 삽입합니다.
	
	int parent = d[x];
	for(int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		
//		방문하지 않은 이웃 
		if(d[y] == 0) { // 해당노드를 방문한적이 없다면 
			 parent = min(parent, dfs(y)); // 더 작은값으로 부모를 갱신 
		} 
//		처리 중인 이웃  
		else if(!finished[y]) parent = min(parent, d[y]); 
//		처리되고있는 값에 부모와 비교를 해서 더 작은값을 선택 
	} 
//	부모노드가 자기 자신인 경우 
	if(parent == d[x]) {
		vector<int> scc;
//		자기 자신이 나올떄까지 뽑음 ( 강한결합의 결과) 
		while(1) {
			int t = s.top();
			s.pop();
			scc.push_back(t);
			finished[t] = true;
			if(t == x) break; 
		} 
		SCC.push_back(scc);
	}
	
	// 자신의 부모 값을 반환합니다. 
	return parent;
} 

int main(void) {
	
	int v = 11;
	a[1].push_back(2);
	a[2].push_back(3);
	a[3].push_back(1);
	a[4].push_back(5);
	a[5].push_back(7);
	a[7].push_back(6);
	a[6].push_back(5);
	a[8].push_back(5);
	a[8].push_back(9);
	a[9].push_back(10);
	a[10].push_back(11);
	a[11].push_back(3);
	a[11].push_back(8);
	
	for(int i = 1; i <= v; i++) {
		if(d[i] == 0) dfs(i);
	}
	printf("SCC의 갯수 : %d\n", SCC.size());
	for(int i = 0; i < SCC.size(); i++) {
		printf("%d번째 SCC: ", i+1);
		for(int j = 0; j < SCC[i].size(); j++) {
			printf("%d ", SCC[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
