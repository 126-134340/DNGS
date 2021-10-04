//프로그래밍 p.101 <switch-case> 

#include <stdio.h>
int main()
{
	int score;
	char grade;
	puts("점수를 입력하세요(1~100)");
	putchar('>');
	scanf("%d", &score);
	switch(score / 10)
	{
		case 10:
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		default: grade = 'F';
	}
	printf("학점은 %c 입니다.", grade);
	return 0;
}


//[INPUT]
//점수를 입력하세요(1~100)
//>95
//
//
//[OUTPUT]
//학점은 A 입니다.
