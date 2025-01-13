#include <stdio.h>
#include <math.h>

// Function to calculate the modified Bessel function of the first kind, order 0
float bess(float x) {
    float sum = 1.0; // Initialize sum for the series
    float term = 1.0; // First term of the series
    for (int n = 1; n < 25; n++) {
        term *= (x / (2 * n)); // Calculate each term
        sum += term * term; // Sum of squares of terms
    }
    return sum;
}

// Function to calculate factorial
float fact(int q) {
    float result = 1.0;
    for (int p = 1; p <= q; p++) {
        result *= p; // Calculate factorial
    }
    return result;
}

int main() {
    printf("FIR LPF using circular buffer\n");
    printf("KAISER window:\n");

    // Declare variables for filter specifications
    float fp, fs, sf, ap, as, ds, dp, del, beta, alpha;
    
    // Input specifications from user
    printf("Enter pass band frequency (fp): ");
    scanf("%f", &fp);
    printf("Enter stop band frequency (fs): ");
    scanf("%f", &fs);
    printf("Enter sampling frequency (Fs): ");
    scanf("%f", &sf);
    
    printf("Enter pass band ripple (dB): ");
    scanf("%f", &ap);
    printf("Enter stop band attenuation (dB): ");
    scanf("%f", &as);

    // Calculate deltas
    ds = pow(10, (-0.05 * as)); // Delta s
    dp = (pow(10, (0.05 * ap)) - 1) / (pow(10, (0.05 * ap)) + 1); // Delta p

    // Determine minimum delta
    del = (ds > dp) ? dp : ds;

    // Calculate alpha based on stop band attenuation
    if (as <= 21) {
        alpha = 0;
    } else if (as > 21 && as <= 50) {
        alpha = (0.5842 * pow(as - 21, 0.4)) + (0.07886 * (as - 21));
    } else {
        alpha = 0.1102 * (as - 8.7);
    }

    // Calculate transition width and filter order
    float transition_width = fs - fp; // Transition width
    float df = transition_width / sf; // Normalized transition width
    int N = ceil((alpha / df) + 1); // Order of filter

    if (N % 2 == 0) N++; // Ensure N is odd

    printf("Filter Order N = %d\n", N);

    float fcut = fp / sf; // Critical frequency normalized

    // Impulse response array and window array
    float h[130], w[130], r[130];
    
    h[0] = 2 * fcut; // First coefficient

    for (int i = 1; i < N; i++) {
        h[i] = sin(2 * M_PI * fcut * i / sf) / (i * M_PI); // Sinc function
        if (i == N / 2) h[i] = h[i] / 2; // Handle division by zero at center
    }

    // Calculate Kaiser window coefficients and modified impulse response
    int c = (N - 1) / 2;
    
    for (int i = 0; i <= c; i++) {
        float temp1 = (2 * i);
        float temp2 = temp1 / (N - 1);
        float temp3 = sqrt(1 - temp2 * temp2);
        beta = alpha * temp3;

        w[i] = bess(beta) / bess(alpha); // Kaiser window coefficients
        r[i] = h[i] * w[i]; // Modified impulse response

        printf("r[%d] = %f\n", i, r[i]); // Print modified impulse response coefficients
    }

    return 0;
}
