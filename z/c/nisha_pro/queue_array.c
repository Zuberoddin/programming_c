/*Implementation of queue using arrays*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int f=-1;
int r=-1;

void insert(int *ptr,int num)
{
	//Intial condition queue is empty
	if(f==-1)
		f++;
	//queue is full  || when r reached max index it should be incremented again to fill the empty spaces and it shouldn't execed f otherwise the previous values gets overwrite
	else if(((r==SIZE-1)&&(f==0))||(r==f-1))
	{
		printf("Queue is full\n");
		return;
	}
	//when r reached max index but it has some empty blocks left before so to acess them again we have to reset the rear index(r)
	else if(r==SIZE-1)
	{
		r=0;
		ptr[r]=num;
		return;
	}
	//to insert the value 
	r++;
	ptr[r]=num;
}

void delete(int *queue)
{
	//Intial condition queue is empty
	if(f==-1)
		printf("Queue is empty\n");
	//front and rear are pointing at same element so reset the f & r by doing this we can delete the newly add elements in the front empty spaces
	else if(f==r)
	{
		f=r=-1;
		return;
	}
	//front =array size so reset the f by doing this we can delete the newly add elements in the front empty spaces
	else if(f==SIZE-1)
	{
		f=0;
		return;
	}
	//delete the elements
	f++;
}

void display(int *ptr)
{
	int i;
	//intially Queue is empty
	if(f==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	//when f is zero r is max & if the f and r are with in the size at random indexes it prints the elements and if f and r are point only at element it will print that single element
	if(f<=r)
	{
		for(i=f;i<=r;i++)
			printf("%d\t%p\n",ptr[i],&ptr[i]);
	}
	//when new element are added it sholud display in an order ie., first the past elemenets and then newly added elements

	else if(r<f)
	{
		for(i=f;i<=SIZE-1;i++)
			printf("%d\t%p\n",ptr[i],&ptr[i]);
		for(i=0;i<=r;i++)
			printf("%d\t%p\n",ptr[i],&ptr[i]);
	}
}



void ascending_order(int *ptr)
{
	int i,j,t;
	if(f==-1)
	{
		printf("Queue is empty\n");
		exit(0);
	}
	if(f>r)
	{
		for(i=f;i<=SIZE+r;i++)
		{
			for(j=i+r;j<=SIZE+r;j++)
			{
				if(ptr[i%SIZE]>ptr[j%SIZE])
				{
					t=ptr[i%SIZE];
					ptr[i%SIZE]=ptr[j%SIZE];
					ptr[j%SIZE]=t;
				}
			}
		}
	}
	else
	{
		for(i=f;i<r;i++)
		{
			for(j=i+1;j<r+1;j++)
			{
				if(ptr[i]>ptr[j])
				{
					t=ptr[i];
					ptr[i]=ptr[j];
					ptr[j]=t;
				}
			}
		}
	}
}




void main()
{
	int opt,num;
	int queue[SIZE];
	while(1)
	{
		printf("--------------------------------------------------------------------\nMain Menu\n1.Insert\n2.Delete\n3.Display\n4.Ascending order\n0.exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
				exit(0);
			case 1:
				printf("Enter the value: ");
				scanf("%d",&num);
				insert(queue,num);
				break;
			case 2:
				delete(queue);
				break;
			case 3:
				display(queue);
				break;
			case 4:
				ascending_order(queue);
				break;
			default:
				printf("Invalid input\n");
		}
	}
}

