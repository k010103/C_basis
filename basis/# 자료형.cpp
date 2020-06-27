#include <stdio.h>

int main()
{
	int a; // ±2147483647 
	float b; // 0.000000 소수점 수 저장 가능 
	double c; // 0.000~ float 보다 큰소수점 수를 저장 가능 
	char d; // a, b 같은 1개씩있는 문자 , (정수도 출력가능, codeup 1077 질문) 
	char da[30]; // apple, 애플 같은 문자열, 단어를 쓸때는 범위를 정해줘야함  
	unsigned int e; // 0 ~ 4,294,967,295 
	long long int f; // ±9,223,372,036,854,775,807 
	
	printf("%d", a); // %04d 등으로 응용  
	printf("%f", b);
	printf("%lf", c); // lf : long float float형인데 조금 더 길다 
	                  // %.11lf 등으로 응용  
	printf("%c", d);
	printf("%s", da);
	printf("%u", e);
	printf("%lld", f);
	
	
	printf("%o", a); // 8진수 출력 
	printf("%x", a); // 16진수 출력 , %X x를 대문자로하면 16진수가 대문자로 출력  
	
	// 내용추가
	
	// c언어에서 char로 한글을 출력하고 싶다면 
	char name[20] = "홍길동";
	printf("%c%c", name[0],name[1]); 
//	형식으로 %c%c 를 공백없이 붙여서 사용해야 한글출력 가능
//	한글은 2byte씩 사용하기 때문 

	return 0;
}
