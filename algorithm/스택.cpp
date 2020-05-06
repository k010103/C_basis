#include <iostream>
#include <stack>

// 스택은 가장 마지막에 넣은 데이터를 꺼냄  

using namespace std;

int main(void) 
{
	stack<int> s; // 들어가는 함수에는 int형을 하겠다고 정의 
	s.push(7);
	s.push(5);
	s.push(4);
	s.pop(); // 스택에서 1개를 꺼냄 
	s.push(6);
	s.pop();
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	} 
	
	return 0;
}


