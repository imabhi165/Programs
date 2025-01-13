#include <stdio.h>
#include <math.h>

// Function prototype
void fft(float real[], float imag[], int n);

int main() {
    int N;
    printf("Enter Number of Points: ");
    scanf("%d", &N);

    float real[N], imag[N];
    printf("Enter Input signal (real parts): ");
    for (int i = 0; i < N; i++) {
        scanf("%f", &real[i]);
        imag[i] = 0; // Initialize imaginary parts to 0
    }

    // Call FFT function
    fft(real, imag, N);

    // Print FFT results
    printf("FFT result is:\n");
    for (int i = 0; i < N; i++) {
        printf("%f + j(%f)\n", real[i], imag[i]);
    }

    return 0;
}

void fft(float real[], float imag[], int n) {
    if (n <= 1) return; // Base case

    // Allocate arrays for even and odd parts
    float even_real[n / 2], even_imag[n / 2];
    float odd_real[n / 2], odd_imag[n / 2];

    // Split input data into even and odd indices
    for (int i = 0; i < n / 2; i++) {
        even_real[i] = real[i * 2];
        even_imag[i] = imag[i * 2];
        odd_real[i] = real[i * 2 + 1];
        odd_imag[i] = imag[i * 2 + 1];
    }

    // Recursive calls
    fft(even_real, even_imag, n / 2);
    fft(odd_real, odd_imag, n / 2);

    // Combine results
    for (int k = 0; k < n / 2; k++) {
        double angle = -2 * M_PI * k / n; // Use M_PI for better precision
        float X = cos(angle) * odd_real[k] - sin(angle) * odd_imag[k];
        float Y = sin(angle) * odd_real[k] + cos(angle) * odd_imag[k];

        real[k] = even_real[k] + X;
        imag[k] = even_imag[k] + Y;
        real[k + n / 2] = even_real[k] - X;
        imag[k + n / 2] = even_imag[k] - Y; // Fixed missing semicolon
    }
}
