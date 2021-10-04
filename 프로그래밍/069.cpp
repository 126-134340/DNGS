//프로그래밍 p.69 <오버플로우 언더플로우> 

#include <stdio.h>
#include <limits.h>
int main()
{
	printf("char의 최솟값: %6d, char의 최댓값: %6d\n", CHAR_MIN, CHAR_MAX);
	printf("short의 최솟값: %6d, short의 최댓값: %6d\n", SHRT_MIN, SHRT_MAX);
	char cA = 128, cB = -129;
	short sA = 32768, sB = -32769;
	printf("%d %d\n", cA, cB);
	printf("%d %d\n", sA, sB);
	return 0;
}

//[INPUT]
//(없음)
//
//
//[OUTPUT]
//char의 최솟값:   -128, char의 최댓값:    127
//short의 최솟값: -32768, short의 최댓값:  32767
//-128 127
//-32768 32767
