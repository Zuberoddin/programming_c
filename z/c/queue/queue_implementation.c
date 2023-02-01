#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int f=-1;
int r=-1;
void insert(int *ptr,int num)
{
	if(f==-1)
		f++,r++;
	else if(((r==SIZE-1)&&(f==0))||(r==f-1))
	{
		printf("queue is full\n");
		return;
	}
	else if(r==SIZE-1)
	{
		r=0;
		ptr[r]=num;
		return;
	}
	else
		r++;
		ptr[r]=num;
	
}

void delete()
{
	int i;
	if(f==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else if(f==r)
	{
		f=r=-1;
		return;
	}
	else if(f==SIZE-1)
	{
		f=0;
		return;
	}
	else 
	f++;
}

void display(int *ptr)
{
	int i;
	if(f==-1)
	{
		printf("queue is empty\n");
	}
	else if(f<=r)
	{
		for(i=f;i<=r;i++)
			printf("%d\n",ptr[i]);
	}
	else if(r<f)
	{
		for(i=f;i<=SIZE-1;i++)
			printf("%d\n",ptr[i]);
		for(i=0;i<=r;i++)
			printf("%d\n",ptr[i]);
	}
}

int main()
{
	int opt,num,arr[SIZE];
	while(1)
	{
		printf("Menu\n 0.exit\n 1.insert\n 2.delete\n 3.display\n");
		printf("Select the option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: printf("Enter the input:");
				scanf("%d",&num);
				insert(arr,num);
				break;
			case 2: delete();
				break;
			case 3: 
				printf("\n");
				display(arr);
				break;
			default: printf("Entered correct option\n");
				
		}
	}
}


