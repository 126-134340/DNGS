//���α׷��� p.135 <�Ǻθ� �Լ�> 

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
	printf("��� ȣ�� %d\n", recursive );
	printf("�ݺ��� %d\n", loop);
	return 0;
}


//[INPUT]
//(����)
//
//
//[OUTPUT] 
//��� ȣ�� 120
//�ݺ��� 120
