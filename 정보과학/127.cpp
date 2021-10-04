//정보과학 p.127 <스택의 삽입, 삭제> 

#include <stdio.h>
#include <stack>
std::stack<int>S;

int main()
{
	for(int i=1; i<=3; i++)
	{
		S.push(i);
	}
	
	for(int i=1; i<=2; i++)
	{
		printf("%d ", S.top());
		S.pop();
	}
	printf("\n");
	
	S.push(4);
	S.push(5);
	
	while(!S.empty())
	{
		printf("%d ", S.top());
		S.pop();
	}
	
	printf("\n");
}


//[INPUT]
//(없음)
//
//
//[OUTPUT]
//3 2
//5 4 1
