//프로그래밍 p.88 <증감연산자> 

#include <stdio.h>
int main()
{
	int i = 13, j = 5, temp, a = 10, b = 20, c = 30, d = 40;
	temp = ++i; printf("%d %d\n", temp, i);
	temp = i++; printf("%d %d\n", temp, i);
	temp = --j; printf("%d %d\n", temp, j);
	temp = j--; printf("%d %d\n", temp, j);
	++a; b++; --c; d--;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}


//[INPUT]
//(없음)
//
//
//[OUTPUT]
//14 14
//14 15
//4 4
//4 3
//11 21 29 39
