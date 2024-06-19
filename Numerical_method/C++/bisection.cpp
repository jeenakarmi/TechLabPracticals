/*
Bisection Method to find the root of polynomial function
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Define the polynomial function to find the root.
double f(double x) {
    return x * x - 4 * x - 10;
}

double bisection(double a, double b, double tol) {
    if (f(a) * f(b) >= 0) {
        cout << "Bisection method fails. The function must have different signs at the endpoints a and b." << endl;
        return -1;
    }
    
    double c = a;
    int iteration = 0;

    // Set precision to 3 decimal places
    cout << fixed << setprecision(3);
    
    cout << setw(10) << "Iteration" << setw(15) << "a" << setw(15) << "b" << setw(15) << "c" << setw(20) << "f(c)" << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    while ((b - a) >= tol) {
        c = (a + b) / 2; // Find the midpoint
        iteration++;

        cout << setw(10) << iteration << setw(15) << a << setw(15) << b << setw(15) << c << setw(20) << f(c) << endl;
        
        // Check if the midpoint is a root
        if (f(c) == 0.0) {
            break;
        }
        // Decide the side to repeat the steps
        else if (f(c) * f(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    return c;
}

int main() {
    double a, b, tol;
    
    cout << "Enter the left endpoint a: ";
    cin >> a;
    cout << "Enter the right endpoint b: ";
    cin >> b;
    cout << "Enter the tolerance: ";
    cin >> tol;
    
    double result = bisection(a, b, tol);
    if (result != -1) {
        cout << "----------------------------------------------------------------------------" << endl;
        // Reset precision to default after printing the table
        cout << fixed << setprecision(6);
        cout << "The root of the polynomial within the given tolerance is: " << result << endl;
    }

    return 0;
}
