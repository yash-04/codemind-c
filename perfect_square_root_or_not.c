#include <stdio.h>
int main(){
    int n ,i;
    bool x =true;
    scanf("%d",&n);
    for(i=1;i<=(n/2)+1;i++){
        if (i*i==n){
        x=true;
        break;}
        else{
        x=false;}
        
    }
    if(x==true)
    printf("True");
    else
    printf("False");
    
}
