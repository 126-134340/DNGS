//�������� p.84 <�ܾ� �����ϱ�>

#include <stdio.h>
char s[10001];
int main()
{
	scanf("%s", s); //���� �迭�� �̸��� ���
	
	for(int i=0; s[i]!='\0'; i++)
		printf("%c", s[i]);
	
	printf("\n"); 
}


//[INPUT]
//string
//
//
//[OUTPUT]
//string
