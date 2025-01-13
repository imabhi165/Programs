#include<stdio.h>
#include<math.h>
int main() {
    int n,i,flag=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i<sqrt(n);i++){
        if(i*(i+1)==n){
         flag = 1;
         break;
        }
    }
    if(flag==1)
     printf("Pronic Number");
    else
     printf("Not a Pronic Number");
}