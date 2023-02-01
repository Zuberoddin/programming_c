#include<stdio.h>
int i,j;
void main()
{
	int x[3]={10,20,30};
	int y[3]={40,50,60};
	int*ptr[2]; 
	ptr[0]=x;
	ptr[1]=y;
	display(ptr,2,3);
	printf("%p\n",ptr);
	printf("%p\n-%p\n",&ptr[0],ptr[0]);
	printf("%p-%p\n",&ptr[1],ptr[1]);
	for(i=0;i<2;i++)
	printf("%p-%p\n",&ptr[i],ptr[i]);
	for(i=0;i<2;i++)
	{
		printf("%p-%p\n",&ptr[i],ptr[i]);
		for(j=0;j<3;j++)
		printf("%p-%d\n",&ptr[i][j],ptr[i][j]);
	}
}
	void display(int**dptr,int np,int ne)
	{
		for(i=0;i<np;i++)
		{
			printf("%p-%p\n",&dptr[i],dptr[i]);
			for(j=0;j<ne;j++)
			printf("%p-%d\n",&dptr[i][j],dptr[i][j]);
			printf("\n");
			
		}
	}
