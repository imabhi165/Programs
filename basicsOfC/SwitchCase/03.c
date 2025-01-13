#include<stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter your Choice : \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    printf("Enter Num1: ");
    scanf("%f", &num1);
    printf("Enter Num2: ");
    scanf("%f", &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Sum of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Product of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Division of %.2f by %.2f is %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid Input. Please choose a valid option.\n");
    }

    return 0;
}
