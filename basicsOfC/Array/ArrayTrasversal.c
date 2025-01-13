#include<stdio.h>
int main() {
    int n;
    printf("Enter No of Array Elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d,",&arr[i]);
    }
    printf("Entered Array Elements is :\n");
    for(int i=0;i<n;i++){
         printf("%d,",arr[i]);

    }
   
}