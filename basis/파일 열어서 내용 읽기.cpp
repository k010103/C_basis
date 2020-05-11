#include <stdio.h>

int main()
{ // FILE은 c언어 내장함수 
	FILE *fp = NULL; //*fp 포인터함수를 초기화 
	int c;
	
	fp = fopen("input.txt", "r"); // r은 읽기모드 (read) 파일이 있어야지만 실행이 가능 
	
	if(fp == NULL) // fp == 0; 느낌 실패를 의미 
	{
		printf("파일 열기에 실패했습니다.\n");
	}
	else
	{
		printf("파일 열기에 성공하였습니다.\n");
	}
	
	while((c = fgetc(fp)) != EOF) // c = fgetc(fp) -> 현재 열려있는 파일에서 문자 1개를 읽어서 c에 저장한다 라는 의미 
	{                             // EOF = end of FILE 파일의 끝 
		putchar(c); // 우리 콘솔창에 해당 문자를 출력 
	}
	
	fclose(fp); // 해당파일을 받음 (필수) 
	return 0;
}
