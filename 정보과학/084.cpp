//정보과학 p.84 <단어 저장하기>

#include <stdio.h>
char s[10001];
int main()
{
	scanf("%s", s); //문자 배열의 이름만 사용
	
	for(int i=0; s[i]!='\0'; i++)
		printf("%c", s[i]);
	
	printf("\n"); 
}


//[INPUT]
//string
//
//
//[OUTPUT]
//string
