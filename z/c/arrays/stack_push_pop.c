#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int i =-1;
void push();
void pop();
void display();
int arr[SIZE];
int main()
{
	int opt;
	while(1)
	{
		printf("menu\n 0.exit\n 1.push\n 2.pop\n 3.display\n");
		printf("select the option\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			       break;
			case 1:
		      	       push();
			       break;
			case 2:
			       pop();
			       break;
			case 3:
			       display();
			       break;
	       }
	}
}

void push()
{
	int x;
	if(i==SIZE-1)
	{
		printf("stack is overflow\n");
	}
	else
	{
		printf("Enter the element that should be push:\n");
		scanf("%d",&x);
		i=i+1;
		arr[i]=x;
	}
}
void pop()
{
	if(i==-1)
	{
		printf("stack is underflow\n");
	}
	else
	{
		printf("poped element is %d\n",arr[i]);
		i=i-1;
	}
}
void display()
{
	int j;
	if(i==-1)
	{
		printf("stack is overflow\n");
	}
	else
	{
		printf("The elements in the stack are\n");
		for(j=i;j>=0;--j)
		printf("%d\n",arr[j]);
	}
}











