//  Gauss-Jordan elimination method

/*
Enter the order of the matrix (e.g., 3 for a 3x3 matrix)
Enter each element of the augmented matrix when prompted
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the matrix

void gauss_jordan() {
    int n;
    cout << "Enter the order of matrix: ";
    cin >> n;

    // Initialize the augmented matrix with zeros
    double a[MAX_SIZE][MAX_SIZE + 1] = {0};

    cout << "Enter the Augmented coefficient matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n + 1; ++j) {
            cout << "a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nThe augmented matrix you entered is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n + 1; ++j) {
            double value = a[i][j];
            // Convert small negative values close to zero to positive zero
            if (abs(value) < 1e-10) {
                value = 0;
            }
            cout << fixed << setprecision(2) << value << "\t";
            if (j == n - 1) {
                cout << ":\t";
            }
        }
        cout << endl;
    }

    // Applying Gauss-Jordan Elimination
    for (int i = 0; i < n; ++i) {
        if (abs(a[i][i]) < 1e-10) {
            cout << "\nMathematical Error!" << endl;
            return;
        }

        // Make the diagonal element 1 and make other elements in the column 0
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                double ratio = a[j][i] / a[i][i];
                for (int k = 0; k < n + 1; ++k) {
                    a[j][k] -= ratio * a[i][k];
                }
            }
        }

        // Scale the pivot rows
        double divisor = a[i][i];
        for (int j = 0; j < n + 1; ++j) {
            a[i][j] /= divisor;
        }
    }

    // Print the final matrix
    cout << "\nThe final matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            double value = a[i][j];
            // Convert small negative values close to zero to positive zero
            if (abs(value) < 1e-10) {
                value = 0;
            }
            cout << fixed << setprecision(2) << value << "\t";
        }
        cout << ":\t";
        double value = a[i][n];
        if (abs(value) < 1e-10) {
            value = 0;
        }
        cout << fixed << setprecision(2) << value << endl;
    }

    // Obtain solution
    double x[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        x[i] = a[i][n];
    }

    // Display solution
    cout << "\nThe solution is:\n";
    for (int i = 0; i < n; ++i) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(2) << x[i] << endl;
    }
}

int main() {
    gauss_jordan();
    return 0;
}
