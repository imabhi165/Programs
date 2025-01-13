#include<stdio.h>
// void main() {
//     char name[30];
//     printf("Enter Name: ");
//     // gets(name);
//     // scanf("%s",name);
//     // scanf("%[^\n]s",name);
//     printf("Name is : %s",name); 
// }

void main() {
    int code;
    int name[30];
    printf("Enter code: ");
    scanf("%d",&code);
    fflush(stdin);
    printf("Enter name : ");
    gets(name);
    printf("Code is : %d\n",code);
    printf("Name is : %s\n",name);
}