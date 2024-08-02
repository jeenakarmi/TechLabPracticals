//  Least Square Regression

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of iterations: ";
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

        double xy = x * y;
        double sq_x = pow(x, 2);
        sum_x += x;
        sum_y += y;
        sum_xy += xy;
        sum_sq_x += sq_x;
    }

    cout << "Sum of x is: " << sum_x << "\tSum of y is: " << sum_y << endl;
    cout << "Sum of square of x is: " << sum_sq_x << endl;
    cout << "Sum of xy is: " << sum_xy << endl;

    double b = (n * sum_xy - (sum_x * sum_y)) / (n * sum_sq_x - pow(sum_x, 2));
    double a = (sum_y - b * sum_x) / n;

    cout << "A: " << a << "\tB: " << b << endl;
    cout << "Required equation is: y = " << a << " + " << b << "x" << endl;

    return 0;
}
