//���α׷��� p.69 <�����÷ο� ����÷ο�> 

#include <stdio.h>
#include <limits.h>
int main()
{
	printf("char�� �ּڰ�: %6d, char�� �ִ�: %6d\n", CHAR_MIN, CHAR_MAX);
	printf("short�� �ּڰ�: %6d, short�� �ִ�: %6d\n", SHRT_MIN, SHRT_MAX);
	char cA = 128, cB = -129;
	short sA = 32768, sB = -32769;
	printf("%d %d\n", cA, cB);
	printf("%d %d\n", sA, sB);
	return 0;
}

//[INPUT]
//(����)
//
//
//[OUTPUT]
//char�� �ּڰ�:   -128, char�� �ִ�:    127
//short�� �ּڰ�: -32768, short�� �ִ�:  32767
//-128 127
//-32768 32767
