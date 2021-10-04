//정보과학 p.112 <n까지의 합(하향식 재귀)>
 
#include <stdio.h>
int n;
int f(int k)
{
	if(k<=1) return 1;
	return f(k-1)+k;
}

int main()
{
	scanf("%d", &n);
	printf("%d\n", f(n));
}


//[INPUT]
//13
//
//
//[OUTPUT]
//91
