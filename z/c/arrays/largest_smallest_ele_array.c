/*
#include<stdio.h>
main()
{
        int arr[10]={1,4,3,2,5,6,7,8,0,5};
        int i,small,large;
	small=large=arr[0];
        for(i=1;i<10;i++)
        {
                 if(arr[i]<small)
                        small=arr[i];
                 if(arr[i]>large)
                        large=arr[i];
                
        }
        printf("smallest element:%d\n",small);
        printf("largest element is%d\n",large);
}
*/
#include<stdio.h>
main()
{
        int arr[10]={1,4,3,2,5,6};
        int i,small,large;
	small=99;
	large=0;
        for(i=0;i<10;i++)
        {
                 if(arr[i]>large)
                        large=arr[i]; 
        }
        for(i=0;i<10;i++)
        {
                 if(arr[i]<small)
                        small=arr[i]; 
        }
        printf("smallest element:%d\n",small);
        printf("largest element is%d\n",large);
}
