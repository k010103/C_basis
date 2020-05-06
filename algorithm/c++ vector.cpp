#include <iostream>
#include <vector>
#include <algorithm>

// 빠른 개발을 사용할때에는 pair을 사용하는 것이 적합히다. 
//pair<dataType1,dataType2>p , 2개의 변수를 저장  

using namespace std; 

int main(void){ 
	vector<pair<int, string> > v; // pair<int 1개 , string 1개  
	v.push_back(pair<int, string>(90, "ㄱ")); // push_back 리스트의 마지막부분에 삽입을 하겠다. 
	v.push_back(pair<int, string>(85, "ㄴ")); // vector을 사용해서 한쌍으로 묶여서 삽입이 되었음  
	v.push_back(pair<int, string>(82, "ㄷ"));
	v.push_back(pair<int, string>(98, "ㄹ"));
	v.push_back(pair<int, string>(79, "ㅁ"));
	
	sort(v.begin(), v.end()); // v.begin v의 시작반복자  
	
	for(int i = 0; i < v.size(); i++) { // v.size 백터의 크기를 가져오는 함수 
		cout << v[i].second << " "; //cout 출력  , first는 int값 90 85, second는 string값 ㄱㄴ 
	} 
}
