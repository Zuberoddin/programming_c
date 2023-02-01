
//strings concatination
#include <stdio.h>  
void string_concatination(char *,char *);
char string1[20];     
char string2[20];       

int main()  
{  
	char *str1=string1;        
	char *str2=string2;  
	printf("Enter the first string\n");  
	scanf("%s",string1);  
	printf("Enter the second string\n");  
	scanf("%s", string2);
	int (*fptr)(str1,str2)=string_concatination;  
	fptr(str1,str2);
} 

//function defination
void string_concatination(char *str1,char *str2)
{

	int i=0,j=0;  
	while(string1[i]!='\0')  
	{  

		++str1;  
		i++;  
	}  
	while(string2[j]!='\0')  
	{  
		*str1=*str2;  
		str1++;  
		str2++;  
		j++;  
	}  
	printf("The concatenated string is %s\n",string1);        
}  
