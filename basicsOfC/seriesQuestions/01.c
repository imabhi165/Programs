#include<Stdio.h>
int main( ){
int n;
printf("Enter Value: ");
scanf("%d",&n);
for(int i=1;i<n;i++) {
    printf("%d ,",i*i);
}

    return 0;
}