//프로그래밍 2차 수행평가 <재귀함수>

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
	printf("함수의 호출 횟수를 입력=>");
	scanf("%d", &n);
	fun(n);
	
	return 0;
}


//[INPUT]
//함수의 호출 횟수를 입력=>4
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
