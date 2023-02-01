#include"myheader.h"
void display()
{
        int i,j,arr[SIZE];
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
