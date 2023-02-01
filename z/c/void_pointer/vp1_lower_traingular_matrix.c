#include<stdio.h>
#define ROW 3
#define COL 3
void lower_traingular(int (*m1)[3],int r,int e);
main()
{
	int m1[ROW][COL],i,j;
	void *vptr;
	vptr=m1;
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&(((int(*)[COL])vptr)[i][j]));
		}
	}	
	lower_traingular(vptr,ROW,COL);
}
void lower_traingular(int (*m1)[3],int r,int e)
{
	int i,j;
	printf("Enter the elemnts of m1(3x3):\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			
		if(i<j)
			printf("0");
		else	
			printf("%d",m1[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}

