//정보과학 p.113 <n개의 별(상향식 재귀)>
 
#include <stdio.h>
int n;
void f(int k)
{
	if(k>n) return;
	printf("*");
	f(k+1);
}

int main()
{
	scanf("%d", &n);
	f(1);
}


//[INPUT]
//5
//
//
//[OUTPUT]
//*****
