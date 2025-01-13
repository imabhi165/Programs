#include<stdio.h>
void main() {
    int choice, n;
    printf("1. Buzz Number\n");
    printf("2. Leap Year\n");
    printf("Enter Your Choice [1-2] : ");
    scanf("%d",&choice);
   
    switch(choice){
        case 1:
          fflush(stdin);
          printf("Enter a Number : ");
          scanf("%d",&n);
          if(n%7==0 || n%10==7){
            printf("%d is a Buzz Number",n);
          }
          else
             printf("Not a Buzz Number");
         break;
         case 2:
         fflush(stdin);
         printf("Enter Year : ");
         scanf("d",&n);
         if(n%400==0 || n%100!=0 && n%4==0){
            printf("%d is a leap year",n);
         }
         else{
            printf("%d is not a leap year",n);
         }
         break;
    }
    
}