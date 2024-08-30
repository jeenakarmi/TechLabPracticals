// Gauss Jacobi Method

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double E = 0.0001; // Tolerance

void jacobi_method() {
    int n;

    // Input the number of equations
    cout << "Enter the number of equations: ";
    cin >> n;

    // Initialize matrices and arrays
    double a[10][10], b[10], x0[10] = {0}, x[10] = {0}; // Assuming maximum 10 equations for simplicity

    // Input the coefficients of the equations
    for (int i = 0; i < n; i++) {
        cout << "Enter row " << i + 1 << " (e.g. '2 -1 1'): ";
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
        cout << "Enter the b[" << i + 1 << "] value: ";
        cin >> b[i];
    }

    // Initial guess for x
    for (int i = 0; i < n; i++) {
        if (a[i][i] == 0) {
            cout << "Diagonal element a[" << i + 1 << "][" << i + 1 << "] is zero, cannot divide by zero." << endl;
            return;
        }
        x0[i] = b[i] / a[i][i];
    }

    // Iteration process
    int iteration = 0;
    while (true) {
        int key = 0;
        for (int i = 0; i < n; i++) {
            double sum = b[i];
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    sum -= a[i][j] * x0[j];
                }
            }
            if (a[i][i] == 0) {
                cout << "Diagonal element a[" << i + 1 << "][" << i + 1 << "] is zero, cannot divide by zero." << endl;
                return;
            }
            x[i] = sum / a[i][i];

            if (abs(x[i] - x0[i]) / (x[i] != 0 ? x[i] : 1) > E) {
                key = 1;
            }
        }

        if (key == 0) {
            break;
        }

        // Update x0 for the next iteration
        for (int i = 0; i < n; i++) {
            x0[i] = x[i];
        }

        // Debugging output for each iteration
        iteration++;
        cout << "Iteration " << iteration << ": ";
        for (int i = 0; i < n; i++) {
            cout << fixed << setprecision(5) << x[i] << " ";
        }
        cout << endl;
    }

    // Output the result
    cout << "The required values are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "x[" << i + 1 << "] = " << fixed << setprecision(3) << x[i] << endl;
    }
}

int main() {
    jacobi_method();
    return 0;
}
