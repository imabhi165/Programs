#include<stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;        
}
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    swap(&a,&b);   
    printf("\na=%d b=%d",a,b);
    return 0;
}