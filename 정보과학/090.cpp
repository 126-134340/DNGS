//정보과학 p.90 <별을 X자로 출력하기>

#include <stdio.h>
char cross[110][110];
int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(i==j||(i+j)==(n-1)) cross[i][j]='*';
			else cross[i][j]=' ';
	
	for(int i=0; i<n; i++)
		printf("%s\n", cross[i]);
}


//[INPUT]
//4
//
//
//[OUTPUT]
//*  *
// **
// **
//*  *
