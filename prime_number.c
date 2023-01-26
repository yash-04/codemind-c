
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact=0;
    int i;
    for(i=1;i<=n;i++){
    
        if (n%i==0)
            fact++;
            
    }
    if (fact==2)
    printf("prime");
    else
    printf("not a prime");
}

