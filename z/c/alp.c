#include<stdio.h>
main()
{
        char x,y;
        printf("enter the alphabet\n");
        scanf("%c",&x);
        if (x>=97 && x<=122)
        {
                y=x-32;
                printf("%c\n",y);
        }
        else if (x>=65 && x<=90)
        {
                y=x+32;
                printf("%c\n",y);
        }
        else
        {
                printf("Entered input is invalid\n");
        }
}

