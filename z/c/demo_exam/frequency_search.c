/*write a program in c to find the two repeating elements in agiven array
i/p:234444555677
o/p:The no.of times the no.of 4 occurs in the given array is: 4
*/
#include<stdio.h>

int no_of_times_occur(int arr[],int,int);

void main()
{
	int arr[]={2,3,4,4,4,4,5,5,5,6,7,7};
	int b=4;
	int no_of_elements_in_array=12;
	int i,res;
      res =no_of_times_occur(arr,no_of_elements_in_array,b);
       printf("The number of times the number %d occurs in the given array is:  %d", b,res);
}

int no_of_times_occur(int arr[],int n,int b)
{
	int i,count;
	for(i=0;i<n;i++)
	{
		if(b==arr[i])
			count++;
	        else
			continue;
	}
	return count;
}

