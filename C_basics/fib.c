#include<stdio.h>
int fib(int n){
    if(n==0) return 0;
    else if(n==1)c return 1;
    else return fin(n-1) + fin(n-2);
  }
  int n;
  printf("Enter the input : ");
  scanf("%d",&n);
  printf("Fib series is: ");
  for(int i =0;i<n;i++){
      printf("%d",fib(i));
      fib(i);
    }
