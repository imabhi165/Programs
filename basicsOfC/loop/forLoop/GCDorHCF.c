#include<stdio.h>
void main() {
    int n1,n2,n;
    printf("Enter Two Numbers : \n");
    scanf("%d%d",&n1,&n2);
    n = (n1<n2) ? n1:n2;
    while(n>=1)
    {
     if(n1%n==0 && n2%n==0){
        break;
        n--;
     }
    }
    

    
    
}