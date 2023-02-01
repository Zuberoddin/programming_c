#include<stdio.h>
#include<stdlib.h>
void push(int*ptr,int num);
void pop();
void display(int*ptr);
int search(int*ptr,int num);
int i=-1;
int main()
{
int stack[5];
int opt,num,pos;
while(1)
{
	printf("Menu\n 0.exit\n 1.push\n 2.pop\n 3.display\n 4.search\n");
	printf("select the option:\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 0:exit(0);
		case 1:
		       printf("Enter the value\n");
		       scanf("%d",&num);
		       push(stack,num);
		       break;
		case 2:
		       pop();
		       break;
		case 3:
		       display(stack);
		       break;
		case 4:
		       printf("Enter the input\n");
		       scanf("%d",&num);
		       pos=search(stack,num);
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

void push(int*ptr,int num)
{
	if(i==4)
	{
		printf("stack is full\n");
		return;
	}
	i++;
	ptr[i]=num;
}
void pop()
{
	if(i==-1)
	{
		printf("stack is empty\n");
			return;
	}
	i--;
}
void display(int *ptr)
{
	int j;
	if(i==-1)
	{
		printf("stack is empty\n");
		return;
	}
	for(j=0;j<=i;j++)
	{
		printf("%d\n",ptr[j]);
	}
}
int search(int *ptr,int num)
{
	int j;
	if(i==-1)
	{
		printf("stack is empty\n");
		return -1;
	}
	for(j=0;j<=i;j++)
	{
		if(ptr[j]==num)
			return j;
	}
	return -1;
}
