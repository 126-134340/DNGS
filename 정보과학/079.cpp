//정보과학 p.79 <정수 n개 저장하기>

#include <stdio.h>
int n, d[10001];
int main()
{
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++)
		scanf("%d", &d[i]);
	
	for(int i = 1; i<=n; i++)
		printf("%d ", d[i]);
	
	printf("\n");
}


//[INPUT]
//10
//4 3 2 5 3 1 4 6 2 3
//
//
//[OUTPUT]
//4 3 2 5 3 1 4 6 2 3
