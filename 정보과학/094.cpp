//정보과학 p.94 <성적 입력하기>

#include <stdio.h>
struct stu
{
	int num;
	char name[20];
	int score;
};

int main()
{
	stu p1, p2;
	
	scanf("%d %s %d", &p1.num, p1.name, &p1.score);
	scanf("%d %s %d", &p2.num, p2.name, &p2.score);
	
	if(p1.score>=p2.score)
		printf("%d %s %d\n", p1.num, p1.name, p1.score);
	
	if(p1.score<=p2.score)
		printf("%d %s %d\n", p2.num, p2.name, p2.score);
}


//[INPUT]
//20307 suji 91
//20311 minsu 91
//
//
//[OUTPUT]
//20307 suji 91
//20311 minsu 91
