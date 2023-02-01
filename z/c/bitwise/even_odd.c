#include<stdio.h>
void main()
{
     int num;
   printf("enter the number\n");
     scanf("%x",&num);
 //    if(num<1)
   //  {
//	     printf("Enter the num 1 0r 0\n");
//	     goto a;
  //   }
     if(num&0==0)

	     printf("given number is odd\n");
     else
	     printf("given number is even\n");
}

