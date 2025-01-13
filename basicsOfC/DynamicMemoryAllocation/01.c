#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*sizeof(int));
   // ptr++;
   // printf("%d",*ptr);
   int* p = *ptr;
   for(int i=1;i<=n;i++){
    scanf("%d",&(*ptr));
     }

    return 0;
}