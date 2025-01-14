#include<stdio.h>

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int ncr(int x,int y){
return fact(x)/(fact(x-y)*fact(y));
}
void main(){
    int n,r;
    printf("Enter value N : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=i;j++)
      {
        int icj = ncr(i,j);
        printf("%d ",icj);
      }
      printf("\n");
    }
    // printf("Ncr is : %d",ncr(n,r));



}