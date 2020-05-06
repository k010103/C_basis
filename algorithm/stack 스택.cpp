#include <iostream>
#include <stack>

// 택배상하차 , 입구와 출구가 같음 

using namespace std;

int main(void)
{
	stack<int> s;
	s.push(6);
	s.push(5);
	s.pop();
	s.push(6);
	s.push(4);
	s.push(5);
	s.pop();
	s.pop();
	// 6 6
	while(!s.empty()) {
		cout << s.top() << ' '; // 입구가 1개 , 가장 위에 있는거  
		s.pop();
	}
	
	return 0;
}
