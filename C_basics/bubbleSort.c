#include<stdio.h>
int main(){
 int arr[5] = {36,75,95,45,4};
 printf("Before sorting : ");
 for(int i=0;i<5;i++){
   printf("arr[i] = %d",i,arr[i]);
 }
 int i,j,temp;
 for(i=0;i<4;i++){
   for(j=0;j<4-i;j++){
     if(arr[j] > arr[j+1]){
       temp = arr[j];
       arr[j] = arr[j+1];
       arr[j+1] =temp;
     }

   }
   for(i=0;i<5;i++){
printf("arr[%d] = %d",i,arr[i]);
 }
 }
}
