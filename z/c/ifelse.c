
//Supose take 1gb of memory in that we are divided into two parts respectively part-1 and part-2, In part-1(a and b sub blocks present) like that part-2 is having a and b sub blocks FIND OUT WHICH ADREES CONTAINS PARTICULAR Part-1 AND Part-2 AND SUB BLOCKS
/*
#include<stdio.h>
main()
{
	unsigned int x;
	printf("Enter the adress:\n");
	scanf("%x",&x);
	if((x>=0x0000)&&(x<=0x3FFF))
	{
		if(x>=0x2000)
		{
			if(x<=0x3000)
				printf("part-1-b\n");
			else
				printf("part-1-a\n");
		}
		else if(x>=0x0000)
		{
			if(x<=0x1000)
				printf("part-2-b\n");
			else
				printf("part-2-a\n");
		}
	}
	else
		printf("invalid input\n");
}
-----------------------------OR---------------------------------
*/
/*
	if((x>=0x0000)&&(x<=0x4000))
	{
		if(x>=0x3000)
			printf("Part-1-a\n");
		else if(x>=0x2000)
			printf("part-1-b\n");
		else if(x>=0x1000)
			printf("part-2-a\n");
		else
			printf("part-2-b\n");
	}
	else
		printf("Invalid input\n");
	}
*/
/*
        if((x>=0x00000000)&&(x<=0x3E800000))
        {
                if(x>=0x2EE00000)
                        printf("Part-1-a\n");
                else if(x>=0x1F400000)
                        printf("part-1-b\n");
                else if(x>=0xFA00000)
                        printf("part-2-a\n");
                else
                        printf("part-2-b\n");
        }
        else
                printf("Invalid input\n");
}
  */
/*
 //Taking 2KB of memory 
#include<stdio.h>
main()
{
	unsigned int kb=1024;
	unsigned int mb=1024*kb;
	unsigned int gb=1024*mb;
	unsigned int str=0x00;
	unsigned int x;

       printf("partition 1 block B ranges from %p to %p\n", str , str+511);
       printf("partition 1 block A ranges from %p to %p\n", str+512,str+512+511);
       printf("partition 2 block B ranges from %p to %p\n", str+512+512,str+512+512+511);
       printf("partition 2  block A ranges from %p to %p\n", str+512+512+512,str+512+512+512+511);

       printf("Enter the adress:\n");
       scanf("%x",&x);


      if((x>=0x00)&&(x<=str+512+512+512+511))
        {
                if(x<=str+511)
                        printf("Part-1-B\n");
                else if(x<=(str+512+511))
                        printf("part-1-A\n");
                else if(x<=(str+512+512+511))
                        printf("part-2-B\n");
                else
                        printf("part-2-A\n");
         }
        else
                printf("Invalid input\n");
}

*/

/*
#include<stdio.h>
main()
{
        unsigned int KB=1024;
        unsigned int MB=1024*KB;
        unsigned int GB=1024*MB;
        unsigned int str=0x00000000;
        unsigned int x;

       printf("partition 1 block B ranges from %p to %p\n", str , str+255*MB);
       printf("partition 1 block A ranges from %p to %p\n", str+256*MB,str+(256+255)*MB);
       printf("partition 2 block B ranges from %p to %p\n", str+(256+256)*MB,str+(256+256+255)*MB);
       printf("partition 2  block A ranges from %p to %p\n", str+(256+256+256)*MB,str+(256+256+256+255)*MB);
       printf("Enter the adress:\n");
       scanf("%x",&x);


      if((x>=0x00000000)&&(x<=str+(256+256+256+255)*MB))
        {
                if(x<=str+255*MB)
                        printf("Part-1-B\n");
                else if(x<=(str+(256+255)*MB))
                        printf("part-1-A\n");
                else if(x<=(str+(256+256+255)*MB))
                        printf("part-2-B\n");
                else
                        printf("part-2-A\n");
        }
	else
                printf("Invalid input\n");
}

*/



































