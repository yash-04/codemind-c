#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int hcf=1;
    int i;
    for (i=1;i<=n;i++){
        if (n%i==0 && m%i==0){
            hcf=i;
        }
    }
    printf("%d",hcf);
}
