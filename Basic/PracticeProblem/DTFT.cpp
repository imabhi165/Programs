#include <iostream>
#include <complex>
#include <cmath>
#include <vector>

using namespace std;
using namespace complex_literals;

// Function to calculate the DFT
vector<complex<double>> dft(const vector<double>& x) {
    int N = x.size();
    vector<complex<double>> X(N);

    for (int k = 0; k < N; ++k) {
        complex<double> sum(0.0, 0.0);
        for (int n = 0; n < N; ++n) {
            double angle = 2.0 * M_PI * k * n / N;
            sum += x[n] * exp(-1i * angle);
        }
        X[k] = sum / N; // Normalize
    }

    return X;
}

int main() {
    // Sample signal (replace with your desired signal)
    vector<double> x = {1.0, 2.0, 3.0, 4.0};

    // Calculate DFT
    vector<complex<double>> X = dft(x);

    // Print the magnitude and phase of each component (alternative to plotting)
    cout << "DFT coefficients:" << endl;
    for (int k = 0; k < X.size(); ++k) {
        cout << "k = " << k << ": magnitude = " << abs(X[k]) << ", phase = " << arg(X[k]) << endl;
    }

    return 0;
}
