#include<stdio.h>
main()
{
	int num,sum=0,temp,rem,i,count=0,countt=0,z=0,o=0,bit,opt;
	unsigned int x,a,b,c;
	printf("Count of no.of zero,s: %d\n",count);
	printf("Select the Option:\n 1.countno.ofzero's\n 2.print the binary value\n 3. swap the bits\n 4. 101 replaced with 111\n");
	scanf("%d",&opt);
	switch(opt)
	{
	case 1:
	{	
		printf("Enter the value:\n");
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
		break;
	}
	case 2:
	{
		printf("Enter the value:\n");
    		scanf("%d",&num);
		for(bit=31;bit>=0;bit--)
		{
			if((num&(0x1<<bit))==0)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
		break;
	}
	case 3: 
	{
		printf("Enter the value:\n");
    		scanf("%d",&x);
		a=(x&(~((0x1<<7)|(0x1<<0))));
		b=((x&(0x1<<0))<<(7-0));
		c=((x&(0x1<<7))>>(7-0));
		printf("%p\n",(a|b|c));
	}
	}
}		































