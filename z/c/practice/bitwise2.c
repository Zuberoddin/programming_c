main()
{
	unsigned int x=0xbac24713;
	x=x&(~(0x7<<5));
	printf("%x\n",x);
}
