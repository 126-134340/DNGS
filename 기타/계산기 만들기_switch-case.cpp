//������� <�� ���� �Է� �޾� ���� �����_switch-case>
 
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
			printf("�߸��� �Է��Դϴ�.");
			
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
