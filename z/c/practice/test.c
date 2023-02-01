/*
#include<stdio.h>
main()
{
	int x = 259;
	char y;
	y = x;
	printf("%d\n",y);
}
*/
/*

main()
{
        int i,j;
        for(j=0;j<5;j++)
        {
                for(i=0;i<5;i++)
                        printf("*");
        }
        printf("\n");
}
*/

/*
main()
{
	int num,sum=0,temp,rem,i,count=0,countt=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	i=1;
        temp=num;
        while(temp!=0)
        {
                rem=temp%2;
                temp=temp/2;
 		sum=sum+i*rem;
                i=i*10;
		if (rem==0)
		countt++;
		if (rem==1)
		count++;
        }
        printf("%d\n",sum);
	printf("Count of no.of zero,s: %d\n",countt);
	printf("Count of no.of once,s: %d\n",count);
}
*/

main()
{
	int temp,a,num,rem,i,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
		a=101;
                i=1;
                temp=num;
                while(temp!=0)
                {
                        rem=temp%2;
                        temp=temp/2;
                        sum=sum+i*rem;
                        i=i*10;
			if(a=111)

				printf("%d\n",sum);
                }
                printf("%d",sum);
 }

































