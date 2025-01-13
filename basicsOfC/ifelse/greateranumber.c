#include<stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter three Numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        printf("%d is greater",n1);
    }
    if(n2>n1 && n2>n3){
        printf("%d is greater than %d and %d",n2,n1,n3);
    }
    else{
        printf("%d is greater than %d and %d",n3,n1,n2);
    }
}