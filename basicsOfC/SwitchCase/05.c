#include<stdio.h>
void  main() {
    int choice;
    float area,side;
    float length, breadth,areaR;
    float base,height,areaT;
    printf("Enter Choice : ");
    printf("\n1.Area of Circle : \n");
    printf("2.Area of Rectangle : \n");
    printf("3.Area of Triangle : \n");
    scanf("%d",&choice);
    switch(choice){
     case 1: 
    
        printf("Enter Side: ");
        scanf("%f",&side);
        area = side * side;
        printf("The Area of the Circle is : %.2f",area);
       break;
    
     case 2:
       printf("Enter Length : ");
       scanf("%f",&length);
       printf("Enter Breadth: ");
       scanf("%f",&breadth);
       areaR = length*breadth;
       printf("Area of Rectangle is : %.2f",areaR);
       break;

     case 3:
       printf("Enter the Base of Triangle : ");
       scanf("%f",&base);
       printf("Enter height of Triangle : ");
       scanf("%f",&height);
       areaT = .5*base*height;
       printf("Area of Triangle is %.2f",areaT);
       break;

     default :
        printf("Enter Valid Input");
    }  

}