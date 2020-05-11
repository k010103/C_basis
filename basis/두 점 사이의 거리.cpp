#include <stdio.h>
#include <math.h>

struct point { // 구조체  
	int x;
	int y;
 };  // struct를 하용할때는 마지막에 세미콜론을 붙여야함 
 
 int main(void)
{
    struct point p1, p2;
 	int xDiff, yDiff;    // xDiff와 yDiff는 각각 x좌표의 차이점 , y좌표의 차이점을 의미 
 	double distance; 
 	
 	printf("1번 점의 좌표를 입력하세요 :");
 	scanf("%d %d", &p1.x, &p1.y);
	 
	printf("2번 점의 좌표를 입력하세요 :");
 	scanf("%d %d", &p2.x, &p2.y);
 	
 	xDiff = p1.x - p2.x;
 	yDiff = p1.y - p2.y;
 	
 	distance = sqrt(xDiff * xDiff + yDiff * yDiff);    // sqrt는 제곱근을 구하는 함수, sqrt 입력시에는 꼭! #include <math.h> 입력하기
	printf("두 점 사이의 거리는 %f 입니다. \n", distance);
	
	return 0;  
 }
