//WAP to take input from user and then find its factorial

#include<stdio.h>
int main() {
    int n,i=1,f=1;
    printf("Enter Value: ");
    scanf("%d",&n);
    factorial :
      f= f*i;
       i++;
    if(i<=n)
      goto factorial;
    printf("factorial is %d",f);
    

}