#include<stdio.h>
void main() {
    int i = 1;
    abc :
      printf("%d\n",i);
      i++;
      if(i<=10)
       goto abc;
}