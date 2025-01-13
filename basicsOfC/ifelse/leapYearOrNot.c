#include<stdio.h>
int main() {
    int year,n;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year % 100 == 0){
        n = 400;
    }
    else{
        n= 4;
    }
    if(year%n==0){
        printf("%d is leap year",year);    
        }
    else{
       printf("%d is non-leap Year",year);
      }
}
