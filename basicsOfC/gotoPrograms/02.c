//WAP to print all od number from 1 to 20 using goto statement

#include<stdio.h>
int main() {
    int i=1;
    abc:
      printf("%d\n",i);
      i+=2;
    if(i<=20)
      goto abc;
     
      
}