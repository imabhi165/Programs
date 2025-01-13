//WAP to taka a inout from user and print its table

#include<stdio.h>
int main() {
    int n,i=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    table:
      printf("%d\n",i*n);
      i++;
    if(i<=10)
      goto table;
}