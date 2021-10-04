//프로그래밍 p.135 <되부름 함수> 

#include <stdio.h>
int factorial_r( int n )
{
	if ( n>1 )
	{
		return ( n*factorial_r(n-1));
	}
	else
	{
		return 1;
	}
}
int factorial_l( int n )
{
	int i, p=1;
	for ( i=1; i<=n; i++)
	{
		p=p*i;
	}
	return p;
}
int main()
{
	int recursive, loop;
	recursive = factorial_l(5);
	loop=factorial_l(5);
	printf("재귀 호출 %d\n", recursive );
	printf("반복문 %d\n", loop);
	return 0;
}


//[INPUT]
//(없음)
//
//
//[OUTPUT] 
//재귀 호출 120
//반복문 120
