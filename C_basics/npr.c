#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (r > n) {
        printf("Error: r cannot be greater than n\n");
    } else {
        printf("nPr = %ld\n", nPr(n, r));
    }

    return 0;
}

