//정보과학 p.83 <문자 n개 저장하기>

#include <stdio.h>
char s[10001];
int main()
{
	int n;
	scanf("%d ", &n); //공백 필요
	
	for(int i=0; i<n; i++)
		scanf("%c", &s[i]);
	
	for(int i=0; i<n; i++)
		printf("%c", s[i]);
	
	printf("\n"); 
}


//[INPUT]
//15
//computerscience
//
//
//[OUTPUT]
//computerscience
