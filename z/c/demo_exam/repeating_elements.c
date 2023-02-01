/*
write a program in c to find the two repeating elements in a given array
i/p:2747834
o/p:74
*/
#include<stdio.h>
void main()
{ 
    int arr[]={2,7,4,7,8,3,4};
   int  j,i;
    for(i=0;i<8;i++)
    {
	    for(j=i+1;j<8;j++)
	    {
		    if(arr[i]==arr[j])
			    printf("%d",arr[j]);

            }
    }
}


