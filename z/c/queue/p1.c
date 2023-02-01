/*implementation of queue by using array in switch*/
#include<stdio.h>			
#define SIZE 5
insert(int *ptr);
delete(int *ptr);
display(int *ptr);
ascending(int *ptr);
int f=-1;//front end index
int r=-1; //rear end index
int k=0;
main()
{
	int queue[SIZE];
	int opt,num;
	int *ptr1;
	while(1)
	{
		printf("0.EXIT\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.ASCENDING\n");
		printf("select the option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:
				{
					insert(queue);
					break;
				}
			case 2:delete(queue);
				break;
			case 3:display(queue);
				break;
			case 4:ascending(queue);
				break;
			default :printf("invalid option\n");
		}
		printf("\n-------------------------------------\n");
	}
}
insert(int *ptr)
{
	int i,num;
	if(f==-1)
		{
			printf("queue is empty\n");
			f++;
			r++;
			printf("enter a number:");
			scanf("%d",&num);
			ptr[r]=num;
			printf("number entered\n");
			
		}

	else if((r==(SIZE-1)&&(f==0))||(r==(f-1)))
		{
			printf("queue is full\n");
			return;
		}
	else if(r==(SIZE-1))
		{
			r=-1;
			printf("enter input:");
			scanf("%d",&num);
			r++;
			ptr[r]=num;
			printf("the value %d is inserted in queue at pos %d\n",num,(r+1));
			//r++;
			return;
		}
	else
		{
			r++;
			printf("r=%d\n",r);
			printf("enter input:");
			scanf("%d",&num);
			
			ptr[r]=num;
			printf("the value %d is inserted in queue at pos %d\n",num,(r+1));
			//printf("r is %d\n",r);
			//r++;
			printf("r is %d\n",r);
			
		}
}
	 				                                                                              				
		

delete(int *ptr)
{
	if((f==-1)&&(r==-1))
		{
			printf("queue is empty\n");
			return;
		}
	else if(f==r)
		{
			printf("queue is empty\n");
			f=r=-1;
			return;
		}
	else if(f==(SIZE-1))
		{
			f=0;
			return;
		}
	else
		f++;
}

display(int *ptr)
{
	int i;
	if((f==-1)&&(r==-1))
		{
			printf("queue is empty\n");
			
			return;
		}
	if(f<=r)	
		{
			printf("r is %d\n",r);
			printf("f is %d\n",f);
			for(i=f;i<=r;i++)
				printf("%p-%d\n",&ptr[i],ptr[i]);
				
		}
	else if(r<f)
		{
			for(i=f;i<SIZE;i++)
				printf("%p-%d\n",&ptr[i],ptr[i]);
			for(i=0;i<=r;i++)
				printf("%p-%d\n",&ptr[i],ptr[i]);
		}
}

ascending(int *ptr)
{
	int i,j,k,temp=0,arr1[SIZE],ary[SIZE];
	for(i=0;i<SIZE;i++)
		ary[i]=ptr[i];
	
	if(f==-1)
		{
			printf("queue is empty\n");
			f++;
			return;
		}
	if(f<r)
		{
			for(i=f;i<=r;i++)
			{
				for(j=i+1;j<=r;j++)
				{
					if(ary[i]>ary[j])			
					{
						temp=ary[i];
						ary[i]=ary[j];
						ary[j]=temp;
					}
				}
			}
			for(i=f;i<=r;i++)
			printf("%d\n",ary[i]);
	
		}
	else if(r<f)
		{
			for(i=f,k=0;i<SIZE;i++,k++)
			{
				arr1[k]=ary[i];
			}
			printf("r is %d\n",r);
			printf("f is %d\n",i);
			printf("k is %d\n",k);
			for(i=0;i<=r;i++,k++)
			{
				arr1[k]=ary[i];
			}
			for(i=0;i<k;i++)
			{
				for(j=i+1;j<k;j++)
				{
					if(arr1[i]>arr1[j])			
					{
						temp=arr1[i];
						arr1[i]=arr1[j];
						arr1[j]=temp;
					}
				}
			printf("%d\n",arr1[i]);
			}
		}
	else if(r==f)
		printf("only single element %d\n",ary[r]);
}
			
