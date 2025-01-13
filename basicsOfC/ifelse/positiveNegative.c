#include<stdio.h>
int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    if(n>0){
        printf("Number is Positive");
    }
    else if(n==0){
        printf("Number is Zero");
    }
    else {
        printf("Number is Negative");
    }
}