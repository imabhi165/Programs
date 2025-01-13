#include <stdio.h>
#include <math.h>

// Function to calculate the modified Bessel function of the first kind, order 0
float bess(float x) {
    int j;
    float b1, b2, b3, b4, b5, b6, b7 = 1.0; 
    b1 = pow(x, 2); 
    b2 = 0.25 * b1;
    
    for (j = 1; j < 25; j++) {
        b3 = pow(b2, j);
        b4 = fact(j);
        b5 = pow(b4, 2); 
        b6 = b3 / b5; 
        b7 = b7 + b6;
    }
    
    return b7;
}

// Function to calculate factorial of a number
float fact(int q) {
    int p;
    float a = 1.0, c = 1.0; 
    
    for (p = 1; p <= q; p++) {
        a *= p; // Calculate factorial
    }
    
    return a;
}

int main() {
    printf("FIR LPF using circular buffer\n");
    printf("KAISER window:\n");

    // Declare variables for filter specifications
    float f, f1, f2, fc, fp, fs, df, sf, fcut;
    float h[130], alpha, ap, as; 
    float ds, d, dp, del, beta;
    float Ioa, Iob, r[130], w[130], stop_attn;

    // Input specifications from user
    printf("Enter pass band frequency (fp): ");
    scanf("%f", &fp);
    printf("Enter stop band frequency (fs): ");
    scanf("%f", &fs);
    printf("Enter sampling frequency (Fs): ");
    scanf("%f", &sf);

    // Kaiser window
    printf("Enter pass band ripple (dB): ");
    scanf("%f", &ap);
    printf("Enter stop band attenuation (dB): ");
    scanf("%f", &as);
    
    ds = pow(10, (-0.05 * as)); // Delta s 
    dp = (pow(10, (0.05 * ap)) - 1) / (pow(10, (0.05 * ap)) + 1); // Delta p

    // Find delta = minimum(delta p, delta s)
    del = (ds > dp) ? dp : ds;

    // Calculate alpha based on stop band attenuation
    if (as <= 21) {
        alpha = 0; 
        d = 0.9222;
    } else if (as > 21 && as <= 50) {
        alpha = (0.5842 * pow(as - 21, 0.4)) + (0.07886 * (as - 21)); 
        d = (as - 7.95) / 14.36;
    } else {
        alpha = 0.1102 * (as - 8.7); 
        d = (as - 7.95) / 14.36;
    }

    // Calculate impulse response of various filters
    f = fs - fp; // Transition width
    df = f / sf; // Normalized transition 
    int N = ceil((d / df) + 1); // Order of filter
    
    if (N % 2 == 0) N++; // Ensure N is odd

    printf("N=%d\n", N);
    
    fcut = fp / sf; // Critical frequency normalized
    h[0] = 2 * fcut;

    for (int i = 1; i < N; i++) {
        h[i] = sin(2 * M_PI * fcut * i / sf) / (i * M_PI); // Sinc function
        if (i == N / 2) h[i] /= 2; // Handle division by zero at center
    }

    printf("Low pass filter coefficients:\n");
    
    int c = (N - 1) / 2;

   // Calculate Kaiser window coefficients and modified impulse response r[]
   for (int i = 0; i <= c; i++) {
        float temp1 = (2 * i); 
        float kemp = temp1 / (N - 1); 
        float temp2 = kemp * kemp; 
        float temp3 = sqrt(1 - temp2);
        
        beta = alpha * temp3;

        w[i] = bess(beta) / bess(alpha); // Kaiser window coefficients
        r[i] = h[i] * w[i]; // Modified impulse response

        printf("r[%d]=%f\n", i, r[i]); // Print modified impulse response coefficients
   }

   return 0;
}
