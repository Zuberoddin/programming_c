void swap(int *ptr1 , int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("a-%d\n b-%d\n",a,b);
}
	
