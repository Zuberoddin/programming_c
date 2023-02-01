#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the numbers:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	((a>b)?((a>c)?((a>d)?printf("%d is big",a):printf("%d is big",d)):((c>d)?printf("%d is big",c):printf("%d is big",d))):((b>c)?((b>d)?printf("%d is big",b):printf("%d is big",d)):((c>d)?printf("%d is big",c):printf("%d is big",d))));
	 }
