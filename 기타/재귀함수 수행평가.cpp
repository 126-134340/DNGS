//���α׷��� 2�� ������ <����Լ�>

#include<stdio.h>
void fun(int x) 
{
	printf("+start: x=%d\n", x);
	if( x > 1)
	{
		fun(x - 1);
	}
	printf("-end: x=%d\n", x);
	
	return;
}

int main() 
{
	int n;
	printf("�Լ��� ȣ�� Ƚ���� �Է�=>");
	scanf("%d", &n);
	fun(n);
	
	return 0;
}


//[INPUT]
//�Լ��� ȣ�� Ƚ���� �Է�=>4
//
//
//[OUTPUT]
//+start: x=4
//+start: x=3
//+start: x=2
//+start: x=1
//-end: x=1
//-end: x=2
//-end: x=3
//-end: x=4
