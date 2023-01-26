#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int n1;
    n1=64+n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("%c ",char(n1));
        }
        printf("
");
        n1=n1-1;
    }
}