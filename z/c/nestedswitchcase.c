#include<stdio.h>
main()
{
	int opt,z=0,o=0,a,b,c,rem,bit,num,temp,sum=0,i=1,d,y,n1=0,j,n2=1,n3;
	unsigned int x,p,q,r;
	char sub_opt,u,v,ch;
	printf("0.exit\n 1.bitwise\n 2.Mathematical operation\n 3.Swap the content of the variable\n 4.UppercaseToLowercase viseversa CharacterTointeger\n 5.FibonacciSeries select the operation\n");
	scanf("%d",&opt);
	switch(opt)
	{
	case 0:exit(0);
	case 1:printf("select the option to perform Bit_wise operations\n a.print the binary bits \n b.Swap the bits\n c.count no.of zero's and once's\n");
	       __fpurge(stdin);
	       scanf("%c",&sub_opt);
	       switch(sub_opt)
	       {
	      	 case 'a':
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
		 case 'b':
				{ 
				printf("Enter the value:\n");
		                scanf("%d",&x);
                		p=(x&(~((0x1<<7)|(0x1<<0))));
                	       	q=((x&(0x1<<0))<<(7-0));
               			r=((x&(0x1<<7))>>(7-0));
               			printf("%p\n",(p|q|r));
				}
				break;
		case 'c':
 		    	  	
				z=0,o=0;
				printf("Enter the value:\n");
		                scanf("%x",&x);
				for(bit=8;bit>=0;bit--)
				{
					if((x&(0x1<<bit))==0)
					{
						printf("0");
						z++;
					}
					else
					{
						printf("1");
						o++;
					}
				}
				printf("Count of no.of zeros are:%d\n",z);
				printf("Count of no.of onces are:%d\n",o);
				printf("\n");
				break;
		default: printf("Invalid input\n");
	       }
	       break;
	       
	 case 2: printf("select the option to perform mathematical operation\n a.polyndrome\n b.sum of digits\n c.DecimalTobinary\n d. BinaryToDecimal\n");
		 __fpurge(stdin);
		 scanf("%c",&sub_opt);
		 printf("Enter the inputs num\n");
		 scanf("%d",&num);
		 switch(sub_opt)
		 {
			 case 'a': 
				 {
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
				 }
               			 break;
			case 'b':
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
			case 'c':
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
			case'd':
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
		 }
		 break;

	case 3:
		 printf("select the option to perform swap the content of the variable\n a.Using third variable\n b.without using third variable\n c.Using bitwise\n");
		 __fpurge(stdin);
                 scanf("%c",&sub_opt);
                 printf("Enter the inputs:\n");
                 scanf("%d:%d",&a,&b);
		 switch(sub_opt)
		 {
		 	case 'a':
				temp=0;	
				temp=a;
				a=b;
				b=temp;
				printf("%d:%d",a,b);
				break;
			case 'b':
				a=a+b;
				b=a-b;
				a=a-b;
				printf("%d:%d",a,b);
				break;
			case 'c':
				a=a^b;
				b=a^b;
				a=a^b;
				printf("%d:%d",a,b);
				break;
		 }
		 break;

	case 4:
          	 printf("select the option to perform \n a.UppercaseToLowercase viseversa\n b.CharacterTointeger\n");
                 __fpurge(stdin);
		 scanf("%c",&sub_opt);
		 __fpurge(stdin);
                 switch(sub_opt)
		 {
			 case 'a':		 
              	                printf("Enter the alphabet:\n");
                                __fpurge(stdin);
				scanf("%c",&u);
				if((u>=97)&&(u<=122))
				{
					v=u-32;
					printf("%c\n",v);
				}
				else if((u>=65)&&(u<=90))
				{
					v=u+32;
					printf("%c\n",v);
				}
				else
				{
					printf("Input is a special character:\n");
				}
				break;
		 }
		 break;
	case 5:
                printf("To perform the Fibonacciseries\n");
	        printf("%d %d\n",n1,n2);
	        printf("enter the number\n");
	        scanf("%d",&num);
	        for(j=2;j<=num;++j)
	        {
		   n3=n1+n2;
		   printf("%d\n",n3);
		   n1=n2;
		   n2=n3;
		}
	         break;
	}
}
 		










		            

