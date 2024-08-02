//  To fit a curve of the power form 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of iterations: ";
    cin >> n;

    double sum_x = 0;
    double sum_y = 0;
    double sum_xy = 0;
    double sum_sq_x = 0;

    for (int i = 0; i < n; ++i) {
        double x, y;
        cout << "Enter value of x: ";
        cin >> x;
        cout << "Enter value of y: ";
        cin >> y;

        double ln_x = log(x);
        double ln_y = log(y);

        sum_x += ln_x;
        sum_y += ln_y;
        sum_xy += ln_x * ln_y;
        sum_sq_x += ln_x * ln_x;
    }

    cout << "Sum of x is: " << sum_x << "\tSum of y is: " << sum_y << endl;
    cout << "Sum of square of x is: " << sum_sq_x << endl;
    cout << "Sum of xy is: " << sum_xy << endl;

    double b = (n * sum_xy - sum_x * sum_y) / (n * sum_sq_x - pow(sum_x, 2));
    double a = (sum_y - b * sum_x) / n;

    double A = exp(a);

    cout << "A: " << A << "\tB: " << b << endl;
    cout << "Required equation is: y = " << A << " * x^" << b << endl;

    return 0;
}
