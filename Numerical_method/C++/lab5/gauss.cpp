//  Gauss elimination method

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the matrix

void gauss_elimination() {
    int n;
    cout << "Enter the order of matrix: ";
    cin >> n;

    // Initialize the augmented matrix with zeros
    double a[MAX_SIZE][MAX_SIZE + 1] = {0};

    cout << "Enter the Augmented coefficient matrix:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Enter row " << i + 1 << ": ";
        for (int j = 0; j < n + 1; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "\nThe augmented matrix you entered is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n + 1; ++j) {
            cout << fixed << setprecision(2) << a[i][j] << "\t";
            if (j == n - 1) {
                cout << ":\t";
            }
        }
        cout << endl;
    }

    // Applying Gauss Elimination
    for (int i = 0; i < n - 1; ++i) {
        if (a[i][i] == 0) {
            cout << "\nMathematical error" << endl;
            return;
        }
        for (int j = i + 1; j < n; ++j) {
            double ratio = a[j][i] / a[i][i];
            for (int k = 0; k < n + 1; ++k) {
                a[j][k] -= ratio * a[i][k];
            }
        }
    }

    // Upper triangular matrix
    cout << "\nUpper triangular matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n + 1; ++j) {
            cout << fixed << setprecision(0) << abs(a[i][j]) << "\t";
            if (j == n - 1) {
                cout << ":\t";
            }
        }
        cout << endl;
    }

    // Back Substitution
    double x[MAX_SIZE] = {0};
    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    for (int i = n - 2; i >= 0; --i) {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; ++j) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }

    // Display solution
    cout << "\nThe solution is:\n";
    for (int i = 0; i < n; ++i) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(2) << x[i] << endl;
    }
}

int main() {
    gauss_elimination();
    return 0;
}
