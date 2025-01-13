#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Define a struct to represent complex numbers
typedef struct {
    double real;
    double imag;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// Function to compute the twiddle factor W_N^k
Complex computeTwiddleFactor(int N, int k) {
    Complex W;
    W.real = cos(2 * PI * k / N);
    W.imag = -sin(2 * PI * k / N);
    return W;
}

// Function to reverse bits for bit-reversal permutation
int reverseBits(int num, int log2n) {
    int result = 0;
    for (int i = 0; i < log2n; i++) {
        result <<= 1;
        result |= (num & 1);
        num >>= 1;
    }
    return result;
}

// Bit-reversal permutation for input array
void bitReversal(Complex *x, int N) {
    int log2n = log2(N);
    for (int i = 0; i < N; i++) {
        int j = reverseBits(i, log2n);
        if (j > i) {
            Complex temp = x[i];
            x[i] = x[j];
            x[j] = temp;
        }
    }
}

// Radix-2 FFT implementation with bit-reversal
void radix2FFT(Complex *x, int N) {
    bitReversal(x, N);  // Perform bit-reversal on the input array

    int stages = log2(N);
    for (int stage = 1; stage <= stages; stage++) {
        int M = 1 << stage;  // Current FFT size (2, 4, 8, ...)
        int halfM = M / 2;   // Half the current FFT size
        for (int k = 0; k < halfM; k++) {
            Complex W = computeTwiddleFactor(M, k);
            for (int j = k; j < N; j += M) {
                Complex t = multiplyComplex(W, x[j + halfM]);
                Complex u = x[j];
                x[j] = addComplex(u, t);            // Butterfly addition
                x[j + halfM] = subtractComplex(u, t);  // Butterfly subtraction
            }
        }
    }
}

// Helper function to print complex numbers
void printComplexArray(Complex *x, int N) {
    for (int i = 0; i < N; i++) {
        printf("X[%d] = %.2f + %.2fi\n", i, x[i].real, x[i].imag);
    }
}

int main() {
    // Define input data for 4-point FFT
    Complex x4[4] = {{1.0, 0.0}, {2.0, 0.0}, {3.0, 0.0}, {4.0, 0.0}};
    printf("4-Point FFT Input:\n");
    printComplexArray(x4, 4);

    // Perform 4-point FFT
    radix2FFT(x4, 4);
    printf("\n4-Point FFT Output:\n");
    printComplexArray(x4, 4);

    // Define input data for 8-point FFT
    Complex x8[8] = {{1.0, 0.0}, {1.0, 0.0}, {1.0, 0.0}, {1.0, 0.0},
                     {0.0, 0.0}, {0.0, 0.0}, {0.0, 0.0}, {0.0, 0.0}};
    printf("\n8-Point FFT Input:\n");
    printComplexArray(x8, 8);

    // Perform 8-point FFT
    radix2FFT(x8, 8);
    printf("\n8-Point FFT Output:\n");
    printComplexArray(x8, 8);

    return 0;
}

