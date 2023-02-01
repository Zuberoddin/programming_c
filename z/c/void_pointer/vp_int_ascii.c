#include<stdio.h>
#include<stdlib.h>
int ascii_int(char*s1);
char int_ascii(int a);
void palindrome(char*s2);
void *vptr;
int main()
{	
	int opt,a,m,rem,sum=0,temp;
	char s1[10];
	char s2[10];
	while(1)
	{
		printf("0.exit\n 1.ascii to int\n 2.int to ascii\n 3.string palindrome\n");
		printf("select the option:\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
				exit(0);
			case 1:
				printf("enter a string:");
				scanf("%s",s1);
			
				vptr=ascii_int;
				m=((int(*)(char*))vptr)(s1);
				printf("%d\n",m);
				break;
			case 2:
				printf("enter a number:");
				scanf("%d",&a);
			
				vptr=int_ascii;
				((char(*)(int))vptr)(a);
				break;
			case 3:
				printf("enter a string for checking whether it was palindrome or not:");
				scanf("%s",s2);
				vptr=palindrome;
				((void(*)(char*))vptr)(s2);
				break;
				
			default:
				printf("enter valid option:\n");
		}
		
	}
}
int ascii_int(char *s1)
{
printf("%s received\n",s1);
	int i,sum=0,temp;
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='0')&&(s1[i]<='9'))
		{		
			temp=s1[i]-48;
			sum=sum*10+temp;
		}
		
	}	
		return sum;
}




char int_ascii(int a)
{
printf("%d is received\n",a);
int i,rem,temp,c=0;
char sum[10];
temp=a;
while(temp>0)
{
temp=temp/10;
c++;
}
temp=a;
sum[c]='\0';
for(i=(c-1);i>=0;i--)
{
rem=temp%10;
temp=temp/10;
sum[i]=rem+48;
}
printf("%s\n",sum);
}




void palindrome(char* s2)
{
	printf("%s is received\n",s2);
	int i,j,l;
	l=strlen(s2);
	for(i=0,j=(l-1);i<=j;i++,j--)
	{
		if(s2[i]==s2[j])
		continue;
		else
		{
			printf("not palindrome");
			exit(1);
		}
	}
	printf("palindrome\n");
}




































				
				
				
