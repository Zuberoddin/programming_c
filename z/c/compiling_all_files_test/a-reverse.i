# 0 "reverse.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "reverse.c"
int reverse_integer(int num)
{
 int sum=0,temp,rem;

 temp=num;
 while(temp!=0)
 {

  rem=temp%10;

  temp=temp/10;
  sum=sum*10+rem;

 }
 return sum;
}
