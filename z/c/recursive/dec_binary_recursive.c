
/*int dec_bin_rec(int n);
#include<stdio.h>
int i=1,sum=0;
main()
{
	int num,res;
	printf("Enter the number:\n");
	scanf("%d",&num);
	res=dec_bin_rec(num);
	printf("%d\n",res);
}
int dec_bin_rec(int n)
{
	int rem;
	
	if(n!=0)
	{
			rem=n%2;
			n=n/2;		
			sum=sum+i*rem;
			i=i*10;	
			dec_bin_rec(n);
	}
	return sum;
}
*/




#include<stdio.h>

int dec_bin_rec(int temp,int sum,int i);
main()
{
	int num,res;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int temp=num,sum=0,i=1;
	res=dec_bin_rec(temp,sum,i);
	printf("%d\n",res);
}
int dec_bin_rec(int n,int sum,int i)
{
	int rem,k;
	
	if(n!=0)
	{
			rem=n%2;
			n=n/2;		
			sum=sum+i*rem;
			i=i*10;	
		k=	dec_bin_rec(n,sum,i);
		return k;
	}
	return sum;
}

/*
#include<stdio.h>

int dec_bin_rec(int temp,int sum,int i);
main()
{
	int num,res;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int temp=num,sum=0,i=1;
	res=dec_bin_rec(temp,sum,i);
	printf("%d\n",res);
}
int dec_bin_rec(int n,int sum,int i)
{
	int rem;
		rem=n%2;
		sum=sum+i*rem;
		i=i*10;
		n=n/2;	
		if(n!=0){	
			dec_bin_rec(n,sum,i);
		
	}
	else 
		return sum;
}
*/












































































