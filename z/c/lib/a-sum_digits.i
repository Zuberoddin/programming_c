# 0 "sum_digits.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "sum_digits.c"
int sum_digits(int num2)
{
        int temp=0,rem,sum=0;
             temp=num2;
             while(temp>0)
                     {
                     rem=temp%10;
                     temp=temp/10;
                     sum=sum+rem;
                      }
             return sum;
}
