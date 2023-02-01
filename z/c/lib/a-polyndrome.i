# 0 "polyndrome.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "polyndrome.c"
int polyndrome_problem(int num3)
{
        int temp=0,sum=0,rem;
             temp=num3;
             sum=0;
             while(temp!=0)
             {
                     rem=temp%10;
                     temp=temp/10;
                     sum=sum*10+rem;
             }
                     if(sum==num3)
                     {
                             printf("It is a palindrome\n");
                     }
                     else
                     {
                             printf("It is not a palindrome\n");
                             }
             return sum;
}
