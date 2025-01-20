#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Define a structure for complex numbers
typedef struct {
    double real;
    double imag;
} Complex;

// Function Prototypes
void radix2_fft(Complex *x, int n);
Complex complex_add(Complex a, Complex b);
Complex complex_sub(Complex a, Complex b);
Complex complex_mul(Complex a, Complex b);
void print_fft_result(Complex *x, int n);

int main() {
    int n;

    // Choose FFT size: 4-point or 8-point
    printf("Enter the number of points for FFT (4 or 8): ");
    scanf("%d", &n);

    if (n != 4 && n != 8) {
        printf("Error: Only 4- and 8-point FFTs are supported.\n");
        return -1;
    }

    // Input complex numbers
    Complex x[n];
    printf("Enter the real and imaginary parts of the input data:\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] (real imag): ", i);
        scanf("%lf %lf", &x[i].real, &x[i].imag);
    }

    // Perform FFT
    radix2_fft(x, n);

    // Display the results
    printf("\nFFT Results:\n");
    print_fft_result(x, n);

    return 0;
}

// Function to perform radix-2 FFT
void radix2_fft(Complex *x, int n) {
    int stages = log2(n); // Number of stages
    int half, k, j, step;
    Complex w, temp;

    // Bit-reverse the input array
    for (int i = 0; i < n; i++) {
        int reversed = 0, temp = i;
        for (int j = 0; j < stages; j++) {
            reversed = (reversed << 1) | (temp & 1);
            temp >>= 1;
        }
        if (reversed > i) {
            Complex temp = x[i];
            x[i] = x[reversed];
            x[reversed] = temp;
        }
    }

    // Radix-2 FFT algorithm
    for (int stage = 1; stage <= stages; stage++) {
        step = pow(2, stage);      // Step size
        half = step / 2;           // Half step size
        for (k = 0; k < n; k += step) {
            for (j = 0; j < half; j++) {
                double angle = -2.0 * PI * j / step;
                w.real = cos(angle);
                w.imag = sin(angle);
                temp = complex_mul(w, x[k + j + half]);
                x[k + j + half] = complex_sub(x[k + j], temp);
                x[k + j] = complex_add(x[k + j], temp);
            }
        }
    }
}

// Helper function to add two complex numbers
Complex complex_add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Helper function to subtract two complex numbers
Complex complex_sub(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Helper function to multiply two complex numbers
Complex complex_mul(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// Function to print FFT results
void print_fft_result(Complex *x, int n) {
    for (int i = 0; i < n; i++) {
        printf("X[%d] = %.4f + %.4fj\n", i, x[i].real, x[i].imag);
    }
}
