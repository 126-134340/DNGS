//�������� p.113 <n���� ��(����� ���)>
 
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
