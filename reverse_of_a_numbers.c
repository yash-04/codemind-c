#include<stdio.h>
int main(){
    
    int n,s=0;
    scanf("%d",&n);
    int k=n;
    while (k>0){
        int d=k%10;
        s=s*10+d;
        k=k/10;
        
    }
    printf("%d",s);
}
