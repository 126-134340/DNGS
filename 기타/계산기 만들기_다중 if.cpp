//������� <�� ���� �Է� �޾� ���� �����_���� if>
 
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
		printf("�߸��� �Է��Դϴ�.");
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
