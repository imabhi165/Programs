#include<stdio.h>
int checkOddEven(int x){
if(x%2==0)
 printf("Even");
else 
 printf("Odd Number");

}
int main() {
    int n;
    printf("Enter a Value: ");
    scanf("%d",&n);
    checkOddEven(n);
} 