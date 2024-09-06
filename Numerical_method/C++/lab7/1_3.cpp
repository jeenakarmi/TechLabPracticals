// Simpson's 1/3 Rule

#include <iostream>
#include <cmath>

// Define the function to integrate
double f(double x) {
    return 1 / (1 + x * x);
}

// Simpson's 1/3 Rule function
double simpsons_1_3_rule(double a, double b, int n) {
    // Ensure n is even
    if (n % 2 != 0) {
        std::cerr << "Error: Number of subintervals must be even." << std::endl;
        return 0;
    }

    // Calculate step size
    double h = (b - a) / n;

    // Initial sum
    double s = f(a) + f(b);

    // Compute the sum of even-indexed terms
    for (int i = 1; i < n; i += 2) {
        s += 4 * f(a + i * h);
    }

    // Compute the sum of odd-indexed terms
    for (int i = 2; i < n; i += 2) {
        s += 2 * f(a + i * h);
    }

    // Final result
    return s * h / 3;
}

int main() {
    // Input section
    double lower_limit, upper_limit;
    int sub_intervals;

    std::cout << "Enter lower limit of integration: ";
    std::cin >> lower_limit;

    std::cout << "Enter upper limit of integration: ";
    std::cin >> upper_limit;

    std::cout << "Enter number of subintervals (must be even): ";
    std::cin >> sub_intervals;

    // Calculate the integral using Simpson's 1/3 Rule
    double result = simpsons_1_3_rule(lower_limit, upper_limit, sub_intervals);

    // Output result
    std::cout << "Integration result by Simpson's 1/3 method is: " << result << std::endl;

    return 0;
}
