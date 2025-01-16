/*
#include<stdio.h>
int main() {
  /* 
    int a =5;
    int *p1, **p2;
    p1 = &a;
    p2 = &p1;
    printf("%x\n",&a);
    printf("%x\n",p1);
    printf("%d\n",*p1); 
    printf("%d\n",**p2);
*/
/* 
int arr[5] = {1,2,3,4,5};
int *p = arr;
int i;
printf("Printing Array elements: \n");
for(i=0;i<5;i++){
    // printf("%d\n",*(p+i));
    printf("%d\n",*(p+i));
}
*/


/*
    int x = 10;    // A normal integer variable
    int *ptr = &x; // Pointer variable that stores the address of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr); // Dereferencing





*/




#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory
    *ptr = 42; // Assign value

    printf("Value stored in dynamically allocated memory: %d\n", *ptr);

    free(ptr); // Free the memory
    return 0;
}
