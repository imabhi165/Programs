#include<stdio.h>
void sort(int *a,int s){
    int i,j,t;
    for(i=0;i<s;i++) {
        for(j=0;j<s-1-i;j++){
            if(*(a+j) > *(a+j+1)){
                t=*(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = t;
            }
        }
    }
}
int main() {
    int n;
    printf("Enter Length of an Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter valus of an Array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("Values After sorting : \n");
    for(int i=0;i<n;i++){
       printf("%d,",arr[i]);
    } 
}