#include <stdio.h>

#define N 4 // Length of input sequence

int main() {
    // Input sequence
    double x[N] = {1, 0, -1, 2};
    // Output sequence
    double y[N] = {0};
    
    // Coefficients
    double b[] = {1.5, 2.0, 2.5};
    double a[] = {0.5, 1.5};
    
    // Calculate output using the difference equation
    for (int n = 0; n < N; n++) {
        // Contribution from input terms
        for (int k = 0; k <= 2; k++) {
            if (n - k >= 0) {
                y[n] += b[k] * x[n - k];
            }
        }
        // Contribution from output terms
        for (int k = 1; k <= 2; k++) {
            if (n - k >= 0) {
                y[n] += a[k - 1] * y[n - k];
            }
        }
    }
    
    // Print output sequence
    printf("Output sequence y(n):\n");
    for (int i = 0; i < N; i++) {
        printf("y(%d) = %.4f\n", i, y[i]);
    }
    
    return 0;
}
