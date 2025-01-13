#include <stdio.h>
#include <math.h>

#define MAX_POINTS 100 

int main() {
    int N;

    // Input number of points
    printf("Enter the number of points (N): ");
    scanf("%d", &N);

    if (N > MAX_POINTS) {
        printf("Error: Maximum number of points is %d\n", MAX_POINTS);
        return 1;
    }


    float X_real[MAX_POINTS];
    float X_imag[MAX_POINTS];

    printf("Enter the real and imaginary parts of X[k]:\n");
    for (int k = 0; k < N; k++) {
        printf("X[%d] (real imaginary): ", k);
        scanf("%f %f", &X_real[k], &X_imag[k]);
    }
    float x[MAX_POINTS];

    for (int n = 0; n < N; n++) {
        x[n] = 0.0; // Initialize output sample
        for (int k = 0; k < N; k++) {
            float angle = 2 * 3.14 * k * n / N; 
            x[n] += (X_real[k] * cos(angle) - X_imag[k] * sin(angle)); 
        }
        x[n] /= N; 
    }

    printf("Time-domain signal x[n]:\n");
    for (int n = 0; n < N; n++) {
        printf("x[%d] = %.4f\n", n, x[n]);
    }

    return 0;
}