main()
{
	char *ptr;
	ptr=0x1000;
	printf("%p\n",ptr++);
	ptr=0x1000;
	printf("%p\n",++ptr);
}
