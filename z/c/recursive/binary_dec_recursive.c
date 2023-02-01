#include<stdio.h>
int bin_dec_recursive(int n);
int sum=0,rem,i=1;
main()
{
	int num,res;
	printf("Enter the input:\n");
	scanf("%d",&num);
	res=bin_dec_recursive(num);
	printf("%d\n",res);
}
int bin_dec_recursive(int n)
{
	 if(n!=0)
	 {
	 	rem=n%10;
	 	n=n/10;
	 	sum=sum+i*2;
	 	i=i*2;
		bin_dec_recursive(n);
	 }
	 return sum;
}
