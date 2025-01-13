#include<stdio.h>
int main() {
    char name[30];
    int salary,incomeTax;
    printf("Enter Name :");
    gets(name);
    fflush(stdin);
    printf("Enter Salary : ");
    scanf("%d",&salary);
    fflush(stdin);
    if(salary <=500000)
      incomeTax = 0;
    else if(salary <=1000000)
     incomeTax = salary * 20/100;
    else 
     incomeTax = 100000 + salary * 0.03;
     printf("Incometax paid by User is %d",incomeTax);
}