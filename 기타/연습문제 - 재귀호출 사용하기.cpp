//C언어 코딩 도장 p.957 <연습문제 : 재귀호출 사용하기>
 
#include <stdio.h>

void printNumber(int count)
{
	if (count==4)
		return;
	
	printf("%d\n", count);
	
	printNumber(++count);
}

int main()
{
	int count=1;
	
	printNumber(count);
	
	return 0;
}


//[INPUT]
//(없음)
//
//
//[OUTPUT]
//1
//2
//3
