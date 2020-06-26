#include <stdio.h>
#include <math.h>

// 넓이 = 너비 x 높이 
// 둘레 = 2 x 너비 + 2 x 높이 
// 구조체 안에 또 구조체를 넣은 형식

struct point{
	int x;
	int y;
};

struct rect{            //사각형 
	struct point p1;      //좌표평면 위에 사각형은 왼쪽상단의 p1과   
	struct point p2;      // 오른쪽하단의 p2로 정의 가능 
};

int main(void)
{
	struct rect r;    //r이라는 이름의 사각형 생성 //point가 들어가있는 rect 함수를 main의 정의를 해줌으로써 point함수도 자연스럽게 사용 가능 
	int w, h, area, peri; //r은 변수를 의미 ↑ 
	//         넓이  둘레 
	printf("왼쪽상단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);             //r.은 rect를 의미(?) 왼쪽 위에 좌표 입력 
	printf("오른쪽하단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);            // 오른쪽 아래 좌표 입력 
	
	w = abs(r.p2.x - r.p1.x);  // w =너비 , abs() = 절댓값 
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;// 넓이 = 너비 x 높이 
	peri = 2 * w + 2 * h;// 둘레 = 2 x 너비 + 2 x 높이 
	
	printf("사각형의 넓이는 %d이고 둘레는 %d 입니다.", area , peri); 
	return 0;
}
