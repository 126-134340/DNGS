//�������� p.127 <������ ����, ����> 

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
//(����)
//
//
//[OUTPUT]
//3 2
//5 4 1
