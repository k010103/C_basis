#include <stdio.h>

int main(void)
{
	FILE *fp = NULL; //*fp 포인터 변수, 포인터를 초기화 시킬때에는 0;을 사용하지 않고 NULL;이라는 값을 사용 
	fp = fopen("input.txt", "w"); //fopen -> 파일을 열어라  
	// w -> 쓰기 모드(Write) r -> 읽기 모드(read)
	if(fp == NULL) //해당파일을 열지 못하였다면  
	{
		printf("파일 열기에 실패하였습니다.\n");
	 } 
	else
	{
		printf("파일 열기에 성공하였습니다.\n");
	}
	fputc('H', fp);   // fputc를 사용할때에는 '사용하기 
	fputc('E', fp);   // 따로따로 적어야하고 f put c 라고 읽음 
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp); 
	fclose(fp);           // 파일을 닫아줄때에는 fclose라는 변수를 사용하여 파일포인터변수를 달아줘야함 
	
	return 0;
}
