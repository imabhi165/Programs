#include <stdio.h>

void FirFilter(float x[], float h[], float y[], int n, int M) {
    for (int nIdx = 0; nIdx < n + M - 1; nIdx++) {
        y[nIdx] = 0;
        for (int k = 0; k < M; k++) {
            if (nIdx - k >= 0) {
                y[nIdx] += h[k] * x[nIdx - k];
            }
        }
    }
}

int main() {
    int n, M;

    // Read filter tap (M) and input signal length (n)
    printf("Enter the number of taps of the filter (M): ");
    scanf("%d", &M);

    printf("Enter the size of input signal (n): ");
    scanf("%d", &n);

    // Declare input signal and impulse response arrays
    float ip[n], H[M];

    // Read input signal
    printf("Enter the input signal:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &ip[i]);
    }

    // Read impulse response
    printf("Enter the impulse response (h):\n");
    for (int i = 0; i < M; i++) {
        scanf("%f", &H[i]);
    }

    // Calculate the output signal
    float y[n + M - 1];  // Output signal length is n + M - 1
    FirFilter(ip, H, y, n, M);

    // Print the output signal
    printf("Output signal (y):\n");
    for (int i = 0; i < n + M - 1; i++) {
        printf("y[%d] = %f\n", i, y[i]);
    }

    return 0;
}
