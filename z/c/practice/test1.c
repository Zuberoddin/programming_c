#include<stdio.h>
main()
{
         unsigned int x=0xAABBCCDD;
         (x&(1<<3)==0)?printf("bit is 0\n"):printf("bit is 1\n");
         (x&(1<<5)==0)?printf("bit is 0\n"):printf("bit is 1\n");
}

