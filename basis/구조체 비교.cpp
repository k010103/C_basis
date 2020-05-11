#include <stdio.h>

struct point{
	int x;
	int y;
}; 

void comparepoint (struct point p1, struct point p2) {
	if(p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1과 p2는 같습니다.\n");
	}                                    
} //이식이 main함수에 있는것보다 훨씬 체계적 

int main()
{
	struct point p1;
	struct point p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
	/*
	if(p1 == p2)
	{
		printf("p1과 p2는 같습니다.\n");
		
	}  point p1과 point p2 자체끼리는 서로 비교가 불가능 
	*/
	/*
		if(p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1과 p2는 같습니다.\n");
	}                                    //각 구조체 별로 특징을 잡아서 비교하는것은 가능하다 
                                         //이것 방법도 되기는하지만 이것보다 위에있는 방법이 훨씬 체계적 
	*/
	
	comparepoint(p1, p2);
	
	return 0;
}
