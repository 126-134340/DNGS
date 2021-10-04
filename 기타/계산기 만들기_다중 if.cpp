//응용과제 <두 숫자 입력 받아 계산기 만들기_다중 if>
 
#include <stdio.h>

int main()
{
	int a, c, t;
	char b;
	
	scanf("%d %c %d", &a, &b, &c); 
	
	if(b=='+')
	{
		t=a+c;
	}
	else if(b=='-')
	{
		t=a-c;
	}
	else if(b=='*')
	{
		t=a*c;
	}
	else if(b=='/')
	{
		t=a/c;
	}
	else if(b=='%')
	{
		t=a%c;
	}
	else
	{
		printf("잘못된 입력입니다.");
	}
	printf("%d %c %d = ", a, b, c);
	printf("%d", t);
}


//[INPUT]
//1 + 2
//
//
//[OUTPUT]
//1 + 2 = 3
