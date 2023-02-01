#include<stdio.h>
#include<stdlib.h>
void free(void *ptr);
void readinput(int *ptr,int n);
void displayinput(int *ptr,int n);
void biggest(int *ptr, int n);
void sec_big(int *ptr,int n);
void binary(int *ptr,int n);
void ascending(int *ptr,int n);
void main(void)
{
       int *ptr,opt,n;
       printf("enter the number of values you want to store:");
       scanf("%d",&n);
       ptr=(int *)calloc(5,sizeof(int));
       if(ptr==NULL)
       {
           printf("failuere to allocate memory\n");
           exit(1);
       }
       
       
       while(1)
       {
             printf("select the below options:\n");
             printf("1.Exit \n 2.Read input \n 3.Display input \n 4.biggest value \n 5.2nd Biggest \n 6.Binary \n 7.Update data in asscending order\n");
             printf("enter your option:");
             scanf("%d",&opt);
       switch(opt)
       {
           case 1: free(ptr);
                   exit(0);
           break;
           case 2:    
                      readinput(ptr,n);
           break;
           case 3: 
                      displayinput(ptr,n);
           break;
           case 4:     biggest(ptr,n);  
           break;       
           case 5:
                      sec_big(ptr,n);
           break;
           case 6:
                  binary(ptr,n);
           break;
           case 7:
                ascending(ptr,n);
           break;
           default:
            printf("enter the desired option\n");
                      
              
                               
                   
       
       }
       }
}
void readinput(int *ptr,int n)
{
      int i;
      printf("enter the values:\n");
      for(i=0;i<n;i++)
      {
           scanf("%d",&ptr[i]);
         
      }


}
void displayinput(int *ptr,int n)
{
      int i;
      printf("enter the values:");
      for(i=0;i<n;i++)
      {
           printf("%d\n",ptr[i]);
         
      }
}
void biggest(int *ptr, int n)
{
     int big=0,i;
     for(i=0;i<5;i++)
     {
          if(big<ptr[i])
          big=ptr[i];
     }
     printf("biggest number is : %d\n",big);
}
void sec_big(int *ptr,int n)
{
      
      int big=0,sbig=0,i,j;
     for(i=0;i<5;i++)
     {
          if(big<ptr[i])
          big=ptr[i];
     }
     for(j=0;j<5;j++)
     {
          if(ptr[j]!=big)
          {
              if(sbig<ptr[j])
              sbig=ptr[j];
          }
     }
     printf("second largest is %d\n",sbig);
}
void binary(int *ptr,int n)
{
        int sum=0,rem,temp=0,i,j=1;
        for(i=0;i<n;i++)
        {
              sum=0;
              temp=ptr[i];
              j=1;
              while(temp!=0)
              {
                    rem=temp%2;
                    sum=sum+rem*j;
                    temp=temp/2;
                    j=j*10;
              } 
              printf("%d - %d\n",ptr[i],sum);
        }
}
void ascending(int *ptr,int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
         
         {
             
              if(ptr[i]>ptr[j])
              {
                   temp=ptr[i];
                   ptr[i]=ptr[j];
                   ptr[j]=temp;
              }
         }
         printf("%d\n",ptr[i]);
         
    }
    
}






