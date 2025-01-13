#include<stdio.h>
void main (){
int unit,bill;
int choice;
printf("1.Domestic Bill\n");
printf("2.Commercial Bill\n");
printf("3.Industrial Bill\n");
printf("Enter choice : ");
scanf("%d",&choice);
printf("Enter Unit : ");
scanf("%d",&unit);

switch(choice){
    case 1:
     bill = unit * 5;
     printf("Domestic Bill is : %d",bill);
     break;

     case 2:
     bill = unit * 10;
    //  printf("Enter Unit : ");
    //  scanf("%d",&unit);

     printf("Commercial Bill is : %d",bill);
     break;

      case 3:
     bill = unit * 15;
    //  printf("Enter Unit : ");
    //  scanf("%d",&unit);

     printf("Industrial Bill is : %d",bill);
     break;
     default :
      printf("Invalid Input");
     

}

}