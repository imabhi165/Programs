#include<stdio.h>
int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    if(n%7==0 || n %10==0){
        printf("%d is a Buzz Number",n);
    }
    else{
        printf("%d is not a Buzz Number",n);
    }
}