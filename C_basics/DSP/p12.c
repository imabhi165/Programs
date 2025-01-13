#include <stdio.h>

// Define a structure for complex numbers
typedef struct {
    double real;
    double imag;
} Complex;

int main() {
    // Input values
    Complex x1 = {2.0, 3.0}; // x1 = 2 + 3i
    Complex x2 = {4.0, 6.0}; // x2 = 4 + 6i

    // Twiddle factor W
    Complex W = {0.25, -0.75}; // W = 0.25 - 0.75j

    // Calculate new values for X1' and X2' using the butterfly operation
    Complex X1_prime, X2_prime;

    // X1' = X1 + W * X2
    X1_prime.real = x1.real + (W.real * x2.real - W.imag * x2.imag);
    X1_prime.imag = x1.imag + (W.real * x2.imag + W.imag * x2.real);

    // X2' = X1 - W * X2
    X2_prime.real = x1.real - (W.real * x2.real - W.imag * x2.imag);
    X2_prime.imag = x1.imag - (W.real * x2.imag + W.imag * x2.real);

    // Print the results
    printf("X1' = %.2f + %.2fi\n", X1_prime.real, X1_prime.imag);
    printf("X2' = %.2f + %.2fi\n", X2_prime.real, X2_prime.imag);

    return 0;
}