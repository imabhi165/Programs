#include<stdio.h>


int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f= f*i;
       
    }
     return f;
}

// this is function to find npr
int npr(int n,int r){
 return fact(n) / fact(n-r);
}

int ncr(int x,int y){
    return fact(x)/(fact(x-y)*fact(y));
}



int main() {
   
    int n,r,choice;
    printf("Enter your choice : \n-------------------------------------------------------------------------\n1.Want to find NPR: \n2.Want to find NCR: \n");
    printf("-------------------------------------------------------------------------\n");
    scanf("%d",&choice);
   
    printf("\n-------------------------------------------------------------------------\n");
    switch(choice){
        case 1:
         printf("Enter N : ");
         scanf("%d",&n);
         printf("Enter R : ");
         scanf("%d",&r);
         if(n>r)
         {
           printf("NPR is : %d",npr(n,r));
         }
         else 
         {
           printf("r should not be grater than n");
         }
         printf("\n-------------------------------------------------------------------------\n");
        break;
        case 2:
        printf("Enter N : ");
         scanf("%d",&n);
         printf("Enter R : ");
         scanf("%d",&r);
         if(n>r)
         {
          printf("NCR is : %d",ncr(n,r));
         }
         else 
         {
           printf("r should not be grater than n");
         }
         
          printf("\n-------------------------------------------------------------------------\n");
        break;
        default :
         printf("You Entered Wrong Entry");
         break;
    }
   
  
}