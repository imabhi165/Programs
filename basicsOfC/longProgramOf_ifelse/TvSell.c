#include<stdio.h>
int main() {
    char name[30];
    printf("Enter customer Name : ");
    gets(name);
    fflush(stdin);
    float cost,price,GstPrice,Discount;
    printf("Enter costs of tv is : ");
    scanf("%f",&cost);
    if(cost <=30000 && cost >=20000){
        printf("You will get 8percent Discout\n");
        price = cost * 8/100;
        Discount = cost - price;
        GstPrice = Discount + Discount*18/100;
        printf("The normal price of tv is : %f\n",cost);
        printf("After Discount Price of tv is : %f\n",Discount);
        printf("After Gst Include,Price of tv is : %f\n",GstPrice);
    }
    else if(cost<=40000 && cost>=30000){
        printf("You will get 12 per discout\n");
         price = cost * 12/100;
         Discount = cost - price;
         GstPrice = Discount + Discount*18/100;
         printf("The normal price of tv is %f\n",cost);
         printf("After Discount Price of tv is %f\n",Discount);
         printf("After Gst Include,Price of tv is %f\n",GstPrice);
    }
    else if(cost<=60000 && cost>=40000){
        printf("You will get 20per discout\n");
         price = cost * 20/100;
         Discount = cost - price;
         GstPrice = Discount + Discount*18/100;
         printf("The normal price of tv is : %.2f\n",cost);
         printf("After Discount Price of tv is : %.2f\n",Discount);
         printf("After Gst Include,Price of tv is : %.2f\n",GstPrice);
    }
     else if(cost>60000) {
        printf("You will get 24per discout\n");
         price = cost * 24/100;
        Discount = cost - price;
         GstPrice = Discount + Discount*18/100;
         printf("The normal price of tv is %f\n",cost);
         printf("After Discount Price of tv is %f\n",Discount);
         printf("After Gst Include,Price of tv is %f\n",GstPrice);
    }
}