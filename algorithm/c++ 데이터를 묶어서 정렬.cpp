#include <iostream>
#include <algorithm>

// class를 사용하는 것은 일반 사무용에 적합  

// <<는 출력, >>는 입력

using namespace std;

class student { // class는 여러게의 변수를 하나로 묶기위해서 사용 
public:  // 어디서나 쓸 수 있는 함수를 만들겠다.  
	string name; // string는 문자열을 다루기 위한 용도  
	int score; 
	student(string name, int score) { // 생성자 , 특정한 객체를 초기화하기위한 용도  
		this ->name = name;
		this ->score = score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(student &student) { // student 다른학생과 비교  
		return this->score > student.score; // < : 내 점수가 낮다면 우선순위가 높다  
	} 
}; 

int main(void) {
	student students[] = {
	student("ㄱ", 90),
	student("ㄴ", 93),
	student("ㄷ", 97),
	student("ㄹ", 87),
	student("ㅁ", 92)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++) {
		cout << students[i].name << " ";
	}
}
