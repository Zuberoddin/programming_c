#include<stdio.h>
#include<stdlib.h>
void insert(int*ptr,int num);
void deletion(int *ptr);
int search(int*ptr,int num);
int findex=-1;
int rindex=-1;
int main()
{
int queue[5];
int opt,num,pos;
while(1)
{
	printf("Menu\n 0.exit\n 1.insert\n 2.deletion\n 3.display\n 4.search\n");
	printf("select the option:\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 0:exit(0);
		case 1:
		       printf("Enter the value\n");
		       scanf("%d",&num);
		       insert(queue,num);
		       break;
		case 2:
		       deletion(queue);
		       break;
		case 3:
		       display(queue);
		       break;
		case 4:
		       printf("Enter the input\n");
		       scanf("%d",&num);
		       pos=search(queue,num);
		       if(pos==-1)
		       {
			       printf("Element not found\n");
			       break;
		       }
		       printf("Element found at %d\n",pos);
		       break;
		default:
		       printf("Invalid input\n");
	}
}
}

void insert(int*ptr,int num)
{
	if(rindex==4)
	{
		printf("queue is full\n");
		return;
	}
	rindex++;
	findex++;
	ptr[rindex]=num;
}
void deletion(int *ptr)
{
	if(findex==-1)
	{
		printf("queue is empty\n");
			return;
	}
	findex--;
}
void display(int *ptr)
{
	if(rindex==-1)
	{
		printf("queue is empty\n");
		return;
	}
	for(rindex=0;rindex<5;rindex++)
	{
		printf("%d\n",ptr[rindex]);
	}
}
int search(int *ptr,int num)
{
	int rindex;
	if(rindex==-1)
	{
		printf("queue is empty\n");
		return -1;
	}
	for(rindex=0;rindex<5;rindex++)
	{
		if(ptr[rindex]==num)
			return rindex;
	}
	return -1;
}
