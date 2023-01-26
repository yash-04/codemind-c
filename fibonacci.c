#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a = 0;
  int b = 1;
  int temp = 0;
 
  printf("%d %d ",a,b);
  temp = a+b;
  int i ;
  for (i =2;i<n;i++){
    temp = a+b;
    printf("%d ",temp);
    a = b;
    b = temp;
    
}
    return 0;
}