#include <stdio.h>

void main() {
    int n, g, s;
    int choice;

    // Input size of the array
    printf("Enter the size of the array (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size. Exiting program.\n");
        return;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\n---------------------------------------------------\n");
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n---------------------------------------------------\n");

    // Initialize `g` and `s` with the first element of the array
    g = arr[0];
    s = arr[0];

    // Find the greatest and smallest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > g) {
            g = arr[i];
        }
        if (arr[i] < s) {
            s = arr[i];
        }
    }

    // Prompt the user for their choice
    printf("Please enter your choice:\n1. Find the greatest element\n2. Find the smallest element\n");
    scanf("%d", &choice);

    // Perform actions based on the user's choice
    switch (choice) {
        case 1:
            printf("---------------------------------------------------\n");
            printf("The greatest element in the array is: %d\n", g);
            break;
        case 2:
            printf("The smallest element in the array is: %d\n", s);
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }
}
