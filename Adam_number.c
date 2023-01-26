#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=n;
    int g=n*n;
    int s=0;
    while (k>0){
        int d=k%10;
        s=s*10+d;
        k=k/10;
    }
    int i=s*s;
    int h=0;
    while (i>0){
        int r=i%10;
        h=h*10+r;
        i=i/10;
 }
    if(g==h)
    printf("True");
    else
    printf("False");
}
