int binary_decimal(int bin)
{
	int i=1,temp,sum=0,rem;
		temp=bin;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum+i*rem;
			i=i*2;
		}
		return sum;
}
