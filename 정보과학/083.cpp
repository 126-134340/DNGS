//�������� p.83 <���� n�� �����ϱ�>

#include <stdio.h>
char s[10001];
int main()
{
	int n;
	scanf("%d ", &n); //���� �ʿ�
	
	for(int i=0; i<n; i++)
		scanf("%c", &s[i]);
	
	for(int i=0; i<n; i++)
		printf("%c", s[i]);
	
	printf("\n"); 
}


//[INPUT]
//15
//computerscience
//
//
//[OUTPUT]
//computerscience
