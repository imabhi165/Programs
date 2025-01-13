#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

typedef struct {
    double real;
    double imag;
} Complex;


void computeIDFT(Complex X[], Complex x[], int N) {
    for (int n = 0; n < N; n++) {
        x[n].real = 0;
        x[n].imag = 0;
        for (int k = 0; k < N; k++) {
            double angle = 2 * PI * k * n / N;
            x[n].real += X[k].real * cos(angle) - X[k].imag * sin(angle);
            x[n].imag += X[k].real * sin(angle) + X[k].imag * cos(angle);
        }
       
        x[n].real /= N;
        x[n].imag /= N;
    }
}

void printComplexArray(Complex arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("x[%d] = %.3f + %.3fj\n", i, arr[i].real, arr[i].imag);
    }
}

int main() {
    int N = 8; // Number of points
    Complex X[] = {
        {1, 0}, {1, 0}, {1, 0}, {1, 0},{1,0},{1,0},{0,0},{0,0}
    };
    Complex x[8];

    computeIDFT(X, x, N);
    printf("IDFT Result:\n");
    printComplexArray(x, N);

    return 0;
}

