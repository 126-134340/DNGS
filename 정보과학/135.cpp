//정보과학 p.135 <완전 2진 트리의 저장> 

#include <stdio.h>
int n, T[1<<10];

int main()
{
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &T[i]);
	}
	
	for(int k=1; k<=n; k*=2){
		for(int i=k; i<=n&&i<=2*k-1; i++){
			printf("%d ", T[i]);
		}
		printf("\n");
	}
}


//[INPUT]
//9
//9 6 3 7 4 2 5 1 8
//
//
//[OUTPUT]
//9
//6 3
//7 4 2 5
//1 8
