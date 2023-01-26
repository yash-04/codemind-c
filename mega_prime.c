#include<stdio.h>
bool isprime(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool isdigitprime(int n)
{
    int temp=n,digit;
    while(temp)
    {
        digit=temp%10;
        if(digit!=2&&digit!=3&&digit!=5&&digit!=7)
        {
            return false;
        }
        temp=temp/10;
    }
    return true;
}
bool isfullprime(int n)
{
    return(isdigitprime(n)&&isprime(n));
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isfullprime(n))
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}
