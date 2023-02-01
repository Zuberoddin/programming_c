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

