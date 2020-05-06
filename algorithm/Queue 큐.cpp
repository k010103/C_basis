#include <iostream>
#include <queue>

// 은행창구 
// 들어온 것이 먼저 나감  

using namespace std;

int main(void)
{
	queue<int> q;
	q.push(6); // 넣는다 
	q.push(5);
	q.push(4);
	q.pop(); // 꺼낸다. 
	q.pop();
	q.push(4);
	q.push(4);
	// 4 4 4
	printf("%d\n", q.size());
	 
	while(!q.empty()) { // 비어있지 않다면  
		cout << q.front() << ' '; // 가장앞에 있는거(먼저들어온거) 출력  
		q.pop(); // 빼냄  
	}
	
	return 0;
 } 
