#include <iostream>

using namespace std;

int n[11];

int main(void) {
	
	fill(n, n+10, -2); // fill은 지정한 범위를 지정한 원소로 채우는 함수
//	fill(begin, end , value);
	for(int i = 0; i < 10; i++) {
		printf("%d ", n[i]);
	}
	
}
