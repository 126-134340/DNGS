//정보과학 p.124 <리스트의 삽입, 삭제> 

#include <stdio.h>
#include <list>
std::list<int>L;

void view()  //list view
{
	std::list<int>::iterator p;
	for(p=L.begin();p!=L.end();p++)
	{
		printf("%d ", *p);  //*p: 정수 리스트의 p위치에 있는 값 
	}
	printf("\n");
}

int main()
{
	std::list<int>::iterator q;
	
	for(int i=1; i<=3; i++)
	{
		L.push_back(i);
	}
	view();
	
	q=L.begin();
	q++;
	
	L.insert(q, 4);
	view();
	
	L.push_back(5);
	view();
	
	q++;
	L.erase(q);
	view();
}


//[INPUT]
//(없음)
//
//
//[OUTPUT]
//1 2 3
//1 4 2 3
//1 4 2 3 5
//1 4 2 5
