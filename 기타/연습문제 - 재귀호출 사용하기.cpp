//C��� �ڵ� ���� p.957 <�������� : ���ȣ�� ����ϱ�>
 
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
//(����)
//
//
//[OUTPUT]
//1
//2
//3
