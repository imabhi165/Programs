#include<stdio.h>
#include<stdlib.h>
void memoryLeak(){
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    printf("Value is : %d\n",*ptr);

}
int main() {
memoryLeak();
printf("Memory Allocated but it is not free\n");

}