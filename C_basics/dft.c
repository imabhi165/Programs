#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

// Function prototype for besseli
double besseli(int order, double x);

// Kaiser window beta calculation function
double calculate_beta(double attenuation) {
    if (attenuation > 50) {
        return 0.1102 * (attenuation - 8.7);
    } else if (attenuation >= 21) {
        return 0.5842 * pow(attenuation - 21, 0.4) + 0.07886 * (attenuation - 21);
    } else {
        return 0.0; // Rectangular window case
    }
}

// Kaiser window function
double kaiser_window(int n, int N, double beta) {
    double alpha = N / 2.0;
    double t = (n - alpha) / alpha;
    return besseli(0, beta * sqrt(1 - t * t)) / besseli(0, beta);
}

// Modified Bessel function of the first kind, order 0
double besseli(int order, double x) {
    double sum = 1.0, term = 1.0;
    for (int k = 1; k <= 25; k++) {
        term *= (x / (2 * k)) * (x / (2 * k));
        sum += term;
    }
    return sum;
}

// FIR filter design using Kaiser window
void fir_kaiser_lowpass(int N, double fc, double beta, double h[]) {
    double alpha = N / 2.0;
    for (int n = 0; n <= N; n++) {
        double m = n - alpha;
        if (m == 0) {
            h[n] = 2 * fc;
        } else {
            h[n] = sin(2 * PI * fc * m) / (PI * m);
        }
        h[n] *= kaiser_window(n, N, beta); // Apply Kaiser window
    }
}

// Main function
int main() {
    int fs;              // Sampling frequency
    double fp, fsb;      // Passband and stopband frequencies
    double delta_p = 0.01;  // Passband ripple (dB)
    double A_s;          // Stopband attenuation (dB)

    // Take user inputs
    printf("Enter the sampling frequency (Fs in Hz): ");
    scanf("%d", &fs);
    printf("Enter the passband frequency (Fp in Hz): ");
    scanf("%lf", &fp);
    printf("Enter the stopband frequency (Fsb in Hz): ");
    scanf("%lf", &fsb);
    printf("Enter the stopband attenuation (As in dB): ");
    scanf("%lf", &A_s);

    // Calculate normalized cutoff frequency and transition width
    double fc = (fp + fsb) / (2 * fs); // Cutoff frequency (normalized)
    double delta_f = (fsb - fp) / fs;  // Transition width

    // Compute Kaiser parameters
    double beta = calculate_beta(A_s);
    int N = (int)ceil((A_s - 7.95) / (2.285 * 2 * PI * delta_f)); // Filter order
    if (N % 2 != 0) N++; // Ensure N is even

    // Allocate memory for filter coefficients
    double h[N + 1];
    
    // Design the filter
    fir_kaiser_lowpass(N, fc, beta, h);

    // Display filter coefficients
    printf("\nFIR Low-pass Filter Coefficients:\n");
    for (int i = 0; i <= N; i++) {
        printf("h[%d] = %lf\n", i, h[i]);
    }

    return 0;
}
