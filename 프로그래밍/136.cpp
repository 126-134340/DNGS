//���α׷��� p.136 <�Ǻ���ġ ����(�䳢)>

#include <stdio.h>
int fibo(int num);
int main(void){
	int num;
	printf("\n���� �� �Է�: ");
	scanf("%d", &num);
	printf("�� �䳢 ��: %d", fibo(num+1));
	return 0;
}
int fibo(int num){
	if(num==0) return 0;
	else if (num==1) return 1;
	else return fibo(num-1) + fibo(num-2);
}


//[INPUT]
//���� �� �Է�: 10
//
//
//[OUTPUT]
//�� �䳢 ��: 89
