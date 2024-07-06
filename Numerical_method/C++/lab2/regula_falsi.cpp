// Regula - Falsi Method

#include <iostream>
#include <cmath>
#include <iomanip>

double f(double x) {
    return x * x - 4;
}

double regulaFalsi(double a, double b, double tol, int max_iter) {
    if (f(a) * f(b) >= 0) {
        std::cerr << "Error: f(a) and f(b) must have opposite signs." << std::endl;
        return -1;
    }

    double c = a;

    for (int i = 0; i < max_iter; ++i) {
        c = b - (f(b) * (b - a)) / (f(b) - f(a));

        if (std::abs(f(c)) < tol) {
            break;
        }

        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}

int main() {
    double a, b, tol;
    int max_iter;

    std::cout << "Enter the interval [a, b]: ";
    std::cin >> a >> b;
    std::cout << "Enter the tolerance: ";
    std::cin >> tol;
    std::cout << "Enter the maximum number of iterations: ";
    std::cin >> max_iter;

    double root = regulaFalsi(a, b, tol, max_iter);

    if (root != -1) {
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "The root is: " << root << std::endl;
    }

    return 0;
}

