#include <stdio.h>

int main() {
    // Coefficients
    double b[] = {1, 1, 1};       // Feedforward coefficients (b0, b1, b2)
    double a[] = {1, -1, -1};     // Feedback coefficients (a0=1, a1, a2)

    // Input signal
    double input[] = {1, 2, 2, 1};
    int input_length = sizeof(input) / sizeof(input[0]);

    // Output signal buffer
    double output[input_length];

    // Input and output delay buffers (initialized to 0)
    double x_delay[3] = {0, 0, 0}; // Delays for input
    double y_delay[3] = {0, 0, 0}; // Delays for output

    for (int n = 0; n < input_length; n++) {
        // Shift input delays
        x_delay[2] = x_delay[1];
        x_delay[1] = x_delay[0];
        x_delay[0] = input[n];

        // Compute output using the difference equation
        output[n] = b[0] * x_delay[0] + b[1] * x_delay[1] + b[2] * x_delay[2]
                    - a[1] * y_delay[1] - a[2] * y_delay[2];

        // Shift output delays
        y_delay[2] = y_delay[1];
        y_delay[1] = output[n];
    }

    // Print the output signal
    printf("Output Signal (Direct Form I):\n");
    for (int i = 0; i < input_length; i++) {
        printf("%.2f ", output[i]);
    }
    printf("\n");

    return 0;
}

