#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
 int random,guess;
 int num_ofguess = 0;
 
 srand(time(NULL));

 random = rand() % 100 + 1;


  printf("Welcome to World of Guessing Numbers\n");
  printf("----------------------------------------------------------------------------------------------------\n");
  do{
   printf("Please! Enter your Guess between(1 to 100) : ");
   scanf("%d",&guess);
   num_ofguess++;
   printf("\n------------------------------------------------------------------------------------------------------\n");
   if(guess<random){
     printf("Guess a Larger Number.\n");
     printf("-----------------------------------------------------------------------------------------------------\n");
   }
   else if(guess>random){
     printf("Guess a Smaller Number.\n");
     printf("----------------------------------------------------------------------------------------------------\n");
  }
   else {
        printf("Congratulations!!! You have Successfully Achieved the Guessed Number in %d attemps\n",num_ofguess);

    }

  } while(guess!=random);
  printf("----------------------------------------------------------------------------------------------------------\n");

    
}