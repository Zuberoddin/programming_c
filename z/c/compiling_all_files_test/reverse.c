int reverse_integer(int num)
{
	int sum=0,temp,rem;
	//printf("Input is recieved from the user %d:\n",num);
	temp=num;
	while(temp!=0)
	{

		rem=temp%10;
		
		temp=temp/10;
		sum=sum*10+rem;
		
	}
	return sum;
}
