#include <stdio.h>

#define TAPS 4 // Number of filter coefficients
#define INPUT_LENGTH 4 // Length of input signal

int main() {
    // Filter coefficients (impulse response)
    double h[TAPS] = {1, -1, 0, 1};
    // Input signal
    double x[INPUT_LENGTH] = {1, 2, -1, 2};
    // Output signal
    double y[INPUT_LENGTH] = {0};

    // Perform FIR filtering
    for (int n = 0; n < INPUT_LENGTH; n++) {
        y[n] = 0; // Initialize output for current sample
        // Convolution operation
        for (int k = 0; k < TAPS; k++) {
            if (n - k >= 0) { // Ensure we don't access out-of-bounds
                y[n] += h[k] * x[n - k];
            }
        }
    }

    // Print output results
    printf("Output signal y(n):\n");
    for (int i = 0; i < INPUT_LENGTH; i++) {
        printf("y[%d] = %.2f\n", i, y[i]);
    }

    return 0;
}
