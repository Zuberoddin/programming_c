#include"myheader.h"
void push()
{
        int x,j=0,arr[SIZE];
        if(j==3)
        {
                printf("stack is overflow\n");
        }
        else
        {
                printf("Enter the element that should be push:\n");
                scanf("%d",&x);
                j=j+1;
                arr[j]=x;
        }
}

