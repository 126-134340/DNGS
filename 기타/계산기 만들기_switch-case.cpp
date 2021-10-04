//응용과제 <두 숫자 입력 받아 계산기 만들기_switch-case>
 
#include <stdio.h>

int main()
{
	int a, c, t;
	char b;
	
	scanf("%d %c %d", &a, &b, &c);
	
	switch(b)
	{
		case '+':
			t=a+c; break;
		case '-':
			t=a-c; break;
		case '*':
			t=a*c; break;
		case '/':
			t=a/c; break;
		case '%':
			t=a%c; break;
		default:
			printf("잘못된 입력입니다.");
			
	}
	
	printf("%d %c %d\n", a, b, c);
	printf("%d", t);
}


//[INPUT]
//1 + 2
//1 + 2
//
//
//[OUTPUT]
//3
