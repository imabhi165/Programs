#include <stdio.h>

typedef struct {
    double real;  // Real part
    double imag;  // Imaginary part
} Complex;

// Function to perform the butterfly operation
Complex butterfly(Complex x1, Complex x2, Complex W) {
    Complex X1, X2;

    // Perform the butterfly operation
    X1.real = x1.real + (W.real * x2.real - W.imag * x2.imag);
    X1.imag = x1.imag + (W.real * x2.imag + W.imag * x2.real);
    
    X2.real = x1.real - (W.real * x2.real - W.imag * x2.imag);
    X2.imag = x1.imag - (W.real * x2.imag + W.imag * x2.real);

    // Print the output values
    printf("Output after butterfly operation:\n");
    printf("X1': %.2f + %.2fi\n", X1.real, X1.imag);
    printf("X2': %.2f + %.2fi\n", X2.real, X2.imag);

    return X1;  // Return the updated X1 value (X1′)
}

int main() {
    // Input values
    Complex x1 = {2.0, 3.0};  // x1 = 2 + 3i
    Complex x2 = {4.0, 6.0};  // x2 = 4 + 6i
    Complex W = {0.25, -0.75}; // Twiddle factor W = 0.25 - 0.75i

    // Print input values
    printf("Input:\n");
    printf("X1: %.2f + %.2fi\n", x1.real, x1.imag);
    printf("X2: %.2f + %.2fi\n", x2.real, x2.imag);
    printf("W: %.2f + %.2fi\n", W.real, W.imag);

    // Perform the butterfly operation and get updated X1
    Complex updatedX1 = butterfly(x1, x2, W);

    return 0;
}
