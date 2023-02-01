#include "myheader.h"
#include <stdio.h>
void main(void)
{
        int num,opt,res,bin,num1,num2,num3;
        while(1)
        {
                printf("Menu\n 0.exit\n 1.decimal_binary\n 2.sum_digits\n 3.polyndrome_problem\n");
            printf("select the option\n");
                scanf("%d",&opt);
                switch(opt)
                {
                case 0:
                        exit(0);
              case 1:
                       printf("Enter the num:\n");
                       scanf("%d",&num1);
                        __fpurge(stdin);

                       res=decimal_binary( num1); //function invocation

                       printf("%d\n",res);
                       break;
              case 2:
                       printf("Enter the num:\n");
                       scanf("%d",&num2);

                       res= sum_digits(num2); //function invocation

                       printf("%d\n",res);
                       break;
              case 3:
                       printf("Enter the num:\n");
                       scanf("%d",&num3);

                       res=polyndrome_problem(num3); //function in
		       printf("%d",res);

                       break;
                }
        }
}

