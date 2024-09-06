// Simpson's 3/8 Rule

#include <iostream>
#include <cmath>

// Define the function to integrate
double f(double x) {
    return 1 / (1 + x * x);
}

// Simpson's 3/8 Rule function
double simpsons_3_8_rule(double x0, double xn, int n) {
    // Ensure n is a multiple of 3
    if (n % 3 != 0) {
        std::cerr << "Error: Number of subintervals must be a multiple of 3." << std::endl;
        return 0;
    }

    // Calculate step size
    double h = (xn - x0) / n;
    double integration = f(x0) + f(xn);

    // Compute the sum
    for (int i = 1; i < n; ++i) {
        double k = x0 + i * h;
        if (i % 3 == 0) {
            integration += 2 * f(k);
        } else {
            integration += 3 * f(k);
        }
    }

    // Final integration value
    integration *= 3 * h / 8;
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

    std::cout << "Enter number of subintervals (must be a multiple of 3): ";
    std::cin >> sub_intervals;

    // Calculate the integral using Simpson's 3/8 Rule
    double result = simpsons_3_8_rule(lower_limit, upper_limit, sub_intervals);

    // Output result
    std::cout << "Integration result by Simpson's 3/8 method is: " << result << std::endl;

    return 0;
}
