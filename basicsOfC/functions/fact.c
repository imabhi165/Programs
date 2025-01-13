#include<stdio.h>
int fact(int x){
    int i,f =1;
    for(i=1;i<=x;i++ ){
        f = f*i;
    }
    return f;
    
}
int main() {
    int n;
    printf("Enter a Value : ");
    scanf("%d",&n);
    printf("Factorial is : %d ",fact(n));
}