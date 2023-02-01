/*Prime number*/

#include<stdio.h>
void main()
{
	int num,i,rem,count=0;
	printf("Prime number\n");
	printf("-------------\n");
	printf("Enter the value: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			count++;
		}
	}
	if(count==2)
		printf("%d\n",num);
	else
		printf("NOT\n");
}























/*#include<stdio.h>
void main()
{
        int num,i,rem,count=0;
        printf("Enter the value: ");
        scanf("%d",&num);
        for(i=2;i<=num/2;i++)
        {
                rem=num%i;
                if(rem==0)
                {
                        count++;
			printf("NOT\n");
			break;
                }
        }
        if(count==0)
                printf("%d\n",num);
}*/

