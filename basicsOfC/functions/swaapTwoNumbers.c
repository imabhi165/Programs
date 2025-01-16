#include<stdio.h>
/*
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
    
}
*/

void swap(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return;
}

int main() {
int n1,n2;
printf("Enter Two Numbers : \n");
scanf("%d%d",&n1,&n2);

printf("Before Swapping the Value of a = %d and b = %d\n",n1,n2);

swap(&n1,&n2);

printf("After Swapping the Value of a = %d and b = %d\n",n1,n2);










return 0;
}