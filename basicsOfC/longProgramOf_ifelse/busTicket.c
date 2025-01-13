#include<stdio.h>
int main() {
    char name[30];
    int age,distance,fare;
    printf("Enter Name : ");
    gets(name);
    fflush(stdin);
    printf("Enter age : ");
    scanf("%d",&age);
    fflush(stdin);
    printf("Enter Distance : ");
    scanf("%d",&distance);
    fflush(stdin);
    if(distance<=200)
      fare = 400;
    else if(distance<=500)
      fare = 750;
    else if(distance <=800)
      fare = 1050;
    else 
     fare = 1200;
    if(age<10 || age >60)
     fare /=2;
     printf("Fare Amount is : %d\n",fare);

}