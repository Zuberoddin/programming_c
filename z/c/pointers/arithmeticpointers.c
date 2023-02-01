int read_integer(int *ptr,int n);
void display_integer(int *ptr,int n);
#define MAX 5
#include<stdio.h>
main()
{
	int *ptr;
	int i,n,null;
	ptr=(int *)calloc(5,sizeof(int));
	if(ptr==null)
	{
		printf("failed to allocate memory in heap\n");
		exit(1);
	}
	n=read_integer(ptr,MAX);
		display_integer(ptr,MAX);
	free(ptr);
}

int read_integer(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the input:\n");
		scanf("%d",&ptr[i]);
	}
	return i;
}
void display_integer(int *ptr,int n)
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("%d's element %p-%d\n",i+1,&ptr[i],ptr[i]);
	}
}


