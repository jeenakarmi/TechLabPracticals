// Fixed - point Method

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

// Define function f(x) which is to be solved
#define f(x) (x*x + x - 2)
// Write f(x) as x = g(x) and define g(x) here
#define g(x) (2.0 - x*x)

using namespace std;

int main() {
    int step = 1, N;
    float x0, x1, e;

    cout << setprecision(6) << fixed;

    // Inputs
    cout << "Enter initial guess: ";
    cin >> x0;

    cout << "Enter tolerable error: ";
    cin >> e;

    cout << "Enter maximum iteration: ";
    cin >> N;

    do {
        x1 = g(x0);
        cout << "Iteration-" << step << ":\t x1 = " << setw(10) << x1 << " and f(x1) = " << setw(10) << f(x1) << endl;

        step++;

        if (step > N) {
            cout << "Not Convergent." << endl;
            exit(0);
        }

        x0 = x1;

    } while (fabs(f(x1)) > e);

    cout << endl << "Root is " << x1 << endl;

    return 0;
}
