#include<stdio.h>
int main() {
    char name[30];
    int age;
    printf("Enter name : ");
    gets(name);
    fflush(stdin);
    printf("Enter Age : ");
    scanf("%d",&age);
   
    if(age>=18){
        printf("%s You are Eligible to Vote",name);
    }
    else{
        printf("%s You need to complete your age more than or equal to 18",name);
    }
}