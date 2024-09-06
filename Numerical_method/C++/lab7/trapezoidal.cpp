// Trapezoidal Rule

#include <iostream>
#include <cmath>

// Define the function to integrate
double f(double x) {
    return 1 / (1 + x * x);
}

// Trapezoidal Rule function
double trapezoidal(double x0, double xn, int n) {
    // Calculate step size
    double h = (xn - x0) / n;
    double integration = f(x0) + f(xn);

    // Compute the sum
    for (int i = 1; i < n; ++i) {
        double k = x0 + i * h;
        integration += 2 * f(k);
    }

    // Final integration value
    integration *= h / 2;
    return integration;
}

int main() {
    // Input section
    double lower_limit, upper_limit;
    int sub_intervals;

    std::cout << "Enter lower limit of integration: ";
    std::cin >> lower_limit;

    std::cout << "Enter upper limit of integration: ";
    std::cin >> upper_limit;

    std::cout << "Enter number of subintervals: ";
    std::cin >> sub_intervals;

    // Calculate the integral using the Trapezoidal Rule
    double result = trapezoidal(lower_limit, upper_limit, sub_intervals);

    // Output result
    std::cout << "Integration result by Trapezoidal method is: " << result << std::endl;

    return 0;
}
