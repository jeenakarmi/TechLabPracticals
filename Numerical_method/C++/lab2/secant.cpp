// Secant method

#include <iostream>
#include <cmath>
#include <iomanip> // for std::fixed and std::setprecision

// Define the function f(x) = x^3 - 2x - 5
double f(double x) {
    return x * x * x - 2 * x - 5;
}

// Secant method to find the root
double secantMethod(double initialGuess1, double initialGuess2, double tolerance, int maxIterations) {
    double x1 = initialGuess1;
    double x2 = initialGuess2;
    double x3 = 0.0;
    double f1 = f(x1);
    double f2 = f(x2);

    // Print table header
    std::cout << std::left << std::setw(12) << "Iteration" << std::setw(12) << "x1" << std::setw(12) << "f(x1)"
              << std::setw(12) << "x2" << std::setw(12) << "f(x2)" << std::setw(12) << "x3" << std::endl;
    std::cout << std::string(72, '-') << std::endl;

    for (int iterationCount = 1; iterationCount <= maxIterations; ++iterationCount) {
        if (f2 - f1 == 0) {  // Check for division by zero
            std::cout << "Division by zero error in secant method" << std::endl;
            return NAN;
        }

        x3 = (f2 * x1 - f1 * x2) / (f2 - f1);

        // Print table row
        std::cout << std::setw(12) << iterationCount << std::setw(12) << std::fixed << std::setprecision(5) << x1
                  << std::setw(12) << f1 << std::setw(12) << x2 << std::setw(12) << f2 << std::setw(12) << x3 << std::endl;

        if (std::abs(x3 - x2) < tolerance) {  // Check for convergence
            return x3;
        }

        x1 = x2;
        x2 = x3;  // Update guesses
        f1 = f2;
        f2 = f(x2);
    }

    std::cout << "Max iterations reached. No solution found." << std::endl;
    return x3;
}

int main() {
    double initialGuess1 = 2.0;  // Initial guess 1
    double initialGuess2 = 3.0;  // Initial guess 2
    double tolerance = 0.001;    // Tolerance for convergence
    int maxIterations = 100;     // Maximum number of iterations

    double root = secantMethod(initialGuess1, initialGuess2, tolerance, maxIterations);

    if (!std::isnan(root)) {
        std::cout << "\nRoot found: " << std::fixed << std::setprecision(5) << root << std::endl;
    }

    return 0;
}
