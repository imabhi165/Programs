#include<stdio.h>
void swap(int *x ,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
  int a,b;
  a=10;
  b=5;
   printf("original Number : \na = %d\nb = %d\n",a,b);    
  swap(&a,&b);
  printf("After Swapping : \na = %d\nb = %d",a,b);    
     
    return 0;

}