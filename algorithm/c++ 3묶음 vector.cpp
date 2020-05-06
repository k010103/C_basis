#include <iostream> 
#include <vector>
#include <algorithm>

// ※ vector<pair<string, pair<int, int> > > v; 이런 형식으로 되어있다면 
//    첫번째는 first, 두번째는 second.first 세번째는 second.second 형식으로 만들어 진다. 
//           pair(string)  pair(int,int)

using namespace std;

bool compare(pair<string, pair<int, int> > a,   
			 pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) { // 만약 a와 b의 성적이 서로 같다면
		return a.second.second < b.second.second; // < : 생년월일이 빠른순, > : 생년월일이 느린순  
	} else {
		return a.second.first > b.second.first; // > : 성적높은순, < : 성적낮은순   
	}
}

int main(void) {
	vector<pair<string, pair<int, int> > > v; // 이름, 성적, 생년월일 
	v.push_back(pair<string, pair<int, int> >("ㄱ", pair<int, int>(90, 20010103)));
	v.push_back(pair<string, pair<int, int> >("ㄴ", pair<int, int>(87, 20011011)));
	v.push_back(pair<string, pair<int, int> >("ㄷ", pair<int, int>(97, 20010929)));
	v.push_back(pair<string, pair<int, int> >("ㄹ", pair<int, int>(90, 20010830)));
	v.push_back(pair<string, pair<int, int> >("ㅁ", pair<int, int>(89, 20010505)));
	
	sort(v.begin(), v.end(), compare); // v.begin v의 시작반복자
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << " "; // 이름을 기준으로  
	}
	return 0;
	
} 
