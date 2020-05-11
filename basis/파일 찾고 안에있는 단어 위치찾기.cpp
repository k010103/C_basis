#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일 이름을 입력하세요 : ");
	scanf("%s", fname);                        //원하는 문구 기입가능 (예제 기억하기) 
	printf("탐색할 단어를 입력하세요 : ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r")) == NULL) //읽기 모드로 해당 파일을 열음  
	{
		fprintf(stderr,"파일 %s를 열 수 없습니다.\n", fname);
		// fprintf -> 파일 관련한 에러를 출력 
	    return 0;
	 } 
	
	while(fgets(buffer, 256, fp)) // 256의 길이만큼 파일을 열어서 buffer에 담을 수 있게  
	{
		line++;
		if(strstr(buffer, word))  // word(탐색할 단어)가 buffer에 포함이 되어 있는지? 
		{
			printf("라인 %d : 단어 %s이(가)발견 되었습니다.\n", line, word);
		}
	}
	
	fclose(fp);
	return 0;
 } 
