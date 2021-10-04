//정보과학 p.99 <행렬 곱 계산하기>

#include <stdio.h>
int n;
struct matrix { int d[2][2];};
int main()
{
	matrix m[10], t, tt;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		for(int k=0;k<=1; k++)
			scanf("%d %d", &m[i].d[k][0], &m[i].d[k][1]);
	
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
		{
			if(i==j) t.d[i][j]=1;
			else t.d[i][j]=0;
			
			tt.d[i][j]=0;
		}
	
	for(int c=0; c<n; c++)
	{
		for(int i=0; i<2; i++)
			for(int j=0; j<2; j++)
				for(int k=0; k<2; k++)
					tt.d[i][j]+=t.d[i][k]*m[c].d[k][j];
		
		for(int i=0; i<2; i++)
			for(int j=0; j<2; j++)
			{
				t.d[i][j]=tt.d[i][j];
				tt.d[i][j]=0;	
			}
	}
	
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
			printf("%d ", t.d[i][j]);
		printf("\n");
	}
}


//[INPUT]
//3
//1 2 3 4
//1 0 0 1
//5 6 7 8
//
//
//[OUTPUT]
//19 22
//43 50
