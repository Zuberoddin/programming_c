#include <stdio.h>
#include <string.h>

//function declartions
 void search_string();

 //global variables
 int n = 0,times = 0,m=0;

void main()
 {
  
    search_string();
 }
 
 // function defination
 
 void search_string()
 {
  char s1[] = "welcome To";
  char s2[] = "To";
   int len = strlen(s2);     // contains the length of search string
   while(s1[n] != '\0') 
   {

      if(s1[n] == s2[m])    // if first character of search string matches
      {     
	  while(s1[n] == s2[m]  && s1[n] !='\0') 
		  {
		    n++;
		    m++;
         	}

        
        	 if(m == len && (s1[n] == ' ' || s1[n] == '\0')) 
         	{
         
           	 times++;
         	}
      }
     else           // if first character of search string DOES NOT match
     {                
         while(s1[n] != ' ') 
		 {        
		    n++;
		    if(s1[n] == '\0')
		    break;
		 }
      }
		
      n++;
      m=0;  // reset the counter to start from first character of the search string.
   }

   if(times > 0)
    {
      printf("'%s' appears %d times\n", s2, times);
   } else 
   {
      printf("'%s' does not appear in the sentence.\n", s2);
   }

  
}
