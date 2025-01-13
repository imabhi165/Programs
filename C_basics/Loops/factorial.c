#include<stdio.h>
int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
  int c =1;
    for(int i=n;i>=1;i--){
        c = c*i;
  //printf("\n factorial is : %d",c);
      }
     printf("Factorial is : %d",c);
  }
