#include <stdio.h>
    
  int bitwise_multiply(int x, int y) 
    { 
	    if (x<0 && y<0)
		{
		 x=x*(-1);
		 y=y*(-1);
		}
		 if (x>0 && y<0)
		{
		 x=x*(-1);
		 y=y*(-1);
		}
        int result = 0;   
        while (y > 0) 
        { 
             if ((y & 1) != 0) 
                 result = result + x; 
            x = x << 1; 
            y = y >> 1; 
        } 
        return result; 
    } 
 int main(void)
    {   
     //int x = 12;
	 //int y = 55	       ;
	 int x = 10;	  
	 int y = 20;      ;
     printf("Product of %d and %d using bitwise operators is: %d",x,y,bitwise_multiply(x, y)); 	
	 return 0;        
   }

