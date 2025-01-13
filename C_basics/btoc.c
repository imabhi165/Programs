#include <stdio.h>

void decToBinary(int n) {
    int binaryNum[32]; // Array to store binary digits
    int i = 0;

    // Convert decimal to binary
    while (n > 0) {
        binaryNum[i] = n % 2; 
        n = n / 2;             
        i++;
    }

    // Print binary array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decToBinary(decimal);

    return 0;
}
