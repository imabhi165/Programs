// WAP to input a number and check whether it is prime or not

#include<stdio.h>
int main() {
    /* 
    int i,n,c;
    printf("Enter a Number : ");
    scanf("%d",&n);
    i=1;
    c=0;
    prime :
      if(n%i==0)
       c++;
    i++;
    if(i<=n)
     goto prime;
    if(c==2)
     printf("Prime Number");
    else
     printf("Not a Prime Number");
     */

    int n,i,flag;
    printf("Enter a Number : ");
    scanf("%d",&n);
    flag =1;
    i=2;
    prime :
     if(n%i==0)
      flag=0;
    i++;
    if(i<=n/2)
     goto prime;
    if(flag ==1)
     printf("Prime");
    else
     printf("Not a Prime Number");
}