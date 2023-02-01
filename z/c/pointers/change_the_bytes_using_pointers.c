//extracting the byte by byte
#include<stdio.h>
main()
{
	unsigned int x=0x11223344;
	unsigned int y= 0xaabbccdd;
	unsigned int z;
	int i;
	void *xptr=&x;
	void *yptr=&y;
	void *zptr=&z;
	for(i=0;i<4;i++)
	{
		printf("%p-%x\n",&((unsigned char*)xptr)[i],((unsigned char*)xptr)[i]);
	}

	for(i=0;i<4;i++)
	{
		printf("%p-%x\n",&((unsigned char*)yptr)[i],((unsigned char*)yptr)[i]);
	}
	((unsigned char*)zptr)[0]=((unsigned char*)xptr)[0];
	((unsigned char*)zptr)[1]=((unsigned char*)yptr)[1];
	((unsigned char*)zptr)[2]=((unsigned char*)xptr)[2];
	((unsigned char*)zptr)[3]=((unsigned char*)yptr)[3];
	printf("%p-ox%x\n",&z,z);
	for(i=0;i<4;i++)
	{
		printf("%p-%x\n",&((unsigned char*)zptr)[i],((unsigned char*)zptr)[i]);
	}
}





















































































































/*

//extracting the byte by byte
void xbyte_by_byte(*xptr,int x);
void ybyte_by_byte(*yptr,int y);
void zbyte_by_byte(*zptr,int z);
#include<stdio.h>
main()
{
	unsigned int x=0x11223344;
	unsigned int y= 0xaabbccdd;
	unsigned int z;
	int i,opt;
	void *xptr=&x;
	void *yptr=&y;
	void *zptr=&z;
	while(1)
	{
		printf("menu\n 0.exit\n 1.xbyte_by_byte\n 2.ybyte_by_byte\n 3.zbyte_by_byte\n");
		printf("select the option:\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:exit(0);
			case 1:
			       xbyte_by_byte(*xptr,x);
			case 2:
			       ybyte_by_byte(*yptr,y);
			case 3:
			       zbyte_by_byte(*zptr,z);
		}
	}
}


			for(i=0;i<4;i++)
			{
				printf("%p-%x\n",&((unsigned char*)yptr)[i],((unsigned char*)yptr)[i]);
			}
			((unsigned char*)zptr)[0]=((unsigned char*)xptr)[0];
			((unsigned char*)zptr)[1]=((unsigned char*)yptr)[1];
			((unsigned char*)zptr)[2]=((unsigned char*)xptr)[2];
			((unsigned char*)zptr)[3]=((unsigned char*)yptr)[3];
			printf("%p-ox%x\n",&z,z);
			for(i=0;i<4;i++)
			{
				printf("%p-%x\n",&((unsigned char*)zptr)[i],((unsigned char*)zptr)[i]);
			}
		}


for(i=0;i<4;i++)
                        {
                               prt:printf("%p-%x\n",&((unsigned char*)xptr)[i],((unsigned char*)xptr)[i]);
                        }
for(i=0;i<4;i++)
                        {
                                printf("%p-%x\n",&((unsigned char*)yptr)[i],((unsigned char*)yptr)[i]);
                        }

*/











































