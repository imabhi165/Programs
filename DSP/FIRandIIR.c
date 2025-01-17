#include <stdio.h>

#define MAX_LENGTH 1000

// FIR Filter Function
void fir_filter(double input[], double output[], double h[], int N, int M) {
    // N is the length of input signal
    // M is the number of taps (filter order + 1)
    for (int n = 0; n < N; n++) {
        output[n] = 0.0;
        for (int k = 0; k < M; k++) {
            if (n - k >= 0) {
                output[n] += h[k] * input[n - k];
            }
        }
    }
}

// IIR Filter Function
void iir_filter(double input[], double output[], double b[], double a[], int N, int M, int P) {
    // N is the length of input signal
    // M is the number of feedforward taps (b array)
    // P is the number of feedback taps (a array)
    for (int n = 0; n < N; n++) {
        output[n] = 0.0;
        
        // Feedforward (b coefficients)
        for (int k = 0; k < M; k++) {
            if (n - k >= 0) {
                output[n] += b[k] * input[n - k];
            }
        }

        // Feedback (a coefficients)
        for (int k = 1; k < P; k++) {
            if (n - k >= 0) {
                output[n] -= a[k] * output[n - k];
            }
        }
    }
}

int main() {
    int N, M, P;

    // Get input signal length
    printf("Enter the length of the input signal: ");
    scanf("%d", &N);

    double input[MAX_LENGTH], output[MAX_LENGTH];
    double h[MAX_LENGTH], b[MAX_LENGTH], a[MAX_LENGTH];
    
    // Get the input signal values
    printf("Enter the input signal values:\n");
    for (int i = 0; i < N; i++) {
        printf("input[%d]: ", i);
        scanf("%lf", &input[i]);
    }

    // FIR Filter Design
    printf("Enter the number of FIR filter taps (M): ");
    scanf("%d", &M);
    printf("Enter the FIR filter coefficients (h[]):\n");
    for (int i = 0; i < M; i++) {
        printf("h[%d]: ", i);
        scanf("%lf", &h[i]);
    }
    
    // Apply FIR Filter
    fir_filter(input, output, h, N, M);
    printf("\nFIR Filter Output:\n");
    for (int i = 0; i < N; i++) {
        printf("output[%d] = %.2lf\n", i, output[i]);
    }

    // IIR Filter Design
    printf("\nEnter the number of IIR filter feedforward taps (M): ");
    scanf("%d", &M);
    printf("Enter the number of IIR filter feedback taps (P): ");
    scanf("%d", &P);

    // Get feedforward coefficients (b[]) for IIR
    printf("Enter the feedforward (b) coefficients:\n");
    for (int i = 0; i < M; i++) {
        printf("b[%d]: ", i);
        scanf("%lf", &b[i]);
    }

    // Get feedback coefficients (a[]) for IIR
    printf("Enter the feedback (a) coefficients (starting from a[1] to a[P-1]):\n");
    for (int i = 1; i < P; i++) {
        printf("a[%d]: ", i);
        scanf("%lf", &a[i]);
    }

    // Apply IIR Filter
    iir_filter(input, output, b, a, N, M, P);
    printf("\nIIR Filter Output:\n");
    for (int i = 0; i < N; i++) {
        printf("output[%d] = %.2lf\n", i, output[i]);
    }

    return 0;
}
