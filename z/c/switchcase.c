#include<stdio.h>
main()
{
	int num,rem,temp=0,opt,sum=0,count=0,i=1;
	printf("select the option\n 1.reverse\n 2.sumdigits\n 3.count\n 4.polindrome\n 5.decimaltobinary\n 6.binarytodecimal\n 7.evenodd\n");
	scanf("%d",&opt);
	__fpurge(stdin);
	printf("Enter the value:\n");
	scanf("%d",&num);
	switch(opt)
	{
	case 1:
	     temp=num;
	     sum=0;
	     while(temp>0)
	     {
	     rem=temp%10;
	     temp=temp/10;
	     sum=sum*10+rem;
	     }
	     printf("%d\n",sum);
	     break;
	case 2:
	     temp=num;
	     sum=0;
	     while(temp>0)
	     {
	     rem=temp%10;
	     temp=temp/10;
	     sum=sum+rem;
	     }
	     printf("%d\n",sum);
	     break;
	case 3:
	     if(num!=0)
	     {
		     while(num!=0)
		     {
			     num=num/10;
			     count++;
		     }
		     printf("%d\n",count);
	     }
        	 else
		  {
		     count++;
		  }  
	     break;
	case 4:
	     temp=num;
	     sum=0;
	     while(temp!=0)
	     {
		     rem=temp%10;
		     temp=temp/10;
		     sum=sum*10+rem;
	     }
		     if(sum==num)
			     printf("It is a palindrome\n");
		     else
			     printf("It is not a palindrome\n");
		break;
	case 5:
		i=1;
		temp=num;
		while(temp!=0)
		{
			rem=temp%2;
			temp=temp/2;
			sum=sum+i*rem;
			i=i*10;
		}
		printf("%d",sum);
		break;
        case 6:
		i=1;
		temp=num;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum+i*rem;
			i=i*2;
		}
		printf("%d",sum);
		break;

	case 7:
		if(num%2==0)
			printf("The given number is an Even number\n");
		else
			printf("The given number is an odd number\n");

		break;
	}
}
