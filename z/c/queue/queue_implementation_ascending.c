
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int* ascending(int *ptr,int n)
{
	int i,j,temp;
	//(f<r)
	//if((f==0) && (r<=SIZE-1))
        //Sort the array in ascending order    
        for (i = 0; i < n; i++) 
        {     
            for (j = i+1; j < n; j++) 
            {     
               if(ptr[i] > ptr[j]) 
               {    
                   temp = ptr[i];    
                   ptr[i] = ptr[j];    
                   ptr[j] = temp;    
               }     
            }   
              
        }  
        
        
	
	/*se if( f > r)
		//ascending(ptr);
	{
		//int k= f-r;
	for (i=r; i < SIZE; i++) 
	{     
	    for (j = i+1; j< SIZE; j++) 
	    {     
	       if(ptr[i] > ptr[j]) 
	       {    
		   temp = ptr[i];    
		   ptr[i] = ptr[j];    
		   ptr[j] = temp;    
	       }     
	    }     
	}    
	}*/
	   //    else
	//	       return;
  	return ptr;    
}     


	

int main()
{
	int opt,num,arr[SIZE],l;
	int *ptr1;
	while(1)
	{
		printf("Menu\n 0.exit\n 1.insert\n 2.delete\n 3.display\n 4.ascending\n");
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
			case 4: 
				//ascending(arr);
				ptr1=ascending(arr,SIZE);
				ptr1=ascending(ptr1,SIZE);
				//int *ptr;
				//Displaying elements of array after sorting
        			printf("Elements of ptr sorted in ascending order:\n");
       				 for (int i = 0; i < SIZE; i++)
           			 	printf("%d\n ", ptr1[i]);
				//return;
				break;
				
			default: printf("Entered correct option\n");
				
		}
	}
}


/////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char *ptr="hari%skrishna%s";
	printf("hari%skrishna%s","hari%skrishna%s","hari%skrishna%s");
}
*/



/*
    #include <stdio.h>    
         
    int main()    
    {    
        //Initialize array     
        int arr[] = {5, 2, 8, 7, 1};     
        int temp = 0;    
            
        //Calculate length of array arr    
        int length = sizeof(arr)/sizeof(arr[0]);    
            
        //Displaying elements of original array    
        printf("Elements of original array: \n");    
        for (int i = 0; i < length; i++) {     
            printf("%d ", arr[i]);     
        }      
            
        //Sort the array in ascending order    
        for (int i = 0; i < length; i++) 
        {     
            for (int j = i+1; j < length; j++) 
            {     
               if(arr[i] > arr[j]) 
               {    
                   temp = arr[i];    
                   arr[i] = arr[j];    
                   arr[j] = temp;    
               }     
            }     
        }    
            
        printf("\n");    
            
        //Displaying elements of array after sorting    
        printf("Elements of array sorted in ascending order: \n");    
        for (int i = 0; i < length; i++) {     
            printf("%d ", arr[i]);    
        }    
        return 0;    
    }     


*/









































