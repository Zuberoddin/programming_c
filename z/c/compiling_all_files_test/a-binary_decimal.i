# 0 "binary_decimal.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "binary_decimal.c"
int binary_decimal(int bin)
{
 int i=1,temp,sum=0,rem;
  temp=bin;
  while(temp!=0)
  {
   rem=temp%10;
   temp=temp/10;
   sum=sum+i*rem;
   i=i*2;
  }
  return sum;
}
