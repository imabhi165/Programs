#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846

void computeDFT(float real_in[], float imag_in[], float real_out[], float imag_out[], int N) {
    for (int k = 0; k < N; k++) {
        real_out[k] = 0;
        imag_out[k] = 0;
        for (int n = 0; n < N; n++) {
            float angle = -2 * PI * k * n / N;
            real_out[k] += real_in[n] * cos(angle) - imag_in[n] * sin(angle);
            imag_out[k] += real_in[n] * sin(angle) + imag_in[n] * cos(angle);
        }
    }
}

void computeIDFT(float real_in[], float imag_in[], float real_out[], float imag_out[], int N) {
    for (int n = 0; n < N; n++) {
        real_out[n] = 0;
        imag_out[n] = 0;
        for (int k = 0; k < N; k++) {
            float angle = 2 * PI * k * n / N;
            real_out[n] += real_in[k] * cos(angle) - imag_in[k] * sin(angle);
            imag_out[n] += real_in[k] * sin(angle) + imag_in[k] * cos(angle);
        }
        real_out[n] /= N;
        imag_out[n] /= N;
    }
}

void linearConvolution(float x[], int nx, float h[], int nh, float y[]) {
    int ny = nx + nh - 1;
    for (int n = 0; n < ny; n++) {
        y[n] = 0;
        for (int k = 0; k < nx; k++) {
            if (n - k >= 0 && n - k < nh) {
                y[n] += x[k] * h[n - k];
            }
        }
    }
}

void circularConvolution(float x[], float h[], float y[], int N) {
    for (int n = 0; n < N; n++) {
        y[n] = 0;
        for (int k = 0; k < N; k++) {
            int index = (n - k + N) % N;
            y[n] += x[k] * h[index];
        }
    }
}

void convolutionUsingDFT(float x[], float h[], float y[], int N) {
    float *X_real = (float *)malloc(N * sizeof(float));
    float *X_imag = (float *)malloc(N * sizeof(float));
    float *H_real = (float *)malloc(N * sizeof(float));
    float *H_imag = (float *)malloc(N * sizeof(float));
    float *Y_real = (float *)malloc(N * sizeof(float));
    float *Y_imag = (float *)malloc(N * sizeof(float));

    float *x_imag = (float *)calloc(N, sizeof(float));
    float *h_imag = (float *)calloc(N, sizeof(float));

    computeDFT(x, x_imag, X_real, X_imag, N);
    computeDFT(h, h_imag, H_real, H_imag, N);

    for (int k = 0; k < N; k++) {
        Y_real[k] = X_real[k] * H_real[k] - X_imag[k] * H_imag[k];
        Y_imag[k] = X_real[k] * H_imag[k] + X_imag[k] * H_real[k];
    }

    computeIDFT(Y_real, Y_imag, y, h_imag, N);

    free(X_real);
    free(X_imag);
    free(H_real);
    free(H_imag);
    free(Y_real);
    free(Y_imag);
    free(x_imag);
    free(h_imag);
}

int main() {
    int choice;

    do {
        printf("\nChoose an operation:\n");
        printf("1. DFT\n2. IDFT\n3. Circular Convolution\n4. Linear Convolution\n5. Convolution using DFT and IDFT\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            int nx, nh, N;

            if (choice == 4) {
                printf("Enter the size of the input signal x(n): ");
                scanf("%d", &nx);
                printf("Enter the size of the impulse response h(n): ");
                scanf("%d", &nh);

                int ny = nx + nh - 1;
                float *x = (float *)calloc(nx, sizeof(float));
                float *h = (float *)calloc(nh, sizeof(float));
                float *y = (float *)calloc(ny, sizeof(float));

                printf("Enter the input signal x(n):\n");
                for (int i = 0; i < nx; i++) {
                    printf("x[%d] = ", i);
                    scanf("%f", &x[i]);
                }

                printf("Enter the impulse response h(n):\n");
                for (int i = 0; i < nh; i++) {
                    printf("h[%d] = ", i);
                    scanf("%f", &h[i]);
                }

                linearConvolution(x, nx, h, nh, y);
                printf("Linear Convolution Results:\n");
                for (int i = 0; i < ny; i++) {
                    printf("y[%d] = %.2f\n", i, y[i]);
                }

                free(x);
                free(h);
                free(y);
            } else {
                printf("Enter the size of the signal: ");
                scanf("%d", &N);

                float *x = (float *)calloc(N, sizeof(float));
                float *h = (float *)calloc(N, sizeof(float));
                float *y = (float *)calloc(N, sizeof(float));

                if (choice == 3 || choice == 5) {
                    printf("Enter the input signal x(n):\n");
                    for (int i = 0; i < N; i++) {
                        printf("x[%d] = ", i);
                        scanf("%f", &x[i]);
                    }

                    printf("Enter the impulse response h(n):\n");
                    for (int i = 0; i < N; i++) {
                        printf("h[%d] = ", i);
                        scanf("%f", &h[i]);
                    }

                    if (choice == 3) {
                        circularConvolution(x, h, y, N);
                        printf("Circular Convolution Results:\n");
                        for (int i = 0; i < N; i++) {
                            printf("y[%d] = %.2f\n", i, y[i]);
                        }
                    } else {
                        convolutionUsingDFT(x, h, y, N);
                        printf("Convolution using DFT and IDFT Results:\n");
                        for (int i = 0; i < N; i++) {
                            printf("y[%d] = %.2f\n", i, y[i]);
                        }
                    }
                } else if (choice == 1 || choice == 2) {
                    printf("Enter the input signal x(n):\n");
                    for (int i = 0; i < N; i++) {
                        printf("x[%d] = ", i);
                        scanf("%f", &x[i]);
                    }

                    float *x_imag = (float *)calloc(N, sizeof(float));
                    float *y_imag = (float *)calloc(N, sizeof(float));

                    if (choice == 1) {
                        computeDFT(x, x_imag, y, y_imag, N);
                        printf("DFT Results:\n");
                        for (int i = 0; i < N; i++) {
                            printf("X[%d] = %.2f + j%.2f\n", i, y[i], y_imag[i]);
                        }
                    } else {
                        printf("Enter the imaginary part of the input signal (if none, enter 0):\n");
                        for (int i = 0; i < N; i++) {
                            printf("x_imag[%d] = ", i);
                            scanf("%f", &x_imag[i]);
                        }
                        computeIDFT(x, x_imag, y, y_imag, N);
                        printf("IDFT Results:\n");
                        for (int i = 0; i < N; i++) {
                            printf("x[%d] = %.2f + j%.2f\n", i, y[i], y_imag[i]);
                        }
                    }

                    free(x_imag);
                    free(y_imag);
                }

                free(x);
                free(h);
                free(y);
            }
        } else if (choice == 6) {
            printf("Exiting the program.\n");
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
