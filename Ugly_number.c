#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("Ugly Number");
    }
    else
    {
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else if(n%3==0)
            {
                n=n/3;
            }
            else if(n%5==0)
            {
                n=n/5;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Ugly Number");
        }
        else
        {
            printf("Not Ugly Number");
        }
    }
    return 0;
}