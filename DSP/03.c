#include <stdio.h>

void IIRFilter(float x[], float y[], float b[], float a[], int n, int M, int N) {
    for (int i = 0; i < n; i++) {
        y[i] = 0;
        
        // Feedforward part: sum of input signal times coefficients
        for (int j = 0; j < M; j++) {
            if (i - j >= 0) {
                y[i] += b[j] * x[i - j]; // x[n-j] is the input signal
            }
        }
        
        // Feedback part: sum of previous outputs times coefficients
        for (int k = 1; k < N; k++) {
            if (i - k >= 0) {
                y[i] -= a[k] * y[i - k]; // y[n-k] is the previous output
            }
        }
    }
}

int main() {
    int n, M, N;

    // Read the size of the input signal (n), number of feedforward taps (M), and feedback taps (N)
    printf("Enter the number of feedforward coefficients (M): ");
    scanf("%d", &M);

    printf("Enter the number of feedback coefficients (N): ");
    scanf("%d", &N);

    printf("Enter the size of input signal (n): ");
    scanf("%d", &n);

    // Declare arrays for the input signal and the output signal
    float x[n], y[n];
    
    // Coefficients for the IIR filter
    float b[M], a[N];

    // Read input signal
    printf("Enter the input signal (x[n]):\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    // Read feedforward coefficients (b)
    printf("Enter the feedforward coefficients (b):\n");
    for (int i = 0; i < M; i++) {
        scanf("%f", &b[i]);
    }

    // Read feedback coefficients (a)
    printf("Enter the feedback coefficients (a):\n");
    for (int i = 1; i < N; i++) {
        scanf("%f", &a[i]);  // a[0] is typically 1 (no feedback for the zero-th coefficient)
    }

    // Apply the IIR filter
    IIRFilter(x, y, b, a, n, M, N);

    // Print the output signal
    printf("Output signal (y[n]):\n");
    for (int i = 0; i < n; i++) {
        printf("y[%d] = %f\n", i, y[i]);
    }

    return 0;
}
