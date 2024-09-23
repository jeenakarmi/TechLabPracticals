// Euler's Method, Heun's Method & Runge-Kutta Method

#include <iostream>
#include <iomanip>
using namespace std;

double f(double x, double y) {
    return (2 * y) / x;
}

double eulers(double x0, double y0, double xn, double h) {
    int n = (xn - x0) / h;
    double yn = 0;
    cout << "\nEuler's Method:\n";
    cout << "x0\t\ty0\t\txn\t\tyn\n";
    for (int i = 0; i < n; i++) {
        yn = y0 + h * f(x0, y0);  // Using the current x0
        cout << fixed << setprecision(4) << x0 << "\t\t" << y0 << "\t\t" << xn << "\t\t" << yn << endl;
        y0 = yn;
        x0 = x0 + h;  // Increment x0 by step size h
    }
    return yn;
}

double heuns(double x0, double y0, double xn, double h) {
    int n = (xn - x0) / h;
    double yn = 0;
    cout << "\nHeun's Method:\n";
    cout << "x0\t\ty0\t\txn\t\tyn\n";
    for (int i = 0; i < n; i++) {
        double ypredict = y0 + h * f(x0, y0);
        yn = y0 + (h / 2) * (f(x0, y0) + f(x0 + h, ypredict));  // Update with the new x
        cout << fixed << setprecision(4) << x0 << "\t\t" << y0 << "\t\t" << xn << "\t\t" << yn << endl;
        y0 = yn;
        x0 = x0 + h;  // Increment x0 by step size h
    }
    return yn;
}

double runge_kutta(double x0, double y0, double xn, double h) {
    int n = (xn - x0) / h;
    double yn = 0;
    cout << "\nRunge-Kutta Method:\n";
    cout << "x0\t\ty0\t\txn\t\tyn\n";
    for (int i = 0; i < n; i++) {
        double k1 = h * f(x0, y0);
        double k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        double k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        double k4 = h * f(x0 + h, y0 + k3);
        double k = (k1 + 2 * (k2 + k3) + k4) / 6;
        yn = y0 + k;
        cout << fixed << setprecision(4) << x0 << "\t\t" << y0 << "\t\t" << xn << "\t\t" << yn << endl;
        y0 = yn;
        x0 = x0 + h;  // Increment x0 by step size h
    }
    return yn;
}

int main() {
    double x0, y0, xn, h;
    cout << "Enter x0: ";
    cin >> x0;
    cout << "Enter y0: ";
    cin >> y0;
    cout << "Enter xn: ";
    cin >> xn;
    cout << "Enter step size (h): ";
    cin >> h;

    double euler_result = eulers(x0, y0, xn, h);
    double heun_result = heuns(x0, y0, xn, h);
    double runge_kutta_result = runge_kutta(x0, y0, xn, h);

    cout << "\nFinal Results:\n";
    cout << "Euler's Method: " << fixed << setprecision(4) << euler_result << endl;
    cout << "Heun's Method: " << fixed << setprecision(4) << heun_result << endl;
    cout << "Runge-Kutta Method: " << fixed << setprecision(4) << runge_kutta_result << endl;

    return 0;
}
