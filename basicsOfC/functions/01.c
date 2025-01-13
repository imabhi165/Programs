

#include<stdio.h>
int add(int a, int b){ 
    return a + b; //here a and b is paas by reference ;
}
int main() {
    int x,y;
    printf("Enter First Number : ");
    scanf("%d",&x); //here &x is the address of int type x
    printf("Enter Second Number : ");
    scanf("%d",&y);
    printf("Sum is : %d\n",add(x,y));  //here add(x,y) is function call where x and y is int type and pass by value

}


