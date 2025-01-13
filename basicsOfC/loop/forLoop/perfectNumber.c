#include<stdio.h>
int main(){
    int n,s,i;
    printf("Enter a Number : ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0)
          s+=i;
    }
    if(n==s)
      printf("Perfect Number");
    else
      printf("Not a Perfect Number");
}