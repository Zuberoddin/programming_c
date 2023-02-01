#include<stdio.h>
#include<stdlib.h>
#define R 3
#define C 3
void read(int(*)[],int,int);
void display(int(*)[],int,int);
int main(void)
{
	int i,j;
	int(*mat)[C];
	mat=(int*)malloc(R*C*(sizeof(int)));
	
	if(mat==NULL)
	{
		printf("failed to allocated memory in heap segment\n");
		exit(1);
	}
	read(mat,R,C);
	display(mat,R,C);
	free(mat);//memory deallocation if u are not deallocate memory leaks will be coming:::
}

void read(int(*mat)[C],int r,int e)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n");
	
}

void display(int(*mat)[C],int r,int e)
{

	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}




