#include<stdio.h>
int main() {
   int n,i,j,z=1;
   printf("Enter value : ");
   scanf("%d",&n);
   for(i=1,j=1;j<=n;j++,i+=2){
   printf("%d , ",i*z);
   z*=-1;
   }
    








    return 0;
}