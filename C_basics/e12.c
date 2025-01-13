#include <stdio.h>

// Function to compute the output of the IIR filter
void iir_filter(double b[], double a[], double input[], double output[], int input_length, int order) {
    double w[order + 1]; // Internal state buffer for intermediate computations
    for (int i = 0; i <= order; i++) {
        w[i] = 0; // Initialize delay elements
    }

    for (int n = 0; n < input_length; n++) {
        // Compute intermediate value
        w[0] = input[n];
        for (int i = 1; i <= order; i++) {
            w[0] -= a[i] * w[i];
        }

        // Compute output using current and delayed w values
        output[n] = 0;
        for (int i = 0; i <= order; i++) {
            output[n] += b[i] * w[i];
        }

        // Update delay elements
        for (int i = order; i > 0; i--) {
            w[i] = w[i - 1];
        }
    }
}

int main() {
    // Coefficients
    double b[] = {1, 1, 1};       // Feedforward coefficients (b0, b1, b2)
    double a[] = {1, -1, -1};     // Feedback coefficients (a0=1, a1, a2)

    // Input signal
    double input[] = {1, 2, 2, 1};
    int input_length = sizeof(input) / sizeof(input[0]);

    // Output buffer
    double output[input_length];

    // Filter order (number of coefficients - 1)
    int order = 2;

    // Call the IIR filter function
    iir_filter(b, a, input, output, input_length, order);

    // Print the output signal
    printf("Output Signal:\n");
    for (int i = 0; i < input_length; i++) {
        printf("%.2f ", output[i]);
    }
    printf("\n");

    return 0;
}

