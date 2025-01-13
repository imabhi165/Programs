#include <stdio.h>

#define INPUT_LENGTH 4 // Length of input signal

int main() {
    // Input signal
    double x[INPUT_LENGTH] = {1, -1, 1, 1};
    // Output signal
    double y[INPUT_LENGTH + 1]; // +1 to accommodate y[-1]
    
    // Initial conditions
    double x_prev = 3; // x[-1]
    double y_prev = 4; // y[-1]

    // Calculate output for each input sample
    for (int n = 0; n < INPUT_LENGTH; n++) {
        y[n] = 0.5 * x[n] + (2.0 / 5.0) * y_prev + 1.5 * x_prev;

        // Update previous values for next iteration
        x_prev = x[n]; // Update x[n-1]
        y_prev = y[n]; // Update y[n-1]
    }

    // Print output results
    printf("Output signal y(n):\n");
    for (int i = 0; i < INPUT_LENGTH; i++) {
        printf("y[%d] = %.2f\n", i, y[i]);
    }

    return 0;
}
