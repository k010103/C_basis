#include <iostream> // c++에서 stdio.h 처럼 입출력을 하는 라이브러리  
#include <algorithm> // sort()함수는 c++의  algorithm에 포함되어있음  

// <<는 출력, >>는 입력 
// cout 출력, cin 입력  

using namespace std; // std::을 일일이 붙이기 귀찮고 힘드니 using namespace을 사용하여 정렬  

bool compare(int a, int b) { //bool은 참과 거짓을 담는 함수 (c++ 부터 존재) 
		return a > b; // a < b 면 내림차순 a > b 면 오름차순  
	}

int main() 
{
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a + 10, compare); // a 함수,의 a + 10까지(10은 개수), compare을 의미  
	for(int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
}
