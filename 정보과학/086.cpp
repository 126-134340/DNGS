//정보과학 p.86 <n*n 배열에 저장하여 출력하기>

#include <stdio.h>
int n, d[20][20];
int main()
{
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &d[i][j]);
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", d[i][j]);
		printf("\n");
	}
}


//[INPUT]
//3
//9 8 7 6 5 4 3 2 1
//
//
//[OUTPUT]
//9 8 7
//6 5 4
//3 2 1
