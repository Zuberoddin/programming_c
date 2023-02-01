main()
{
	int x=10;
	int* ptr;
	*ptr=30;
	printf("%p\n",x);
	printf("%p\n",ptr);
	printf("%x\n",&ptr);
        printf("%d\n",*ptr);
}
