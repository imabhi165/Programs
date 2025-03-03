#include<stdio.h>
int main() {

int choice;
double a,b,sum,sub,mul,div;
printf("\n--------------------------------------------------\n");
printf("Enter Choice : ");
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
printf("--------------------------------------------------\n");
scanf("%d",&choice);

switch(choice) {
    case 1: 
      printf("Enter Two Numbers : ");
      scanf("%lf%lf",&a,&b);
      sum = a+b;
      printf("\n--------------------------------------------------\n");
      printf("Floating Addition of Two number is : %.2lf",sum);
      printf("\n--------------------------------------------------\n");
      break;
      
    case 2: 
      printf("Enter Two Numbers : ");
      scanf("%lf%lf",&a,&b);
      sub = a-b;
      printf("\n--------------------------------------------------\n");
      printf("Floating Difference of Two number is : %.2lf",sub);
      printf("\n--------------------------------------------------\n");
      break;
      
    case 3: 
      printf("Enter Two Numbers : ");
      scanf("%lf%lf",&a,&b);
     
      mul = a*b;
      printf("\n--------------------------------------------------\n");
      printf("Floating multiplication of Two number is : %.2lf",mul);
      printf("\n--------------------------------------------------\n");
      break;
      
    case 4: 
      printf("Enter Two Numbers : ");
      scanf("%lf%lf",&a,&b);
      div = a/b;
      printf("\n--------------------------------------------------\n");
      printf("Floating Division of Two number is : %.2lf",div);
      printf("\n--------------------------------------------------\n");
      break;
     
    default :
       printf("Invalid Input");
      
}

return 0;


}
