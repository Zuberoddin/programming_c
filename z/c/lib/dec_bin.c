int decimal_binary(int num1)
{
        int i=1,temp,sum=0,rem;
                temp=num1;
                while(temp!=0)
                {
                        rem=temp%2;
                        temp=temp/2;
                        sum=sum+i*rem;
                        i=i*10;
                }
                return sum;
}

