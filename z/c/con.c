#include<stdio.h>
int main(){
   const int number=45;
   int number=30;
   int value;
   int data;
   printf("enter the data:");
   scanf("%d",&data);
   value=number*data;
   printf("The value is: %d",value);
   return 0;
}	
