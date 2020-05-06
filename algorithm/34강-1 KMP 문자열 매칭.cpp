#include <iostream>
#include <vector>
// 접두사와 접미사가 일치하는 최대길이  

using namespace std;

vector<int> makeTable(string pattern) {
	int patternSize = pattern.size();
	vector<int> table(patternSize, 0); // patternSize만큼 0으로 초기화
	int j = 0;
	for(int i = 1; i < patternSize; i++) {
		while(j > 0 && pattern[i] != pattern[j]) { // 일치하지않는경우 j는 값이 0인 값까지 반복  
			j = table[j - 1];
		}
		if(pattern[i] == pattern[j]) {
			table[i] = ++j;
		} 
	}
	return table;
}

int main(void) {
	string pattern = "abacaaba";
	vector<int> table = makeTable(pattern);
	for(int i = 0; i < table.size(); i++) {
		printf("%d ", table[i]);
	}
	return 0;
}
