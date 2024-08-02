//  To fit a curve of the exponential form 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of iterations: ";
    cin >> n;

    double sum_x = 0;
    double sum_ln_y = 0;
    double sum_x_ln_y = 0;
    double sum_x_squared = 0;

    for (int i = 0; i < n; ++i) {
        double x, y;
        cout << "Enter value of x: ";
        cin >> x;
        cout << "Enter value of y: ";
        cin >> y;

        double ln_y = log(y);

        sum_x += x;
        sum_ln_y += ln_y;
        sum_x_ln_y += x * ln_y;
        sum_x_squared += x * x;
    }

    cout << "Sum of x is: " << sum_x << endl;
    cout << "Sum of ln(y) is: " << sum_ln_y << endl;
    cout << "Sum of x * ln(y) is: " << sum_x_ln_y << endl;
    cout << "Sum of x^2 is: " << sum_x_squared << endl;

    double b = (n * sum_x_ln_y - sum_x * sum_ln_y) / (n * sum_x_squared - sum_x * sum_x);
    double a_ln = (sum_ln_y - b * sum_x) / n;

    double A = exp(a_ln);

    cout << "A: " << A << "\tB: " << b << endl;
    cout << "Required equation is: y = " << A << " * e^(" << b << " * x)" << endl;

    return 0;
}
