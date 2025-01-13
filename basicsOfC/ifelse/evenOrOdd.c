#include<stdio.h>
int main() {
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    fflush(stdin);
    if(number%2==0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
return 0;
}
