#include<stdio.h>
int main(){
    int t1=0;
    int t2=1;
    int nextterm;
    int n;
    scanf("%d",&n);
    bool x=true;
    int i;
    for (i=2;i<=n;i++){
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    
    if(n==nextterm){
    x=true;
    break;}
    else{
        x=false;
    }
    
    }
    if(x==true)
    printf("True");
    else
    printf("False");   
}
